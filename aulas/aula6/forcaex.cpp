#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int i = 0, encontrou = 0; 
    char letra;
    string palavra;

    cout << "Voce e o primeiro jogador!\n";
    cout << "Digite um palavra: ";
    getline(cin, palavra);
    system("cls"); // limpar tela
    
    cout << "Voce e o segundo jogador!\n";
    cout << "A palavra tem " << palavra.length() << " letras." << endl;
    
    for (int i = 0; i < palavra.length(); i++) { // transformar em minusculo
        palavra[i] = tolower(palavra[i]);
    }

    while (true){ // segundo jogador tentando advinhar
        cout << "Digite uma letra: ";
        cin >> letra;
        letra = tolower(letra);

        bool achou = false;
        for (int j = 0; j < palavra.length(); j++) { // tentar achar a letra na palavra
            if (palavra[j] == letra) {
                cout << "Voce acertou a letra " << letra << " na posicao " << j << "!\n";
                achou = true;
                encontrou++; // contar letras acertadas para comparar com o tamanho da palavra e finalizar o jogo
            }
        }
        if (!achou) {
            cout << "Voce errou a letra " << letra << "!\n";
        }

        if (encontrou == palavra.length()) { // teste de fim de jogo
            cout << "Parabens! Voce acertou a palavra: " << palavra << "\n";
            break;
        }
    }
    
}
