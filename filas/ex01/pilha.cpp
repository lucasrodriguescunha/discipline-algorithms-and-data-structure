#include "pilha.h"
#include <iostream>
using namespace std;

Pilha::Pilha() : topo(-1) {}

void Pilha::empilhar(int matricula, float nota) {
    if (topo < 99) {
        pilha[++topo].matricula = matricula;
        pilha[topo].nota = nota;
    } else {
        cout << "Pilha cheia!" << endl;
    }
}

Aluno Pilha::desempilhar() {
    if (topo >= 0) {
        return pilha[topo--];
    } else {
        cout << "Pilha vazia!" << endl;
        return Aluno();  // Retorna um aluno inválido
    }
}

bool Pilha::estaVazia() {
    return topo == -1;
}
