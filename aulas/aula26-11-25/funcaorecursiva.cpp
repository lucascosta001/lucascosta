#include <iostream>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\minhabiblioteca\biblioteca.h"
using namespace std;

// int fatorial(int n) {
//     return n * fatorial(n - 1); // Chamada recursiva
//}

// int fatorial(int n) {
//     if (n == 0)return 1; // Caso base
    
//     return n * fatorial(n - 1); // Chamada recursiva
// }

int main() {
    int numero;
    cout << "Digite um numero para calcular o fatorial: ";
    cin >> numero;

    int resultado = fatorial(numero);
    cout << "Fatorial de " << numero << " eh: " << resultado << endl;

    return 0;
}