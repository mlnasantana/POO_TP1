#ifndef UNIDADE_H
#define UNIDADE_H

#include <iostream>
using namespace std;

class Unidade {
protected:
    int poderAtaque;
    int destruicoes;

public:
    Unidade();
    virtual ~Unidade();
    virtual int getPoderAtaque();
    void setPoderAtaque(int poderAtaque);
    void somaDestruicao();
    int getDestruicoes() const { return destruicoes; }  // Novo método
    virtual void print();
};

#endif