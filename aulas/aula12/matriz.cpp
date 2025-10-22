#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cout << "Linha " << linha << ", Coluna " << coluna << ": " << endl;
            cin >> matriz[linha][coluna]; // Exemplo de preenchimento
        }
    }
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            cout << "[" << linha << "][" << coluna << "]: " << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }

    return 0;
}