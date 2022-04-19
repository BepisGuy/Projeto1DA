//
// Created by OMEN on 18/04/2022.
//

#ifndef DA_PROJ1_CARRINHA_H
#define DA_PROJ1_CARRINHA_H


class carrinha {
private:
    int VolMax;
    int PesoMax;
    int Custo;
public:
    carrinha(int VolMax,int PesoMax, int Custo );
    int getVM_car() const {
        return VolMax;
    };
    int getPM() const {
        return PesoMax;
    };
    int getC() const {
        return Custo;
    };
};


#endif //DA_PROJ1_CARRINHA_H
