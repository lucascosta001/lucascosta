// Impar ou par?
#include <iostream>
using namespace std; 
int main() {
    int x;
    cout << "Digite um numero, real e inteiro: ";
    cin >> x;
    // Todo numero, real e inteiro, que dividido por 2 tem resto 0 é par, e quando o resto e 1 é impar.
    if(x%2==0) 
        cout << "Voce digitou um numero par" << "\n";
    else if(x%2==1)
        cout << "Voce digitou um numero impar" << "\n";
}