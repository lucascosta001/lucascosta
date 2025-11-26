#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Função para mostrar a matriz com símbolos
void mostrarMatriz(int matriz[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 0)
                cout << char(219) << char(219); // Preto
            else
                cout << char(176) << char(176); // Branco
        }
        cout << endl;
    }
}

// Função para inverter cores
void inverterCores(int matriz[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = 1 - matriz[i][j];
}

// Função para transpor matriz
void transporMatriz(int matriz[10][10], int n) {
    int temp[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][i] = matriz[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = temp[i][j];
}

// Função para contar pixels
void contarPixels(int matriz[10][10], int n) {
    int brancos = 0, pretos = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] == 0 ? pretos++ : brancos++;
    cout << "Brancos: " << brancos << ", Pretos: " << pretos << endl;
}

// Função para desenhar moldura
void desenharMoldura(int matriz[10][10], int n) {
    for (int i = 0; i < n; i++) {
        matriz[0][i] = 0;
        matriz[n-1][i] = 0;
        matriz[i][0] = 0;
        matriz[i][n-1] = 0;
    }
}

int main() {
    int matriz[10][10], n, opcao;
    srand(time(0));

    cout << "Digite o tamanho da matriz (1 a 10): ";
    cin >> n;

    // Preenche matriz aleatoriamente
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = rand() % 2;

    mostrarMatriz(matriz, n);

    // Menu de operações
    do {
        cout << "\nMenu:\n1-Inverter\n2-Transpor\n3-Contar\n4-Moldura\n5-Sair\nEscolha: ";
        cin >> opcao;
        switch (opcao) {
            case 1: inverterCores(matriz, n); mostrarMatriz(matriz, n); break;
            case 2: transporMatriz(matriz, n); mostrarMatriz(matriz, n); break;
            case 3: contarPixels(matriz, n); break;
            case 4: desenharMoldura(matriz, n); mostrarMatriz(matriz, n); break;
        }
    } while (opcao != 5);

    return 0;
}