#include <iostream> // para usar cout e cin, que imprimem e leem valores do teclado
#include <stdio.h> // para usar a funcao printf(), que imprime na tela o valor da tecla digitada
#include <stdlib.h> // para usar a funcao system("cls"), que limpa a tela
#include <conio.h> // para usar a funcao getch(), que le o valor da tecla digitada
// #include "minhabiblioteca.h"
using namespace std; // para evitar de usar o prefixo std:: em cout, cin, etc.

int main() {
    //programa que le valor de tecla do teclado
    char ch;
    while (true) {
        system("cls");
        cout << "Digite alguma tecla e <ESC> para sair: ";
        ch = getch();
        if (ch == 27) {//27 e o codigo ASCII da tecla ESC
            return 0;
        }
        cout << "O valor da tecla digitada e: " << ch << endl;
        system("pause");
    }
}
     