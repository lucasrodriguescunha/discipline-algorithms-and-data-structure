// 4- Escreva um programa que faça a leitura de valores inteiros positivos para uma variável composta contendo
// até 10  elementos. O usuário deve informar quantos elementos serão inseridos no programa. Calcule e escreva:

// 1. Os 2 maiores elementos
// 2. A soma dos elementos pares em posições ímpares

#include <iostream>

using namespace std;

int main() {
    const int MAX_ELEMENTOS = 10;
    int n;
    int elementos[MAX_ELEMENTOS];

    cout << "Informe o numero de elementos (ate 10):";
    cin >> n;

    // Verifica se o número de elementos está dentro do limite permitido
    if (n <= 0 || n > MAX_ELEMENTOS) {
        cout << "Numero de elementos invalido.";
        return 1;
    }

    // Leitura dos valores
    cout << "Informe " << n << " valores inteiros positivos:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> elementos[i];
        // Verifica se o valor é positivo
        if (elementos[i] <= 0) {
            cout << "Valor invalido. Deve ser um inteiro positivo." << endl;
            return 1;
        }
    }

    // Encontrando os 2 maiores elementos
    int maior1 = elementos[0];
    int maior2 = (n > 1) ? elementos[1] : maior1;

    if (maior2 > maior1) {
        swap(maior1, maior2);
    }

    for (int i = 2; i < n; ++i) {
        if (elementos[i] > maior1) {
            maior2 = maior1;
            maior1 = elementos[i];
        } else if (elementos[i] > maior2) {
            maior2 = elementos[i];
        }
    }

    cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;

    // Calculando a soma dos elementos pares em posições ímpares
    int somaPares = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // Posições ímpares em base 1 correspondem a índices pares em base 0
            if (elementos[i] % 2 == 0) {
                somaPares += elementos[i];
            }
        }
    }

    cout << "A soma dos elementos pares em posicoes impares = " << somaPares << endl;

    return 0;
}
