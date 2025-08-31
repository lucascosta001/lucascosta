#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Digite um numero: ";
    cin >> x;
    if(x%2==0)
        cout << "Par" << "\n";
    else if(x%2==1)
        cout << "Impar" << "\n";
}