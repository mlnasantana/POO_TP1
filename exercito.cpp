#include "exercito.h"

Exercito::Exercito(string nome) : nome(nome), vitorias(0), derrotas(0), empates(0) {}
Exercito::~Exercito() {
    for (Unidade* unidade : unidades) delete unidade;
}
void Exercito::adicionarUnidade(Unidade* unidade) {
    if (unidade) unidades.push_back(unidade);
}
vector<Unidade*>& Exercito::getUnidades() {
    return unidades;
}
void Exercito::imprimeUnidades() {
    cout << "==> UNIDADES DO EXERCITO " << nome << " <==" << endl;
    for (Unidade* unidade : unidades) unidade->print();
}
