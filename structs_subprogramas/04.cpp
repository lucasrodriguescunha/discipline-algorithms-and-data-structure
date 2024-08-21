// Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius. // O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: C=5/9.(F-32)

#include <iostream>

using namespace std;

// Função que converte Fahrenheit para Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

int main() {
    // Cabeçalho da tabela de conversão
    cout << "Fahrenheit to Celsius conversion table:\n";
    cout << "Fahrenheit\tCelsius\n";
    cout << "----------------------\n";

    // Loop para converter de 0 a 100 graus Fahrenheit
    for (int fahrenheit = 0; fahrenheit <= 100; ++fahrenheit) {
        double celsius = fahrenheitToCelsius(fahrenheit);
        // Exibe os valores com 2 casas decimais
        cout << fahrenheit << "\t\t" << (celsius >= 0 ? " " : "") << fixed << setprecision(2) << celsius << '\n';
    }

    return 0;
}
