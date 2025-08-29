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

    return 0;
}