#include "fila.h"
#include <iostream>
using namespace std;

Fila::Fila() : inicio(0), fim(0) {}

void Fila::enfileirar(int matricula, float nota) {
    if (fim < 100) {
        fila[fim].matricula = matricula;
        fila[fim].nota = nota;
        fim++;
    } else {
        cout << "Fila cheia!" << endl;
    }
}

Aluno Fila::desenfileirar() {
    if (inicio != fim) {
        return fila[inicio++];
    } else {
        cout << "Fila vazia!" << endl;
        return Aluno();  // Retorna um aluno inválido
    }
}

bool Fila::estaVazia() {
    return inicio == fim;
}
