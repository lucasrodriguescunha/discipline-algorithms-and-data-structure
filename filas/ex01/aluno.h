#ifndef ALUNO_H
#define ALUNO_H

struct Aluno {
    int matricula;
    float nota;

    // Construtor para facilitar a criação de objetos do tipo Aluno
    Aluno(int m = -1, float n = -1.0) : matricula(m), nota(n) {}
};

#endif