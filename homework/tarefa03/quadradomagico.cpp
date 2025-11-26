// criar um uma matriz quadrada de ordem 3x3 
// preencher a matriz com valores inteiros gerados aleatoriamente entre 1 e 9
// exibir a matriz na tela
// verificar se a matriz é um quadrado mágico
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int matriz[3][3];
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz[linha][coluna] = rand() % 9 + 1;
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
    // teste para saber se é quadrado mágico
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int somaLinhas[3] = {0}, somaColunas[3] = {0};

    for (int i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][2 - i];
    }

    if (somaDiagonalPrincipal == somaDiagonalSecundaria) {
        cout << "A matriz é um quadrado mágico." << endl;
    } else {
        cout << "A matriz não é um quadrado mágico." << endl;
    }

}