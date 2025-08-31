#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Digite um numero: ";
    cin >> x;
    if(x%2==0)
        cout << "Voce digitou um numero par" << "\n";
    else if(x%2==1)
        cout << "Voce digitou um numero impar" << "\n";
}