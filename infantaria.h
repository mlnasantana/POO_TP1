#ifndef INFANTARIA_H
#define INFANTARIA_H
#include <iostream>
#include "unidade.h"

using namespace std;

class Infantaria : public Unidade {
    int forca;
    int velocidade;

public:
    Infantaria();
    virtual ~Infantaria();
    int getPoderAtaque() override;
    void print() override;
};

#endif