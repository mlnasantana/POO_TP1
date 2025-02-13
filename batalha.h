#ifndef BATALHA_H
#define BATALHA_H

#include "exercito.h"
#include <typeinfo>

class Batalha {
    Exercito* exercitoA;
    Exercito* exercitoB;
    int vitoriasA, vitoriasB;

public:
    Batalha(Exercito* a, Exercito* b);
    ~Batalha();
    void realizarBatalha();
    string getResultado() const;
    int getVitoriasA() const { return vitoriasA; }
    int getVitoriasB() const { return vitoriasB; }

private:
    template<typename T>
    void combateTipoEspecifico();
};

#endif