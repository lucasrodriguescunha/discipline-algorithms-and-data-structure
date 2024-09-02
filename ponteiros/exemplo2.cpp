#include <iostream>

using namespace std;

int main() {

    /*

       PONTEIROS

       -Uma variável de ponteiro guarda o endereço de uma outra variável.

        O tipo de dado de uma variável de ponteiro indica como o ponteiro deve
        tratar os dados no endereço de memória que ele armazena.


        Ponteiros são úteis para referenciar elementos de vetores e matrizes,
        além de permitirem a criação de estruturas dinâmicas de dados
        (Pilha, Fila, Lista, Árvore, Tabela Hash, etc.)


       - Diferenças entre os operadores & e *


       - & => retorna o endereço de memória de seu operando (variável).
         m = &count;
         m recebe o endereço [de memória] de count

       - * => retorna o valor armazenado no endereço de seu operando.
         m = &count;
         q = *m;
         q recebe o valor de count

   */

    int fonte, resultado;	// variáveis do tipo inteiro
    int *ponteiro; 	  	    // ponteiro que aponta para um tipo base int
                            // ou seja, um ponteiro que pode apontar para uma outra variável
                            // do tipo inteiro

    fonte = 10;
    ponteiro = &fonte; 		// ponteiro armazena o endereço de memória da variável fonte
                            // em outras palavras, o ponteiro aponta para fonte
    resultado = *ponteiro;  // resultado recebe o valor armazenado na variável apontada pelo
                            // ponteiro no caso, o valor 10

    printf("Resultado: %d\n\n", resultado);

    return 0;
}
