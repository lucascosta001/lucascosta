#include <iostream>
#include "..\minhabiblioteca\biblioteca.h"
using namespace std;

int main(){
    int altura = 0;
    cout << "Digite a altura da arvore: ";
    cin >> altura;
    arvore(altura);
    return 0;
}