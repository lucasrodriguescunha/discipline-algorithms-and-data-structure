// Exercício 4: Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N
// (M<=20, N<=25), onde M e N são lidos. Calcule e escreva:

// - A matriz transposta

// - A multiplicação da matriz por um fator K informado pelo usuário;

// - A adição com uma segunda matriz informada pelo usuário;

// As matrizes informadas pelo usuário não devem ser alteradas.

// O programa deve utilizar pelo menos uma função para ler os valores a serem armazenados nas
// matrizes, uma função para calcular a matriz transposta, uma função  para calcular a multiplicação
// por K e uma função para fazer a adição das matrizes.

#include <iostream>
using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    cout << "Digite os elementos da matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
}

void calcularTransposta(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarPorK(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
}

void somarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimirMatrizTransposta(int matriz[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M, N, K;

    cout << "Digite o numero de linhas (M <= 20):";
    cin >> M;
    cout << "Digite o numero de colunas (N <= 25):";
    cin >> N;

    int matriz[MAX_M][MAX_N];
    int transposta[MAX_N][MAX_M]; // As dimensões estão invertidas para a transposta
    int matrizMultiplicada[MAX_M][MAX_N];
    int segundaMatriz[MAX_M][MAX_N];
    int matrizSoma[MAX_M][MAX_N];

    lerMatriz(matriz, M, N);

    calcularTransposta(matriz, transposta, M, N);

    cout << "Digite o fator K para multiplicacao: ";
    cin >> K;

    multiplicarPorK(matriz, matrizMultiplicada, M, N, K);

    cout << "Digite os elementos da segunda matriz (" << M << "x" << N << ") para soma:" << endl;
    lerMatriz(segundaMatriz, M, N);

    somarMatrizes(matriz, segundaMatriz, matrizSoma, M, N);

    cout << "\nMatriz transposta:" << endl;
    imprimirMatrizTransposta(transposta, M, N); // Inverter as dimensões ao imprimir

    cout << "\nMatriz multiplicada por " << K << ":" << endl;
    imprimirMatriz(matrizMultiplicada, M, N);

    cout << "\nResultado da soma das Matrizes:" << endl;
    imprimirMatriz(matrizSoma, M, N);

    return 0;
}
