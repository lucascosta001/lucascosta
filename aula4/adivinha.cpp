#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    cout << "Bem vindo ao jogo de adivinhação!\n" ;
    cout << "Tente adivinhar o número que estou pensando entre 1 e 100.\n" ;
    srand(time(0));
    int numero_secreto = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;
    cout << "Digite seu palpite 1: ";
    cin >> palpite;
    tentativas=tentativas+1;
    if (palpite == numero_secreto) {
        cout << "Parabéns! Você adivinhou o número.\n";
        return 0;
    }
    
    cout << "Digite seu palpite 2: ";
    cin >> palpite;
    tentativas=tentativas+1;
    if (palpite == numero_secreto) {
        cout << "Parabéns! Você adivinhou o número.\n";
        return 0;
    }

    cout << "Digite seu palpite 3: ";
    cin >> palpite;
    tentativas=tentativas+1;
    if (palpite == numero_secreto) {
        cout << "Parabéns! Você adivinhou o número.\n";
        return 0;
    }


    // if (palpite < numero_secreto) {
    //     cout << "Muito baixo! Tente novamente.\n";
    // } else if (palpite > numero_secreto) {
    //     cout << "Muito alto! Tente novamente.\n";
    // }
    
    // while (palpite != numero_secreto);
    cout << "Parabéns! Você adivinhou o número.\n";
}
