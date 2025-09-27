#include <iostream>
using namespace std;

int main(){
    cout << "Digite a altura inteira da piramede: ";
    int h = 0, nivel=0, espacos = 0;
    cin >> h;
    for (int i = 0; i < h; i++){
        nivel = 2 * (i + 1), espacos = h - i - 1;
        for (int c = 0; c < espacos; c++){ // tira os asteristicos na tela
            cout << " ";
        }
        for (int c = 0; c < nivel; c++){ // mostrar os asteristicos na tela
            cout << "*";
        }
        cout << "\n";
    }
}