#include <iostream>
#include "infantaria.h"

using namespace std;

Infantaria::Infantaria() {
    poderAtaque = rand() % 31 + 30;
    forca = rand() % 21 + 30;
    velocidade = rand() % 11 + 30;
}

Infantaria::~Infantaria() {}

int Infantaria::getPoderAtaque() {
    return ((poderAtaque * 5) + (forca * 3) + (velocidade * 2)) / 10;
}

void Infantaria::print() {
    cout << "- Poder de Ataque: " << poderAtaque << endl;
    cout << "- Força: " << forca << endl;
    cout << "- Velocidade: " << velocidade << endl;
    cout << "=> Poder de ataque TOTAL: " << getPoderAtaque() << endl;
}
