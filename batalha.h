#ifndef BATALHA_H
#define BATALHA_H

#include "exercito.h"

class Batalha {
    Exercito* exercitoA;
    Exercito* exercitoB;
    int resultadoA, resultadoB;

public:
    Batalha(Exercito* a, Exercito* b);
    ~Batalha();
    void ataqueExercitoA();
    void ataqueExercitoB();
    string getResultado();
};

#endif