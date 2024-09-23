#include <iostream>
#include <stdio.h>
#include "Pilha.h" // Inclusão do cabeçalho da implementação da Pilha

// Variável global que aponta para o topo da pilha
TipoCelula *Topo;

// Variável global que mantém o contador de elementos na pilha
int Contador;

// Função construtora da pilha, inicializa o topo como NULL e o contador como 0
void Pilha_Construtor() {
    Topo = NULL; // A pilha começa vazia, topo aponta para NULL
    Contador = 0; // Não há elementos na pilha no início
}

// Função destrutora da pilha, libera toda a memória alocada dinamicamente
void Pilha_Destrutor() {
    TipoCelula *Temp; // Ponteiro temporário para desalocar a memória

    while (Topo != NULL) { // Enquanto a pilha não estiver vazia
        Temp = Topo; // Guarda o endereço do topo atual
        Topo = Topo->Prox; // Move o topo para o próximo elemento
        free(Temp); // Libera a célula atual da memória
    }

    Contador = 0; // Reseta o contador de elementos
}

// Função que verifica se a pilha está vazia
bool Pilha_Vazia() {
    return Topo == NULL; // Se o topo for NULL, a pilha está vazia
}

// Retorna a quantidade de elementos na pilha
int Pilha_Tamanho() {
    return Contador; // Retorna o valor atual do contador de elementos
}

// Função para empilhar um novo elemento na pilha
bool Pilha_Empilhar(TipoDado Elemento) {
    TipoCelula *Nova = (TipoCelula *) malloc(sizeof(TipoCelula)); // Aloca memória para uma nova célula
    if (Nova == NULL) { // Verifica se a alocação foi bem-sucedida
        return false; // Se não, retorna falso
    }

    Nova->Item = Elemento; // Armazena o elemento na nova célula
    Nova->Prox = Topo; // A nova célula aponta para o topo atual
    Topo = Nova; // A nova célula se torna o topo da pilha
    Contador++; // Incrementa o contador de elementos
    return true; // Retorna verdadeiro indicando que o empilhamento foi bem-sucedido
}

// Função para desempilhar o topo da pilha
bool Pilha_Desempilhar(TipoDado &Elemento) {
    if (Pilha_Vazia()) { // Se a pilha estiver vazia, não há nada para desempilhar
        return false;
    }

    TipoCelula *Temp = Topo; // Ponteiro temporário para a célula a ser removida
    Elemento = Temp->Item; // Armazena o item do topo a ser removido
    Topo = Topo->Prox; // Move o topo para a próxima célula
    free(Temp); // Libera a célula removida da memória
    Contador--; // Decrementa o contador de elementos
    return true; // Retorna verdadeiro indicando que o desempilhamento foi bem-sucedido
}

// Função para consultar o elemento no topo da pilha sem removê-lo
bool Pilha_Topo(TipoDado &Elemento) {
    if (Pilha_Vazia()) { // Se a pilha estiver vazia, não há topo para consultar
        return false;
    }

    Elemento = Topo->Item; // Armazena o item no topo
    return true; // Retorna verdadeiro indicando que o topo foi consultado com sucesso
}
