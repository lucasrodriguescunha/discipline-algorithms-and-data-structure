#ifndef PILHA_H
#define PILHA_H

#include "aluno.h"

class Pilha {
    Aluno pilha[100];  // Array fixo de 100 elementos para a pilha
    int topo;

public:
    Pilha();  // Construtor
    void empilhar(int matricula, float nota);
    Aluno desempilhar();
    bool estaVazia();
};

#endif
