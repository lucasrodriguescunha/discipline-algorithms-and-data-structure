#include <iostream>
#include <stdio.h>
#include "Pilha.h" // Inclusão do cabeçalho da implementação da Pilha

using namespace std;

// Função principal que executa a lógica de validação de expressões matemáticas
int main() {
    char expressao[100]; // Variável que armazena a expressão fornecida pelo usuário
    char continuar; // Variável para permitir que o usuário continue inserindo expressões

    do {
        Pilha_Construtor(); // Inicializa a pilha para cada nova expressão

        printf("Digite a expressao matematica para validar:");
        setbuf(stdin, NULL); // Limpa o buffer do teclado para evitar leitura incorreta
        fgets(expressao, 100, stdin); // Lê a expressão digitada pelo usuário

        bool valida = true; // Variável para indicar se a expressão é válida ou não

        // Percorre cada caractere da expressão
        for (int i = 0; expressao[i] != '\0'; i++) {
            if (expressao[i] == '(' || expressao[i] == '[') {
                // Empilha cada parêntese ou colchete de abertura
                Pilha_Empilhar(expressao[i]);
            } else if (expressao[i] == ')') {
                // Desempilha e verifica se há um parêntese de abertura correspondente
                char topo;
                if (!Pilha_Desempilhar(topo) || topo != '(') {
                    valida = false; // Se não houver correspondência, marca como inválida
                    break;
                }
            } else if (expressao[i] == ']') {
                // Desempilha e verifica se há um colchete de abertura correspondente
                char topo;
                if (!Pilha_Desempilhar(topo) || topo != '[') {
                    valida = false; // Se não houver correspondência, marca como inválida
                    break;
                }
            }
        }

        // Se a pilha não estiver vazia após percorrer a expressão, há um erro
        if (!Pilha_Vazia()) {
            valida = false;
        }

        // Exibe o resultado ao usuário
        if (valida) {
            printf("OK - Expressao valida\n");
        } else {
            printf("Errado - Expressao invalida\n");
        }

        Pilha_Destrutor(); // Libera a memória alocada para a pilha

        // Pergunta ao usuário se deseja continuar
        printf("Deseja validar outra expressao? (S/N): ");
        setbuf(stdin, NULL);
        scanf("%c", &continuar);

    } while (toupper(continuar) != 'N'); // Continua enquanto o usuário não digitar 'N'

    return 0; // Termina o programa
}
