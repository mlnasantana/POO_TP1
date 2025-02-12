#include "batalha.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));
    Exercito* exercito1 = new Exercito("Exercito 1");
    Exercito* exercito2 = new Exercito("Exercito 2");

    exercito1->adicionarUnidade(new Unidade());
    exercito2->adicionarUnidade(new Unidade());

    Batalha batalha(exercito1, exercito2);
    batalha.ataqueExercitoA();
    batalha.ataqueExercitoB();
    cout << batalha.getResultado() << endl;

    delete exercito1;
    delete exercito2;
    return 0;
}