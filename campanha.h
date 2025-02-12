#ifndef CAMPANHA_H
#define CAMPANHA_H
#include <iostream>
#include <vector>

#include "batalha.h"

class Campanha {
    vector<Batalha*> batalhas;

public:
    Campanha();
    ~Campanha();
    void simularBatalhas();
    void gerarTabelaDePosicoes();
    void mostrarUnidadeMaisDestrutiva();
};

#endif