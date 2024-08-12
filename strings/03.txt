// 3- Escreva um programa que leia uma string, conte quantos caracteres desta string são iguais a  "a" e substitua // os que forem iguais a "a" por "b". O programa deve imprimir o número de caracteres modificados e a string
// modificada. 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int contador = 0;

    // Leitura da string
    cout << "Digite uma string:";
    getline(cin, str);

    // Loop para contar e substituir caracteres
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            str[i] = 'b';  // Substitui 'a' por 'b'
            contador++;    // Incrementa o contador de modificações
        }
    }

    // Exibição do número de modificações e da string modificada
    cout << "Numero de caracteres modificados:" << contador << endl;
    cout << "String modificada:" << str << endl;

    return 0;
}
