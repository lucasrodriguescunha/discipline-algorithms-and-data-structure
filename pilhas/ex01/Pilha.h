#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

// Define o tipo de dado que será armazenado na pilha
typedef char TipoDado;

// Estrutura de uma célula da pilha
struct TipoCelula {
    TipoDado Item; // Armazena o valor da célula
    TipoCelula *Prox; // Aponta para a próxima célula da pilha
};

// Declaração das funções da pilha
void Pilha_Construtor(); // Inicializa a pilha
void Pilha_Destrutor(); // Libera a memória alocada pela pilha
bool Pilha_Vazia(); // Verifica se a pilha está vazia
int Pilha_Tamanho(); // Retorna a quantidade de elementos na pilha
bool Pilha_Empilhar(TipoDado Elemento); // Empilha um elemento
bool Pilha_Desempilhar(TipoDado &Elemento); // Desempilha o topo
bool Pilha_Topo(TipoDado &Elemento); // Consulta o topo da pilha

#endif // PILHA_H_INCLUDED
