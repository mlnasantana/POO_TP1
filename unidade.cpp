#include "unidade.h"
#include <cstdlib>

Unidade::Unidade() {
    poderAtaque = rand() % 101;
    destruicoes = 0;
}
Unidade::~Unidade() {}
int Unidade::getPoderAtaque() {
    return poderAtaque;
}
void Unidade::setPoderAtaque(int poderAtaque) {
    if (poderAtaque >= 0 && poderAtaque <= 100)
        this->poderAtaque = poderAtaque;
}
void Unidade::somaDestruicao() {
    destruicoes++;
    cout << "=> Destruições: " << destruicoes << endl;
}
void Unidade::print() {
    cout << "--------------- UNIDADE ---------------" << endl;
    cout << " => PODER DE ATAQUE GERAL: " << poderAtaque << endl;
}