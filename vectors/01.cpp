// 1 - Faça um programa que efetue a leitura de 5 elementos para um vetor. No final, apresentar  a soma de todos os elementos que sejam ímpares. 

#include <iostream>

using namespace std;

int main() {

    int vector[5]; 

    cout << "Insira 5 elementos" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int soma = 0;

    for (int i = 0; i < 5; i++) {
        if (vector[i] % 2 != 0) { // Se número for ímpar
            soma = soma + vector[i];
        }
    }

    cout << "A soma dos elementos ímpares é " << soma << endl;
    return 0;
}
