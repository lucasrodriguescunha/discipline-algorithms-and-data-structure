// main.cpp
#include <iostream>
#include "fila.h"
#include "pilha.h"
#include "aluno.h"

// Informações do programa
/*
Nome: Lucas Rodrigues Cunha
Objetivo do programa: Armazenar matrículas e notas em uma fila e depois 
                      empilhar as notas em ordem decrescente na pilha.
Entrada: Matrículas e notas fornecidas pelo usuário.
Saída: Dados dos alunos desempilhados em ordem decrescente de notas.
*/

using namespace std;

// Fun��o para ordenar manualmente os alunos por nota (e desempate pela matr�cula)
void ordenar(Aluno alunos[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (alunos[j].nota < alunos[j + 1].nota ||
               (alunos[j].nota == alunos[j + 1].nota && alunos[j].matricula > alunos[j + 1].matricula)) {
                // Troca
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

int main() {
    Fila fila;  // Inst�ncia da fila
    Pilha pilha;  // Inst�ncia da pilha
    Aluno alunos[100];  // Array para armazenar os alunos
    int totalAlunos = 0;

    int matricula;
    float nota;
    char continuar;

    // Entrada de dados: Receber as matr�culas e notas dos alunos
    cout << "\nDigite os dados dos alunos (matricula e nota)." << endl;
    do {
        cout << "\nMatricula:";
        cin >> matricula;
        cout << "Nota:";
        cin >> nota;
        fila.enfileirar(matricula, nota);  // Armazena na fila
        alunos[totalAlunos].matricula = matricula;
        alunos[totalAlunos].nota = nota;
        totalAlunos++;
        cout << "\nDeseja adicionar outro aluno? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    // Ordena os alunos para empilhar corretamente
    ordenar(alunos, totalAlunos);

    // Empilhar os alunos em ordem decrescente de notas
    for (int i = 0; i < totalAlunos; i++) {
        pilha.empilhar(alunos[i].matricula, alunos[i].nota);
    }

    // Desempilhar e exibir os alunos
    cout << "\nAlunos desempilhados (em ordem decrescente de notas):\n";
    while (!pilha.estaVazia()) {
        Aluno aluno = pilha.desempilhar();
        cout << "Matricula: " << aluno.matricula << ", Nota: " << aluno.nota << endl;
    }

    return 0;
}
