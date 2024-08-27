// Exercício 7: Implementar a sequência de Fibonacci Recursivamente e Iterativamente.
// O  usuário deve informar a posição desejada e o programa retornar o valor da sequência
// nessa determinada posição.

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946…

#include <iostream>
using namespace std;

// Função recursiva para calcular o número de Fibonacci na posição n
int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n; // Caso base: F(0) = 0, F(1) = 1
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2); // Caso recursivo
}

// Função iterativa para calcular o número de Fibonacci na posição n
int fibonacciIterativo(int n) {
    if (n <= 1) {
        return n; // Caso base: F(0) = 0, F(1) = 1
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b; // F(n) é o último valor calculado
}

int main() {
    int n;

    cout << "Digite a posição desejada na sequência de Fibonacci: ";
    cin >> n;

    // Verifica se a posição é válida
    if (n < 0) {
        cout << "Erro: A posição deve ser um número não-negativo." << endl;
        return 1;
    }

    // Calcula e exibe o número de Fibonacci usando a abordagem recursiva
    int resultadoRecursivo = fibonacciRecursivo(n);
    cout << "Número de Fibonacci na posição " << n << " (recursivo) é: " << resultadoRecursivo << endl;

    // Calcula e exibe o número de Fibonacci usando a abordagem iterativa
    int resultadoIterativo = fibonacciIterativo(n);
    cout << "Número de Fibonacci na posição " << n << " (iterativo) é: " << resultadoIterativo << endl;

    return 0;
}
