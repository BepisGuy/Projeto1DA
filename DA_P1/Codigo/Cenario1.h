//
// Created by OMEN on 20/04/2022.
//

#ifndef DA_PROJ1_CENARIO1_H
#define DA_PROJ1_CENARIO1_H

#include "carrinha.h"
#include "encomenda.h"
#include "algorithm"

class Cenario1 {
private:
    std::vector<encomenda*> entregas;
    std::vector<carrinha*> estafetas;
public:
    void cenario1(std::vector<carrinha*> estafetas,std::vector<encomenda*> entregas);
    bool sort_entrega_VP(const encomenda *a, const encomenda *b);
    bool sort_carrinha_VP(const carrinha *a, const carrinha *b);
    bool tem_espaço(const encomenda *entrega, const carrinha *estafeta);
};


#endif //DA_PROJ1_CENARIO1_H
