#include <iostream>
#include <string>
#include "unidade.h"
#include "aeronave.h"

using namespace std;

Aeronave::Aeronave(){
    poderAtaque = rand() % 51 + 40;
    manobrabilidade = rand() % 11 + 30;
    alcance = rand() % 11 + 30;
}

Aeronave::~Aeronave() {}

int Aeronave::getPoderAtaque() { //sobrescreve a função de cima
    return ((poderAtaque * 5) + (manobrabilidade * 3) + (alcance * 2)) / 10;
}

void Aeronave::print(){
    cout << endl << "==> AERONAVE <==" << endl;
    cout << "- Poder de Ataque: " << poderAtaque << endl;
    cout << "- Manobrabilidade: " << manobrabilidade << endl;
    cout << "- Alcance: " << alcance << endl;
}