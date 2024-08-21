// Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome, que faça a leitura dos 
// dados e os apresente em seguida na tela. O aluno deve ser  determinado através de um struct e seu nome deve ter no
// máximo 100 caracteres. 

#include <iostream>
#include <string>

using namespace std;

const int MAX_ALUNOS = 50;
const int TAM_NOME = 100;

struct Aluno {
    int matricula;
    char nome[TAM_NOME];
};

int main() {
    Aluno alunos[MAX_ALUNOS];
    int quantidadeAlunos;
    
    cout << "Digite a quantidade de alunos (maximo " << MAX_ALUNOS << "): ";
    cin >> quantidadeAlunos;
    
    // Verifica se a quantidade não excede o limite
    if (quantidadeAlunos > MAX_ALUNOS) {
        cout << "Quantidade de alunos excede o limite permitido!" << endl;
        return 1;
    }

    cin.ignore(); // Limpa o buffer do teclado
    
    // Leitura dos dados dos alunos
    for (int i = 0; i < quantidadeAlunos; ++i) {
        cout << "Digite a matricula do aluno " << (i + 1) << ": ";
        cin >> alunos[i].matricula;
        cin.ignore(); // Limpa o buffer do teclado

        cout << "Digite o nome do aluno " << (i + 1) << " (maximo de " << TAM_NOME - 1 << " caracteres): ";
        cin.getline(alunos[i].nome, TAM_NOME);
    }

    // Exibição dos dados dos alunos
    cout << "\nDados dos alunos:\n";
    for (int i = 0; i < quantidadeAlunos; ++i) {
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
