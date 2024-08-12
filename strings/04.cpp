// 4- Uma empresa concederá um aumento de salário aos seus funcionários, variável conforme o cargo, conforme a
// tabela abaixo. Faça um programa que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o // cargo não estiver na tabela, o funcionário deverá então receber 5% de aumento. Mostre o salário antigo, o novo // salário e a diferença.

#include <iostream>
#include <string>
#include <iomanip> // para usar setprecision

using namespace std;

int main() {
    string cargo;
    double salario, novoSalario, percentualAumento;

    // Leitura do salário e do cargo
    cout << "Digite o salario atual do funcionario:";
    cin >> salario;
    cin.ignore(); // Limpa o buffer de entrada
    cout << "Digite o cargo do funcionario:";
    getline(cin, cargo);

    // Determinação do percentual de aumento com base no cargo
    if (cargo == "Gerente") {
        percentualAumento = 0.10;
    } else if (cargo == "Engenheiro") {
        percentualAumento = 0.20;
    } else if (cargo == "Tecnico") {
        percentualAumento = 0.30;
    } else {
        percentualAumento = 0.05; // Aumento de 5% para cargos não listados
    }

    // Cálculo do novo salário
    novoSalario = salario + (salario * percentualAumento);
    double diferenca = novoSalario - salario;

    // Exibição dos resultados
    cout << fixed << setprecision(2); // Define precisão de 2 casas decimais
    cout << "Salario antigo: R$ " << salario << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    cout << "Diferenca: R$ " << diferenca << endl;

    return 0;
}
