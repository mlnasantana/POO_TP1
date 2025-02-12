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
    virtual void print();
};

#endif