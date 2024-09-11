/*

    Programa para exemplificar o uso de variável, ponteiro,
    endereço de memória e conteúdo de variável apontada por ponteiro

*/

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída para usar printf
#include <stdlib.h> // Inclui a biblioteca padrão de utilitários, embora não seja usada aqui

// Declara uma variável global 'x' e inicializa com o valor 10
int x = 10;

// Declara um ponteiro 'ptr' e o inicializa com o endereço de 'x'
int *ptr = &x;

void Mostrar(void) 
{
    // Imprime o valor da variável 'x'
    printf("\n\n Variavel x: %d", x);

    // Imprime o endereço de memória da variável 'x' em formato hexadecimal
    printf("\n\n Endereco de x: %X", &x);

    // Imprime o valor armazenado no ponteiro 'ptr' (ou seja, o endereço de 'x')
    printf("\n\n Variavel ptr: %X", ptr);

    // Imprime o endereço de memória do ponteiro 'ptr' em formato hexadecimal
    printf("\n\n Endereco de ptr: %X", &ptr);

    // Imprime o valor da variável que 'ptr' aponta (o valor de 'x')
    printf("\n\n Valor apontado por ptr: %d\n\n", *ptr);
}

int main(void)
{
    // Chama a função 'Mostrar' para exibir os valores e endereços iniciais
    Mostrar();

    // Modifica o valor da variável 'x' através do ponteiro 'ptr'
    *ptr = 345;

    // Chama a função 'Mostrar' novamente para exibir os valores e endereços após a modificação
    Mostrar();

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}