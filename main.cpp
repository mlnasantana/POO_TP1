#include "campanha.h"
#include "infantaria.h"
#include "veiculo.h"
#include "aeronave.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    // Criar campanha
    Campanha campanha;
    
    // Criar exércitos
    Exercito* exercito1 = new Exercito("Exercito 1");
    Exercito* exercito2 = new Exercito("Exercito 2");
    Exercito* exercito3 = new Exercito("Exercito 3");
    Exercito* exercito4 = new Exercito("Exercito 4");
    
    // Adicionar unidades a cada exército
    // Cada exército recebe uma unidade de cada tipo
    for (auto exercito : {exercito1, exercito2, exercito3, exercito4}) {
        exercito->adicionarUnidade(new Infantaria());
        exercito->adicionarUnidade(new Veiculo());
        exercito->adicionarUnidade(new Aeronave());
    }
    
    // Adicionar exércitos à campanha
    campanha.adicionarExercito(exercito1);
    campanha.adicionarExercito(exercito2);
    campanha.adicionarExercito(exercito3);
    campanha.adicionarExercito(exercito4);
    
    // Simular campanha
    campanha.simularCampanha();
    
    // Mostrar resultados
    campanha.mostrarClassificacao();
    campanha.mostrarUnidadeMaisDestrutiva();
    
    return 0;
}