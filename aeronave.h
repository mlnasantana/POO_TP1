#ifndef AERONAVE_H
#define AERONAVE_H
#include <iostream>
#include "unidade.h"

using namespace std;

class Aeronave : public Unidade {
    int manobrabilidade;
    int alcance;

public:
    Aeronave();
    virtual ~Aeronave();
    int getPoderAtaque() override;
    void print() override;
};

#endif