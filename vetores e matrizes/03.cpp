// 3 - Para uma determinada avaliação aplicada, fazer um programa que armazene em um vetor  as notas de 5 alunos. // Para cada um desses alunos, calcular e armazenar em um vetor o desvio em relação a média. Em seguida, calcular // e armazenar em outro vetor os desvios [em relação a média] ao  quadrado das notas de cada aluno. Ao final,
// calcular e apresentar a variância e o desvio padrão. 

#include <iostream>
#include <cmath> // Incluindo a biblioteca para usar a função fabs

// A função fabs é usada para calcular o valor absoluto de um número de ponto flutuante.
// Em outras palavras, ela retorna a magnitude do número sem considerar seu sinal.

using namespace std;

// Função para calcular a raiz quadrada manualmente
float calcularRaizQuadrada(float num) {
    float raiz = num / 2;
    float temp = 0;

    // Itera até que a diferença seja pequena o suficiente
    while (fabs(raiz - temp) > 0.00001) { // Usando um critério de parada mais rigoroso
        temp = raiz;
        raiz = (num / temp + temp) / 2;
    }
    return raiz;
}

int main() {
    int nota[5]; // Nota dos alunos
    float desvio[5]; // Desvios em relação à média
    float desvioAoQuadrado[5]; // Desvios ao quadrado
    float soma = 0.0, media = 0.0, variancia = 0.0, desvioPadrao = 0.0;

    cout << "Insira 5 notas\n" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota do aluno " << i + 1 << ":";
        cin >> nota[i];
        soma += nota[i]; // soma += nota[i]
    }

    // Calcula a média
    media = soma / 5.0;

    // Calcula os desvios e os desvios ao quadrado
    for (int i = 0; i < 5; i++) {
        desvio[i] = nota[i] - media; // Desvio em relação à média
        desvioAoQuadrado[i] = desvio[i] * desvio[i]; // Desvio ao quadrado
        variancia += desvioAoQuadrado[i]; // variancia += desvioAoQuadrado
    }

    // Calcula a variância
    variancia /= 5.0;

    // Calcula o desvio padrão usando a função de raiz quadrada manual
    desvioPadrao = calcularRaizQuadrada(variancia);

    // Exibe os resultados
    cout << "\nNotas inseridas: ";
    for (int i = 0; i < 5; i++) {
        cout << nota[i] << " ";
    }

    cout << "\n\nMedia: " << media;
    cout << "\nDesvios em relacao a media: ";
    for (int i = 0; i < 5; i++) {
        cout << desvio[i] << " ";
    }

    cout << "\nDesvios ao quadrado: ";
    for (int i = 0; i < 5; i++) {
        cout << desvioAoQuadrado[i] << " ";
    }

    cout << "\nDesvio padrao: " << desvioPadrao << endl;

    return 0;
}

