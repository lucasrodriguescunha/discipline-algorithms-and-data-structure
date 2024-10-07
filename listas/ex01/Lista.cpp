#include <iostream>
#include <cstdlib>
#include "Lista.h"

TipoCelula *Frente, *Tras;
int Contador;

void Lista_Construtor() {
    Frente = Tras = NULL;
    Contador = 0;
}

void Lista_Destrutor() {
    TipoCelula *Temp;
    while (Frente != NULL) {
        Temp = Frente;
        Frente = Frente->Prox;
        Temp->Prox = NULL;
        free(Temp);
    }
    Tras = NULL;
    Contador = 0;
}

bool Lista_Vazia() {
    return Frente == NULL;
}

int Lista_Tamanho() {
    return Contador;
}

bool Lista_Inserir_Ordenado(TipoDado Elemento) {
    TipoCelula *Novo = (TipoCelula *)malloc(sizeof(TipoCelula));
    if (Novo == NULL) {
        return false; // Falta de memória
    }

    Novo->Item = Elemento;
    Novo->Prox = NULL;

    // Se a lista estiver vazia, insere o primeiro elemento
    if (Lista_Vazia() || Frente->Item > Elemento) {
        Novo->Prox = Frente;
        Frente = Novo;
        if (Tras == NULL) Tras = Novo; // Se for o primeiro elemento
        Contador++;
        return true;
    }

    TipoCelula *Temp = Frente;
    while (Temp->Prox != NULL && Temp->Prox->Item < Elemento) {
        Temp = Temp->Prox; // Procura a posição de inserção
    }

    // Se o elemento já existir
    if (Temp->Item == Elemento) {
        free(Novo); // Libera a memória do novo elemento
        return false; // Não insere, pois já existe
    }

    Novo->Prox = Temp->Prox;
    Temp->Prox = Novo;

    if (Novo->Prox == NULL) Tras = Novo; // Atualiza o final se necessário

    Contador++;
    return true;
}

bool Lista_Remover_Inicio(TipoDado &Elemento) {
    if (!Lista_Vazia()) {
        TipoCelula *Temp = Frente;
        Elemento = Frente->Item;
        Frente = Frente->Prox;
        Temp->Prox = NULL;
        free(Temp);
        if (Frente == NULL) Tras = NULL; // Se a lista ficou vazia
        Contador--;
        return true;
    } else {
        return false; // Lista vazia
    }
}

bool Lista_Remover_Fim(TipoDado &Elemento) {
    if (!Lista_Vazia()) {
        TipoCelula *Temp = Frente;
        if (Frente == Tras) { // Se só tem um elemento
            Elemento = Tras->Item;
            free(Tras);
            Frente = Tras = NULL;
            Contador--;
            return true;
        }

        while (Temp->Prox != Tras) {
            Temp = Temp->Prox; // Procura o penúltimo
        }

        Elemento = Tras->Item;
        free(Tras);
        Tras = Temp;
        Tras->Prox = NULL; // Atualiza o final
        Contador--;
        return true;
    } else {
        return false; // Lista vazia
    }
}

bool Lista_Inicio(TipoDado &Elemento) {
    if (!Lista_Vazia()) {
        Elemento = Frente->Item;
        return true;
    } else {
        return false; // Lista vazia
    }
}

bool Lista_Fim(TipoDado &Elemento) {
    if (!Lista_Vazia()) {
        Elemento = Tras->Item;
        return true;
    } else {
        return false; // Lista vazia
    }
}

bool Lista_BuscarPeloElemento(TipoDado Elemento, int &Posicao) {
    TipoCelula *Temp = Frente;
    int i = 0;

    while (Temp != NULL && Temp->Item != Elemento) {
        i++;
        Temp = Temp->Prox;
    }

    if (Temp != NULL) {
        Posicao = i;
        return true; // Encontrou
    } else {
        return false; // Não encontrou
    }
}

bool Lista_BuscarPelaPosicao(TipoDado &Elemento, int Posicao) {
    TipoCelula *Temp = Frente;
    int i = 0;

    if (!Lista_Vazia() && Posicao < Contador) {
        while (i < Posicao) {
            Temp = Temp->Prox;
            i++;
        }
        Elemento = Temp->Item;
        return true; // Encontrou
    } else {
        return false; // Lista vazia ou posição inválida
    }
}
