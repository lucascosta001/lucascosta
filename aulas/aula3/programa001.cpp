// uma variavel tem 4 bytes - a não ser se for short, que tem 2 bytesgti 
#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Digite um valor para x: ";
    cin >> x;
    cout << "Digite um valor para y: ";
    cin >> y;
    cout << "multiplicacao = " << x*y << "\n";
    float z = x/y;
    cout << "divisao = " << z << "\n";
    cout << "modulo = " << x%y << "\n";
    cout << "adicao = " << x+y << "\n";
    cout << "subtracao = " << x-y << "\n";

    if (x > y)
        cout << x << " é maior que " << y << "\n";
    else if (x < y)
        cout << x << " é menor que " << y << "\n";
    else
        cout << x << " é igual a " << y << "\n";
    return 0;
}
// dever de casa um identifidor de par ou Impar