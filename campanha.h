#ifndef CAMPANHA_H
#define CAMPANHA_H

#include <iostream>
#include <vector>
#include <map>
#include "batalha.h"
#include "exercito.h"

class Campanha {
    vector<Exercito*> exercitos;
    map<Exercito*, int> pontuacao;  // Pontos de cada exército

public:
    Campanha();
    ~Campanha();
    void adicionarExercito(Exercito* exercito);
    void simularCampanha();
    void mostrarClassificacao() const;
    void mostrarUnidadeMaisDestrutiva() const;

private:
    void realizarRodada();
};

#endif