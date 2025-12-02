#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\aulas\minhabiblioteca\biblioteca.h"
using namespace std;

int main() {
    cout << "Bem vindo ao sorteio da Mega Sena!\n";
    cout << "Serao sorteados 6 numeros entre 1 e 60.\n";

    int n1, n2, n3, n4, n5, n6;
    n2 = rand() % 60 + 1;  
    n1 = rand() % 60 + 1;  
    n3 = rand() % 60 + 1;  
    n4 = rand() % 60 + 1;
    n5 = rand() % 60 + 1;
    n6 = rand() % 60 + 1;
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
    cout << "Numeros sorteados: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << "\n";
    //Sorteando os 6 numeros
    int digita1, digita2, digita3, digita4, digita5, digita6, digita7, digita8, digita9, digita10;
    cout << "Digite seu 1 numero: ";
    cin >> digita1;
    cout << "Digite seu 2 numero: ";
    cin >> digita2;
    cout << "Digite seu 3 numero: ";
    cin >> digita3;
    cout << "Digite seu 4 numero: ";
    cin >> digita4;
    cout << "Digite seu 5 numero: ";
    cin >> digita5;
    cout << "Digite seu 6 numero: ";
    cin >> digita6;
    cout << "Digite seu 7 numero: ";
    cin >> digita7;
    cout << "Digite seu 8 numero: ";
    cin >> digita8;
    cout << "Digite seu 9 numero: ";
    cin >> digita9;
    cout << "Digite seu 10 numero: ";
    cin >> digita10;
    //Verificando ale1
    if (megasena1(digita1, digita2, digita3, digita4, digita5, digita6, digita7, digita8, digita9, digita10)) {
        cout << "Voce ganhou na Mega Sena!\n";
        cout << "Parabens! Voce fez quadra!\n";
    }
    // if (acerta==5) 
    //     cout << "Parabens! Voce fez quina!\n";
    // if (acerta==6)
    //     cout <<  "Parabens! Voce fez sena!\n";
    // if (acerta < 4) 
    //    cout << "Que pena voce somente acertou " << acerta << " numero(s)\n";
    cout << "Os numeros sorteados foram: " << ale1 << ", " << ale2 << ", " << ale3 << ", " << ale4 << ", " << ale5 << " e " << ale6 << ".\n";
    return 0;
}