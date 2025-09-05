#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    cout << "Bem vindo ao jogo da Grande sena!!!\n";
    cout << "Digite 10 numeros entre 1 e 60: \n";
    
// aqui pode colocar uma estrutura de repeticao usando array
    int ale1, ale2, ale3, ale4, ale5, ale6;
    cout << "Digite o primeiro numero :";
    cin >> ale1;
    cout << "Digite o primeiro segundo :";
    cin >> ale2;
    cout << "Digite o primeiro terceiro :";
    cin >> ale3;
    cout << "Digite o primeiro quarto :";
    cin >> ale4;
    cout << "Digite o primeiro quinto :";
    cin >> ale5;
    cout << "Digite o primeiro sexto :";
    cin >> ale6;
// Array tambem aqui
    int n1,n2,n3,n4,n5,n6;
    n1 = rand() % 60 + 1;
    n2 = rand() % 60 + 1;
    n3 = rand() % 60 + 1;
    n4 = rand() % 60 + 1;
    n5 = rand() % 60 + 1;
    n6 = rand() % 60 + 1;
    cout << "Numeros sorteados: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << "\n";

    int acertos = 0;
//  aqui cabe um for
    if (ale1 == n1 || ale1 == n2 || ale1 == n3 || ale1 == n4 || ale1 == n5 || ale1 == n6) {
        cout << "Parabens, voce acertou o primeiro numero!!! \n";
        cout << "Numero 1: " << ale1 << "\n";
        acertos++;
    }
    if (ale2 == n1 || ale2 == n2 || ale2 == n3 || ale2 == n4 || ale2 == n5 || ale2 == n6) {
        cout << "Parabens, voce acertou o segundo numero!!! \n";
        cout << "Numero 2: " << ale2 << "\n";
        acertos++;
    }
    if (ale3 == n1 || ale3 == n2 || ale3 == n3 || ale3 == n4 || ale3 == n5 || ale3 == n6) {
        cout << "Parabens, voce acertou o terceiro numero!!! \n";
        cout << "Numero 3: " << ale3 << "\n";   
        acertos++;
    }
    if (ale4 == n1 || ale4 == n2 || ale4 == n3 || ale4 == n4 || ale4 == n5 || ale4 == n6) {
        cout << "Parabens, voce acertou o quarto numero!!! \n";
        cout << "Numero 4: " << ale4 << "\n";
        acertos++;
    }
    if (ale5 == n1 || ale5 == n2 || ale5 == n3 || ale5 == n4 || ale5 == n5 || ale5 == n6) {
        cout << "Parabens, voce acertou o quinto numero!!! \n";
        cout << "Numero 5: " << ale5 << "\n";
        acertos++;
    }
    if (ale6 == n1 || ale6 == n2 || ale6 == n3 || ale6 == n4 || ale6 == n5 || ale6 == n6) {
        cout << "Parabens, voce acertou o sexto numero!!! \n";
        cout << "Numero 6: " << ale6 << "\n";
        acertos++;
    }

    if (acertos > 4) {
        cout << "Parabens, voce acertou uma quadra!!! \n";
    }
    if (acertos > 5) {
        cout << "Parabens, voce acertou uma quina!!! \n";
    }
    if (acertos > 6) {
        cout << "Parabens, voce acertou uma sena!!! \n";
    }
    cout << "Voce acertou " << acertos << " numeros no total!!! \n";
}

// de 1 a 60
// 


// mega sena