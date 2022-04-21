//
// Created by OMEN on 18/04/2022.
//

#ifndef DA_PROJ1_CARRINHA_H
#define DA_PROJ1_CARRINHA_H

#include <vector>
#include "encomenda.h"


class carrinha {
private:
    int VolMax;
    int PesoMax;
    int Custo;
    std::vector<encomenda *> mail;
    int volume=0;
    int peso=0;
public:
    carrinha(int VolMax,int PesoMax, int Custo );
    int getVM_car() const {
        return VolMax;
    };
    int getPM_car() const {
        return PesoMax;
    };
    int getC_car() const {
        return Custo;
    };
    int getV_car(){
        return volume;
    };
    int getP_car() {
        return peso;
    };
    std::vector<encomenda*> *getmail(){
        return &mail;
    }
    void setV(int volume){
        this->volume=volume;
    }
    void setP(int peso){
        this->peso=peso;
    }

    int nova_Encomenda(encomenda *Encomenda);
    int remover_Encomenda(encomenda *Encomenda);
    void esvaziar_carrinha();
    int carrinha_cheia (encomenda *Encomenda);



};


#endif //DA_PROJ1_CARRINHA_H
