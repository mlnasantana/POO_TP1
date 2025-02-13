#include "batalha.h"
#include "infantaria.h"
#include "veiculo.h"
#include "aeronave.h"
#include <iostream>

Batalha::Batalha(Exercito* a, Exercito* b) 
    : exercitoA(a), exercitoB(b), vitoriasA(0), vitoriasB(0) {}

Batalha::~Batalha() {}

void Batalha::realizarBatalha() {
    cout << "\n=== Iniciando Nova Batalha ===" << endl;
    
    // Realizar os três tipos de combate
    combateTipoEspecifico<Infantaria>();
    combateTipoEspecifico<Veiculo>();
    combateTipoEspecifico<Aeronave>();
}

template<typename T>
void Batalha::combateTipoEspecifico() {
    int poderA = 0, poderB = 0;
    
    // Calcular poder total para unidades do tipo T no exército A
    for (Unidade* unidade : exercitoA->getUnidades()) {
        if (typeid(*unidade) == typeid(T)) {
            poderA += unidade->getPoderAtaque();
        }
    }
    
    // Calcular poder total para unidades do tipo T no exército B
    for (Unidade* unidade : exercitoB->getUnidades()) {
        if (typeid(*unidade) == typeid(T)) {
            poderB += unidade->getPoderAtaque();
        }
    }
    
    // Determinar vencedor deste tipo de combate
    string tipoUnidade = typeid(T).name();
    cout << "Combate de " << tipoUnidade << ":" << endl;
    cout << "Exército A: " << poderA << " vs Exército B: " << poderB << endl;
    
    if (poderA > poderB) {
        vitoriasA++;
        cout << "Exército A venceu este combate!" << endl;
    } else if (poderB > poderA) {
        vitoriasB++;
        cout << "Exército B venceu este combate!" << endl;
    } else {
        cout << "Empate neste combate!" << endl;
    }
}

string Batalha::getResultado() const {
    if (vitoriasA >= 2) {
        return "Exército A venceu a batalha!";
    } else if (vitoriasB >= 2) {
        return "Exército B venceu a batalha!";
    }
    return "Empate na batalha!";
}