#include <iostream>

using namespace std;

int main() {

    int numero = 10;
    printf("O conteudo e = %d", numero);
    printf("\nO endereco de memoria e = %x", &numero);

    int numeros[100];
    cout << "\nO tamanho de um int:  \t\t" << sizeof(numeros) << " bytes. \n";

    cout << "O tamanho de um int:  \t\t" << sizeof(int) << " bytes. \n";
    cout << "O tamanho de um short int: \t" << sizeof(short) << " bytes. \n";
    cout << "O tamanho de um long int: \t" << sizeof(long) << " bytes. \n";
    cout << "O tamanho de um char: \t\t" << sizeof(char) << " byte(s). \n";
    cout << "O tamanho de um bool: \t\t" << sizeof(bool) << " byte(s). \n";
    cout << "O tamanho de um float: \t\t" << sizeof(float) << " byte(s). \n";
    cout << "O tamanho de um double: \t" << sizeof(double) << " byte(s). \n";
   
    return 0;
}
