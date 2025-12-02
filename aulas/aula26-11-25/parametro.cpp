#include <iostream>
using namespace std;

// void incremento(int num) { deve ter o & para alterar o valor original no main, o & indica o endereco de memoria
//     num += 1;
//     cout << "Valor dentro da funcao incremento: " << num << endl;
// }
void incremento(int& num) {
    num += 1;
    cout << "Valor dentro da funcao incremento: " << num << endl;
}

int main() {
    int q = 9;
    incremento(q);
    cout << "Valor de q apos incremento: " << q << endl; // Deve imprimir 9

    return 0;
}