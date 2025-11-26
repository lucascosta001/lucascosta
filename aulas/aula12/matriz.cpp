#include <iostream>
using namespace std;

int main() {
    cout << "digite o tamanho da matriz: " << endl;
    int n = 0;
    cin >> n;
    int matriz[n][n];
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            cout << "Linha " << linha << ", Coluna " << coluna << ": " << endl;
            cin >> matriz[linha][coluna]; // Exemplo de preenchimento
        }
    }
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            cout << "[" << linha << "][" << coluna << "]: " << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
    int somadiag = 0, somadiagrev=0;
    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < n; coluna++)
        {
            if (linha==coluna)
            {
                somadiag += matriz[linha][coluna];
            }
            if (linha+coluna==n-1)
            {
                somadiagrev += matriz[linha][coluna];
            }
        }
    }
    cout << "Soma da Diagonal: " << somadiag << endl;
    cout << "Soma da Diagonal reversa: " << somadiagrev << endl;
    return 0;
}