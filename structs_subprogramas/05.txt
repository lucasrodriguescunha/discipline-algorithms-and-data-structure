// Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com 
// a tabela abaixo:  

IDADE 

CATEGORIA

5 a 7 anos 

Infantil A

8 a 10 anos 

Infantil B

11-13 anos 

Juvenil A

14-17 anos 

Juvenil B

Maiores de 18 anos (inclusive) 

Adulto

#include <iostream>
#include <string>

using namespace std;

// Função para determinar a categoria do nadador com base na idade
void determinarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    } else if (idade >= 18) {
        cout << "Categoria: Adulto" << endl;
    } else {
        cout << "Idade inválida." << endl;
    }
}

int main() {
    int idade;
    
    cout << "Digite a idade do nadador: ";
    cin >> idade;
    
    determinarCategoria(idade);
    
    return 0;
}



