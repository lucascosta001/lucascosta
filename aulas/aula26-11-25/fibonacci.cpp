#include <iostream>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\aulas\minhabiblioteca\biblioteca.h"
using namespace std;

// int fibonacci(int n){
//     if (n <= 1) return n; // Caso base
//     return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
// }

int main() {
    cout << "Sequencia de Fibonacci:\n";
    cout << "digite ate qual elemento da sequecia de fibonacci: ";
    int n;
    cin >> n;
    cout << "O valor de fibonacci(" << n << ") é " << fibonacci(n);
    
    return 0;
}