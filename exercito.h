#ifndef EXERCITO_H
#define EXERCITO_H

#include <vector>
#include "unidade.h"

class Exercito {
    string nome;
    vector<Unidade*> unidades;
    int vitorias, derrotas, empates;

public:
    Exercito(string nome);
    ~Exercito();
    void adicionarUnidade(Unidade* unidade);
    string getResultados() const;
    void imprimeUnidades();
    vector<Unidade*>& getUnidades(); // Novo método
};

#endif