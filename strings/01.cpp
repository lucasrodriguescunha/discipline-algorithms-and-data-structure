// 1- Escreva um programa para determinar qual é o nome de pessoa lexicograficamente menor  de todos os nomes
// fornecidos em um entrada interativa de dados. A entrada para quando se entra com um linha nula (sem nenhum
// nome digitado). Os  nomes podem ter no máximo 50 caracteres.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, menorNome;

    // Loop para receber os nomes
    while (true) {
        cout << "Digite um nome (ou pressione Enter para terminar):";
        getline(cin, nome);

        // Se a linha for vazia, encerra a entrada
        if (nome.empty()) {
            break;
        }

        // Inicializa menorNome com o primeiro nome digitado
        if (menorNome.empty() || nome < menorNome) {
            menorNome = nome;
        }
    }

    // Verifica se algum nome foi digitado
    if (!menorNome.empty()) {
        cout << "O nome lexicograficamente menor = " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }
    return 0;
}
