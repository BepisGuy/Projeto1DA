//
// Created by OMEN on 18/04/2022.
//

#include "encomenda.h"

encomenda::encomenda(int Volume, int Peso, int Recompensa):
                     Volume(Volume), Peso(Peso), Recompensa(Recompensa){
}
EncomendaExpresso::EncomendaExpresso(int Volume, int Peso, int Recompensa, int Duracao):
        encomenda(Volume, Peso, Recompensa), Duracao(Duracao){
}
