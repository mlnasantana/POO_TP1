#include "batalha.h"
#include <iostream>

Batalha::Batalha(Exercito* a, Exercito* b) : exercitoA(a), exercitoB(b), resultadoA(0), resultadoB(0) {}
Batalha::~Batalha() {}

void Batalha::ataqueExercitoA() {
    if (!exercitoA || exercitoA->getUnidades().empty()) {
        cout << "Erro: Exercito A não possui unidades!" << endl;
        return;
    }
    for (Unidade* unidade : exercitoA->getUnidades()) {
        resultadoA += unidade->getPoderAtaque();
    }
}

void Batalha::ataqueExercitoB() {
    if (!exercitoB || exercitoB->getUnidades().empty()) {
        cout << "Erro: Exercito B não possui unidades!" << endl;
        return;
    }
    for (Unidade* unidade : exercitoB->getUnidades()) {
        resultadoB += unidade->getPoderAtaque();
    }
}

string Batalha::getResultado() {
    if (resultadoA > resultadoB)
        return "Exército A venceu!";
    else if (resultadoB > resultadoA)
        return "Exército B venceu!";
    return "Empate!";
}
