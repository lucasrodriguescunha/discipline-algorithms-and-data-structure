#include <iostream>
#include <cstdlib>
#include "Lista.h"

// Informações do programa
/*
Nome: Lucas Rodrigues Cunha
Objetivo do programa: Desenvolver um trabalho prático que aprofunde
                      o conhecimento do aluno no uso da estrutura de dados do tipo Lista.
Entrada: O programa recebe palavras fornecidas pelo usuário.
Saída: As palavras inseridas na lista, exibidas em ordem alfabética, sem repetições.
*/

using namespace std;

int main() {
    string palavra; // Variável para armazenar a palavra digitada pelo usuário
    int opcao; // Variável para armazenar a opção do menu
    int posicao; // Variável para armazenar a posição do elemento encontrado

    Lista_Construtor(); // Inicializa a lista

    do {
        system("cls");
        cout << "Programa para uso da Lista Singularmente Encadeada\n\n";
        cout << "Escolha uma das opcoes abaixo.\n";
        cout << "1 - Inserir palavra ordenada\n";
        cout << "2 - Remover palavra do inicio\n";
        cout << "3 - Remover palavra do fim\n";
        cout << "4 - Exibir palavra no inicio\n";
        cout << "5 - Exibir palavra no fim\n";
        cout << "6 - Procurar palavra\n";
        cout << "7 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        system("cls");

        switch (opcao) {
            case 1:
                cout << "Digite a palavra: ";
                cin >> palavra;
                if (Lista_Inserir_Ordenado(palavra))
                    cout << "Palavra inserida\n\n";
                else
                    cout << "Palavra ja existe ou erro de memória\n\n";
                system("pause");
                break;

            case 2:
                if (Lista_Remover_Inicio(palavra))
                    cout << "Palavra removida: " << palavra << endl;
                else
                    cout << "Lista vazia.\n\n";
                system("pause");
                break;

            case 3:
                if (Lista_Remover_Fim(palavra))
                    cout << "Palavra removida: " << palavra << endl;
                else
                    cout << "Lista vazia.\n\n";
                system("pause");
                break;

            case 4:
                if (Lista_Inicio(palavra))
                    cout << "Palavra no inicio: " << palavra << endl;
                else
                    cout << "Lista vazia.\n\n";
                system("pause");
                break;

            case 5:
                if (Lista_Fim(palavra))
                    cout << "Palavra no fim: " << palavra << endl;
                else
                    cout << "Lista vazia.\n\n";
                system("pause");
                break;

            case 6:
                cout << "Digite a palavra para pesquisa: ";
                cin >> palavra;
                if (Lista_BuscarPeloElemento(palavra, posicao))
                    cout << "Palavra encontrada na posição: " << posicao << endl;
                else
                    cout << "Palavra não encontrada.\n\n";
                system("pause");
                break;

            case 7:
                cout << "Saindo...\n";
                break;

            default:
                cout << "Opção inválida.\n\n";
                system("pause");
                break;
        }
    } while (opcao != 7);

    Lista_Destrutor(); // Libera a memória antes de sair
    return 0;
}
