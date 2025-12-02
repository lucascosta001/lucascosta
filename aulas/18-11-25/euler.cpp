#include <iostream>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\aulas\minhabiblioteca\biblioteca.h"
using namespace std;

int main() {
    int number, termos;
    cout << "e elevado a x é calculado como a soma infinita:\n";
    cout << "e^x = 1 + x/1! + x^2/2! + x^3/3! + ...\n";
    cout << "Digite qual o valor de X: ";
    cin >> number;
    cout << "Digite quantos termos da soma deseja calcular: ";
    cin >> termos;
    cout << euler(number, termos);
    return 0;
}