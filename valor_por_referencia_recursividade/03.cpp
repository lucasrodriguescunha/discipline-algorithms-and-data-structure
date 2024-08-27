// Exercício 3: Faça uma função que receba por parâmetro o tempo de duração expressa em segundos
// e retorna também por parâmetro esse tempo em horas, minutos e  segundos.

#include <iostream>
using namespace std;

void converterTempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int duracaoSegundos;
    int horas, minutos, segundos;

    cout << "Digite o tempo de duracao em segundos:";
    cin >> duracaoSegundos;

    converterTempo(duracaoSegundos, horas, minutos, segundos);

    cout << "Tempo = " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

    return 0;
}
