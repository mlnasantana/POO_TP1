#include "campanha.h"
#include <algorithm>

Campanha::Campanha() {}

Campanha::~Campanha() {
    for (Exercito* exercito : exercitos) {
        delete exercito;
    }
}

void Campanha::adicionarExercito(Exercito* exercito) {
    exercitos.push_back(exercito);
    pontuacao[exercito] = 0;
}

void Campanha::simularCampanha() {
    cout << "\n=== Iniciando Campanha ===" << endl;
    
    // Cada exército enfrenta todos os outros uma vez
    for (size_t i = 0; i < exercitos.size(); i++) {
        for (size_t j = i + 1; j < exercitos.size(); j++) {
            cout << "\nBatalha entre " << exercitos[i]->getNome() 
                 << " e " << exercitos[j]->getNome() << endl;
            
            Batalha batalha(exercitos[i], exercitos[j]);
            batalha.realizarBatalha();
            
            // Atribuir pontos baseado no resultado
            if (batalha.getVitoriasA() >= 2) {
                pontuacao[exercitos[i]] += 3;  // Vitória = 3 pontos
            } else if (batalha.getVitoriasB() >= 2) {
                pontuacao[exercitos[j]] += 3;
            } else {
                pontuacao[exercitos[i]] += 1;  // Empate = 1 ponto
                pontuacao[exercitos[j]] += 1;
            }
        }
    }
}

void Campanha::mostrarClassificacao() const {
    cout << "\n=== Classificação Final ===" << endl;
    
    // Criar vetor de pares (pontuação, exército) para ordenação
    vector<pair<int, Exercito*>> classificacao;
    for (const auto& p : pontuacao) {
        classificacao.push_back({p.second, p.first});
    }
    
    // Ordenar por pontuação (maior para menor)
    sort(classificacao.begin(), classificacao.end(),
         [](const auto& a, const auto& b) { return a.first > b.first; });
    
    // Mostrar classificação
    for (size_t i = 0; i < classificacao.size(); i++) {
        cout << i + 1 << "º lugar: " << classificacao[i].second->getNome()
             << " - " << classificacao[i].first << " pontos" << endl;
    }
}

void Campanha::mostrarUnidadeMaisDestrutiva() const {
    int maxDestruicoes = 0;
    Unidade* unidadeMaisDestrutiva = nullptr;

    for (Exercito* exercito : exercitos) {
        for (Unidade* unidade : exercito->getUnidades()) {
            if (unidade->getDestruicoes() > maxDestruicoes) {
                maxDestruicoes = unidade->getDestruicoes();
                unidadeMaisDestrutiva = unidade;
            }
        }
    }

    if (unidadeMaisDestrutiva) {
        cout << "\n=== Unidade Mais Destrutiva ===" << endl;
        unidadeMaisDestrutiva->print();
        cout << "Total de destruições: " << maxDestruicoes << endl;
    }
}