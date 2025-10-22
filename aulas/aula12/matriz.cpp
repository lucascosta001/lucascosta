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
    int soma1 = 0, soma2=0;
    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < n; coluna++)
        {
            if (linha==coluna)
            {
                soma1 += matriz[linha][coluna];
            }
            if (linha+coluna==n-1)
            {
                soma2 += matriz[linha][coluna];
            }
        }
    }
    cout << "Soma da Diagonal Principal: " << soma1 << endl;
    cout << "Soma da Diagonal Secundaria: " << soma2 << endl;
    return 0;
}