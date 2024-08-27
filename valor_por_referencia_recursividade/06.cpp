// Exercício 6: Calcular o somatório de 1 à N Recursivamente e Iterativamente.
// Valores  menores ou iguais a zero representam situações de erro.

#include <iostream>
using namespace std;

// Função recursiva para calcular o somatório de 1 até N
int somatorioRecursivo(int N) {
    // Caso de erro
    if (N <= 0) {
        cout << "Erro: O valor deve ser maior que zero." << endl;
        return -1;
    }
    // Caso base
    if (N == 1) {
        return 1;
    }
    // Caso recursivo
    return N + somatorioRecursivo(N - 1);
}

// Função iterativa para calcular o somatório de 1 até N
int somatorioIterativo(int N) {
    // Caso de erro
    if (N <= 0) {
        cout << "Erro: O valor deve ser maior que zero." << endl;
        return -1;
    }
    int soma = 0;
    for (int i = 1; i <= N; ++i) {
        soma += i;
    }
    return soma;
}

int main() {
    int N;

    cout << "Digite o valor de N: ";
    cin >> N;

    // Calcula e exibe o somatório recursivo
    int resultadoRecursivo = somatorioRecursivo(N);
    if (resultadoRecursivo != -1) {
        cout << "Somatorio recursivo de 1 ate " << N << " eh: " << resultadoRecursivo << endl;
    }

    // Calcula e exibe o somatório iterativo
    int resultadoIterativo = somatorioIterativo(N);
    if (resultadoIterativo != -1) {
        cout << "Somatorio iterativo de 1 ate " << N << " eh: " << resultadoIterativo << endl;
    }

    return 0;
}
