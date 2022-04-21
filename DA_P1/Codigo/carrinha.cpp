//
// Created by OMEN on 18/04/2022.
//

#include <iostream>
#include "carrinha.h"

carrinha::carrinha(int VolMax, int PesoMax,int Custo):
                    VolMax(VolMax), PesoMax(PesoMax), Custo(Custo){
}

int carrinha::nova_Encomenda (encomenda *Encomenda){
    if(carrinha_cheia(Encomenda)) {
        mail.push_back(Encomenda);
        volume+=Encomenda->getV_enc();
        peso+=Encomenda->getP_enc();
    }
    std::cout << "Carrinha cheia";
    return 0;
}

int carrinha::carrinha_cheia(encomenda *Encomenda) {
    if (Encomenda->getV_enc() + volume < VolMax || Encomenda->getP_enc() + peso < PesoMax) {
        return 1;
    }
    return 0;
}

int carrinha::remover_Encomenda(encomenda *Encomenda) {
    for(auto itr_car = mail.begin(); itr_car != mail.end(); itr_car++){
        if(*itr_car==Encomenda){
            volume-=Encomenda->getV_enc();
            peso-=Encomenda->getP_enc();
            mail.erase(itr_car);
            return 1;
        }
    }
    return 0;
}

void carrinha::esvaziar_carrinha() {
    peso=0;
    volume=0;
    mail.clear();
}
