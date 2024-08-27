// Exercício 1: Faça uma função que recebe a idade de uma pessoa em dias e retorna essa idade
// expressa em anos, meses e dias.

#include <iostream>
using namespace std;

void converterIdade(int dias, int &anos, int &meses, int &diasRestantes) {
    anos = dias / 365;
    diasRestantes = dias % 365;
    meses = diasRestantes / 30;
    diasRestantes %= 30;
}

int main() {
    int idadeEmDias;
    int anos, meses, diasRestantes;

    cout << "Digite a idade em dias:";
    cin >> idadeEmDias;

    converterIdade(idadeEmDias, anos, meses, diasRestantes);

    cout << "Idade = " << anos << " ano(s), " << meses << " meses e " << diasRestantes << " dias." << endl;

    return 0;
}
