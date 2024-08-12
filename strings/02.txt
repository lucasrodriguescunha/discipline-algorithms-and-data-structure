// 2- Escreva um programa que leia duas strings e as coloque na tela. Imprima também a segunda letra da primeira
// string e a penúltima letra da segunda string. 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2;

    // Leitura das strings
    cout << "Digite a primeira string:";
    getline(cin, string1);

    cout << "Digite a segunda string:";
    getline(cin, string2);

    // Exibição das strings
    cout << "Primeira string:" << string1 << endl;
    cout << "Segunda string:" << string2 << endl;

    // Verificação e exibição da segunda letra da primeira string
    if (string1.length() >= 2) {
        cout << "A segunda letra da primeira string:" << string1[1] << endl;
    } else {
        cout << "A primeira string eh muito curta para ter uma segunda letra." << endl;
    }

    // Verificação e exibição da penúltima letra da segunda string
    if (string2.length() >= 2) {
        cout << "A penultima letra da segunda string eh: " << string2[string2.length() - 2] << endl;
    } else {
        cout << "A segunda string eh muito curta para ter uma penultima letra." << endl;
    }
    return 0;
}
