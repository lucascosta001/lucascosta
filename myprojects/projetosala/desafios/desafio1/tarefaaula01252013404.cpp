// tarefaaula01252013404.cpp
// Aluno: Lucas Alan Costa Novais
// Matrícula: 252013404

#include <iostream>
using namespace std;

int main() {
    string entrada;
    cout << "Digite uma frase (minusculas, sem acento): ";
    getline(cin, entrada);

    if (entrada.length() == 0) { // testa se a entrada é vazia
        cout << "Nenhuma frase digitada.\n";
        return 0;
    }

    // Converte para binário (ASCII 8 bits por caractere)
    string binario = "";
    for (int i = 0; i < entrada.length(); i++) {  // para cada caractere
        int valor = (int)entrada[i]; 
        for (int j = 7; j >= 0; j--) { // converte para binario
            if ((valor >> j) & 1)
                binario += '1';
            else
                binario += '0';
        }
    }

    cout << "\nBinario original:\n" << binario << "\n\n";

    // Compressão RLE
    string comprimido = ""; // string para o binario comprimido
    char atual = binario[0];
    int cont = 1;

    for (int i = 1; i < binario.length(); i++) { // para cada bit
        if (binario[i] == atual) { // mesmo bit
            cont++;
        } else {
            // Escreve o bloco acumulado
            if (cont >= 7) {
                for (int j = 7; j >= 0; j--) { // escreve cont em binario
                    if ((cont >> j) & 1)
                        comprimido += '1';
                    else
                        comprimido += '0';
                }
            } else {
                for (int k = 0; k < cont; k++) { // escreve o bit atual cont vezes
                    comprimido += atual;
                }
            }
            atual = binario[i];
            cont = 1;
        }
    }

    // Último bloco
    if (cont >= 7) { // escreve cont em binario
        for (int j = 7; j >= 0; j--) {
            if ((cont >> j) & 1)
                comprimido += '1';
            else
                comprimido += '0';
        }
    } else {
        for (int k = 0; k < cont; k++) {
            comprimido += atual;
        }
    }

    cout << "Binario comprimido:\n" << comprimido << "\n";

    return 0;
}