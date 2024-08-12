// 6 - Fazer um programa que leia uma matriz de números inteiros de tamanho M x N tal que M  <= 20 e N<=25. O 
// usuário deve informar o tamanho da matriz que deseja utilizar. O programa deve então: 

// 1. Calcular sua matriz transposta;
// 2. Calcular a multiplicação da matriz por um fator K informado pelo usuário; 
// 3. Realizar a adição com uma segunda matriz  informada pelo usuário. 

#include <iostream>

using namespace std;

const int MAX_M = 20; // Máximo de linhas
const int MAX_N = 25; // Máximo de colunas

void lerMatriz(int matriz[MAX_M][MAX_N], int m, int n) {
    cout << "Digite os elementos da matriz (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i << "][" << j << "]:";
            cin >> matriz[i][j];
        }
    }
}

void exibirMatriz(int matriz[MAX_M][MAX_N], int m, int n) {
    cout << "Matriz (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void exibirMatrizTransposta(int matriz[MAX_N][MAX_M], int m, int n) {
    cout << "Matriz Transposta (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void calcularTransposta(int original[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposta[j][i] = original[i][j];
        }
    }
}

void multiplicarMatriz(int matriz[MAX_M][MAX_N], int m, int n, int fator) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] *= fator;
        }
    }
}

void adicionarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N;

    // Leitura do tamanho da matriz
    cout << "Digite o numero de linhas (M <= 20):";
    cin >> M;
    cout << "Digite o numero de colunas (N <= 25):";
    cin >> N;

    if (M > MAX_M || N > MAX_N || M <= 0 || N <= 0) {
        cout << "Tamanho da matriz invalido." << endl;
        return 1;
    }

    int matriz[MAX_M][MAX_N], matrizTransposta[MAX_N][MAX_M];
    int matrizAdicional[MAX_M][MAX_N], matrizResultado[MAX_M][MAX_N];
    int fator;

    // Leitura da matriz
    lerMatriz(matriz, M, N);

    // Calcular e exibir a matriz transposta
    calcularTransposta(matriz, matrizTransposta, M, N);
    cout << "\nMatriz Transposta:" << endl;
    exibirMatrizTransposta(matrizTransposta, M, N);

    // Multiplicar a matriz por um fator K
    cout << "\nDigite o fator K para multiplicacao: ";
    cin >> fator;
    multiplicarMatriz(matriz, M, N, fator);
    cout << "\nMatriz apos multiplicacao por " << fator << ":" << endl;
    exibirMatriz(matriz, M, N);

    // Leitura da segunda matriz
    cout << "\nDigite os elementos da segunda matriz (" << M << "x" << N << "):" << endl;
    lerMatriz(matrizAdicional, M, N);

    // Adicionar a segunda matriz
    adicionarMatrizes(matriz, matrizAdicional, matrizResultado, M, N);
    cout << "\nMatriz apos adicao com a segunda matriz:" << endl;
    exibirMatriz(matrizResultado, M, N);

    return 0;
}
