// Supondo que a população de um país "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 
// porcento, e que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de // crescimento de  1,5 porcento. Fazer um programa para calcular e mostrar o número de anos necessários  para que a 
// população do país "a" ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de crescimento.

#include <iostream>
#include <cmath> // Para a função pow

using namespace std;

// Função para calcular o número de anos necessários
int calcularAnosParaCrescimento(double populacaoA, double taxaCrescimentoA, double populacaoB, double taxaCrescimentoB) {
    int anos = 0;
    
    // Convertemos as taxas de crescimento de porcentagem para fatores multiplicativos
    double fatorCrescimentoA = 1 + taxaCrescimentoA / 100.0;
    double fatorCrescimentoB = 1 + taxaCrescimentoB / 100.0;
    
    // Loop até que a população de A seja maior ou igual à de B
    while (populacaoA < populacaoB) {
        populacaoA *= fatorCrescimentoA;
        populacaoB *= fatorCrescimentoB;
        anos++;
    }
    
    return anos;
}

int main() {
    // Dados iniciais
    double populacaoA = 90000000; // 90 milhões
    double taxaCrescimentoA = 3.0; // 3%
    double populacaoB = 200000000; // 200 milhões
    double taxaCrescimentoB = 1.5; // 1.5%
    
    // Calcula o número de anos
    int anosNecessarios = calcularAnosParaCrescimento(populacaoA, taxaCrescimentoA, populacaoB, taxaCrescimentoB);
    
    // Mostra o resultado
    cout << "Número de anos necessários para que a população do país 'a' ultrapasse ou seja igual à população do país 'b': " << anosNecessarios << endl;
    
    return 0;
}
