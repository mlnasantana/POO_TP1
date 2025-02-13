#ifndef EXERCITO_H
#define EXERCITO_H

#include <vector>
#include <string>
#include "unidade.h"

class Exercito {
    string nome;
    vector<Unidade*> unidades;
    int vitorias, derrotas, empates;

public:
    Exercito(string nome);
    ~Exercito();
    void adicionarUnidade(Unidade* unidade);
    string getNome() const { return nome; }
    vector<Unidade*>& getUnidades() { return unidades; }
    void imprimeUnidades();
};

#endif