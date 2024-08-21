// Construir um programa que na função main leia 3 valores informados pelo usuário e  utilize uma função para retornar o 
// maior deles. Em seguida, a função main deve  imprimir o resultado. 

#include <iostream>

using namespace std;

// Função para encontrar o maior valor entre três números
int encontrarMaior(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int valor1, valor2, valor3;

    // Leitura dos três valores
    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite o terceiro valor: ";
    cin >> valor3;

    // Encontrar o maior valor
    int maiorValor = encontrarMaior(valor1, valor2, valor3);

    // Exibir o resultado
    cout << "O maior valor é: " << maiorValor << endl;

    return 0;
}
