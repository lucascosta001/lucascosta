// uma variavel tem 4 bytes - a não ser se for short, que tem 2 bytesgti 
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Digite um valor para x: ";
    cin >> x;
    cout << "x/5 = " << x/5 << "\n";
    cout << "x*2 = " << x*2 << "\n";
    return 0;
}