// Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. 

// Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1  // x alt - 44.7. 

#include <iostream>

using namespace std;

// Função para calcular o peso ideal
double calcularPesoIdeal(double altura, char sexo) {
    double pesoIdeal;
    
    if (sexo == 'M' || sexo == 'm') { // Para homens
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') { // Para mulheres
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        cerr << "Sexo inválido. Use 'M' para masculino ou 'F' para feminino." << endl;
        return -1; // Retorna um valor inválido para indicar erro
    }
    
    return pesoIdeal;
}

int main() {
    double altura;
    char sexo;
    
    cout << "Digite a altura (em metros): ";
    cin >> altura;
    
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;
    
    double pesoIdeal = calcularPesoIdeal(altura, sexo);
    
    if (pesoIdeal != -1) { // Verifica se o cálculo foi bem-sucedido
        cout << "O peso ideal é: " << pesoIdeal << " kg" << endl;
    }
    
    return 0;
}
