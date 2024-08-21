// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.

#include <iostream>

using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    // Definindo constantes para dias em um ano e dias em um mês
    const int diasPorAno = 365;
    const int diasPorMes = 30;
    
    // Calculando a idade total em dias
    int totalDias = (anos * diasPorAno) + (meses * diasPorMes) + dias;
    
    return totalDias;
}

int main() {
    int anos, meses, dias;
    
    cout << "Digite a idade em anos: ";
    cin >> anos;
    
    cout << "Digite a idade em meses: ";
    cin >> meses;
    
    cout << "Digite a idade em dias: ";
    cin >> dias;
    
    int totalDias = idadeEmDias(anos, meses, dias);
    
    cout << "A idade em dias é: " << totalDias << endl;
    
    return 0;
}
