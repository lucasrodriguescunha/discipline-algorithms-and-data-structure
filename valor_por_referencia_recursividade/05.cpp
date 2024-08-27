// Exercício 5: Realizar uma pesquisa em livro e/ou internet a respeito do algoritmo
// de Pesquisa Binária.

// Realizar manualmente três rastreios sobre o código fonte, pesquisando os valores
// 75, 22 e 90 no seguinte vetor:

// 0 18 22 25 34 40 51 66 75 87

// Em seguida, faça a implementação em C++ do código fonte de Pesquisa Binária.

#include <iostream>
using namespace std;

// Função de Pesquisa Binária
int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio; // Valor encontrado
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // Busca na metade direita
        } else {
            fim = meio - 1; // Busca na metade esquerda
        }
    }

    return -1; // Valor não encontrado
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valores[] = {75, 22, 90};

    for (int i = 0; i < 3; ++i) {
        int valor = valores[i];
        int resultado = pesquisaBinaria(vetor, tamanho, valor);

        if (resultado != -1) {
            cout << "Valor " << valor << " encontrado no indice " << resultado << endl;
        } else {
            cout << "Valor " << valor << " nao encontrado no vetor." << endl;
        }
    }

    return 0;
}
