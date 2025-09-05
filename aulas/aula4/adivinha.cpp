#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    cout << "Bem vindo ao jogo de adivinhacao!\n" ;
    cout << "Tente adivinhar o numero que estou pensando entre 1 e 100.\n" ;
    srand(time(0));
    int numero_secreto = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    do
    {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;
        if (palpite == numero_secreto) {
            cout << "Parabens! Voce adivinhou o numero.\n";
            return 0;
        } else if (palpite < numero_secreto) {
            cout << "Muito baixo! Tente novamente.\n";
        } else {
            cout << "Muito alto! Tente novamente.\n";
        }
    } while (tentativas < 3);

    cout << "Suas tentativas acabaram! O numero era " << numero_secreto << ".\n";
    return 0;
}

// Programa de adivinhação de número