#ifndef FILA_H
#define FILA_H

#include "aluno.h"

class Fila {
    Aluno fila[100];  // Array fixo de 100 elementos para a fila
    int inicio, fim;

public:
    Fila(); // Construtor
    void enfileirar(int matricula, float nota);
    Aluno desenfileirar();
    bool estaVazia();
};

#endif