#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include "unidade.h"

using namespace std;

class Veiculo : public Unidade {
    int blindagem;
    int potenciadeFogo;

public:
    Veiculo();
    virtual ~Veiculo();
    int getPoderAtaque() override;
    void print() override;
};

#endif
