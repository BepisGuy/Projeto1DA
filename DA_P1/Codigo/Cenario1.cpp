//
// Created by OMEN on 20/04/2022.
//

#include "Cenario1.h"
#include "carrinha.cpp"
#include "carrinha.h"
#include "encomenda.cpp"

using namespace std;

bool Cenario1::sort_entrega_VP(const encomenda *a, const encomenda *b){
    if (a->getP_enc() == b->getP_enc()){
        return a->getV_enc() < b->getV_enc();
    }
    else if (a->getV_enc() == b->getV_enc()){
        return a->getP_enc() < b->getP_enc();
    }
    else {
        return a->getV_enc() < b->getV_enc();
    };
};

bool Cenario1::sort_carrinha_VP(const carrinha *a, const carrinha *b){
    if (a->getPM_car() == b->getPM_car()){
        return a->getVM_car() < b->getVM_car();
    }
    else if (a->getVM_car() == b->getVM_car()){
        return a->getPM_car() < b->getPM_car();
    }
    else {
        return a->getVM_car() < b->getVM_car();
    };
}

bool Cenario1::tem_espaço(const encomenda *entrega, const carrinha *estafeta){
    return (entrega->getV_enc() <= estafeta->getVM_car()) && (entrega->getP_enc() <= estafeta->getPM_car());
};

void Cenario1::cenario1() {
    sort(entregas.begin(), entregas.end(), sort_entrega_VP);
    sort(estafetas.begin(), estafetas.end(), sort_carrinha_VP);

    for(int i=0; i<entregas.size(); i++){
        if(tem_espaço(entregas,estafetas))
            carrinha.nova_Encomenda(encomenda);
    };
}







