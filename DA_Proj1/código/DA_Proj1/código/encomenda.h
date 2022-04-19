//
// Created by OMEN on 18/04/2022.
//

#ifndef DA_PROJ1_ENCOMENDA_H
#define DA_PROJ1_ENCOMENDA_H


class encomenda {
private:
    int Volume;
    int Peso;
    int Recompensa;
public:
    encomenda(int Volume, int Peso, int Recompensa);
    int getV_enc() const{
        return Volume;
    }
    int getP_enc() const{
        return Peso;
    }
    int getR_enc() const{
        return Recompensa;
    }
};


#endif //DA_PROJ1_ENCOMENDA_H
