#include <iostream>
#include <cmath>
using namespace std;

float hipotenusa(float cateto1, float cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    float cateto1, cateto2;
    cout << "Digite o comprimento do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o comprimento do segundo cateto: ";
    cin >> cateto2;
    cout << "O comprimento da hipotenusa e: " << hipotenusa(cateto1, cateto2) << endl;
    return 0;
}