// 5 - Desenvolver um programa que efetue a leitura de 10 elementos inteiros para um vetor V1. Para construir o
// vetor V2 de mesmo tipo, observa-se a seguinte regra de formação: se o  valor do índice for par, o valor do 
// elemento deverá ser multiplicado por 5; se for ímpar, deverá ser somado 5. Ao final, mostrar o conteúdo dos
// dois vetores.

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10; // Tamanho dos vetores
    int V1[SIZE]; // Vetor para armazenar os elementos originais
    int V2[SIZE]; // Vetor para armazenar os elementos modificados

    // Leitura dos elementos para o vetor V1
    cout << "Digite 10 elementos inteiros para o vetor V1:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Elemento " << i + 1 << ":";
        cin >> V1[i];
    }

    // Construção do vetor V2 conforme a regra fornecida
    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5; // Multiplica por 5 se o índice for par
        } else {
            V2[i] = V1[i] + 5; // Soma 5 se o índice for ímpar
        }
    }

    // Exibição dos conteúdos dos vetores
    cout << "\nConteudo do vetor V1:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "V1[" << i << "] = " << V1[i] << endl;
    }

    cout << "\nConteudo do vetor V2:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "V2[" << i << "] = " << V2[i] << endl;
    }

    return 0;
}

