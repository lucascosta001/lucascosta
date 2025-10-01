// tarefacasa02252013404.cpp
// Aluno: Lucas Alan Costa Novais
// Matrícula: 252013404

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int picos; 
    cout << "Digite o numero de picos: ";
    cin >> picos;

    int alturas[picos];// associar a quantidade de picos ao Array
    for (int i = 0; i < picos; i++){ // inputs de dados
        cout << "Digite um numero inteiro do pico " << i+1 << ": ";
        cin >> alturas[i];
    }
    system("cls"); // limpa a tela (Windows). Só efeito visual.

    // entradas
    cout << "Numero de picos: " << picos << "\n";
    cout << "Altura dos picos: ";
    for (int i = 0; i < picos; i++)
    {
        cout << alturas[i] << " ";
    }
    cout << "\n\n";
    
    // saidas
    int atual = 0;   // índice do pico onde estamos (começa no 0, primeiro pico)
    int cabos = 0;   // contador de cabos

    while (atual < picos - 1) { // Enquanto ainda não chegamos no último pico
        int proximo = atual + 1; // por padrão, conecta ao próximo pico imediato

        // Procurar o pico mais distante que ainda pode ser conectado
        for (int j = atual + 1; j < picos; j++) {
            double m = (double)(alturas[j] - alturas[atual]) / (j - atual); // inclinação atual->j
            bool bloqueado = false;

            // Verifica todos os picos entre "atual" e "j"
            for (int k = atual + 1; k < j; k++) {
                // Inclinação entre pico "atual" e pico "k"
                double mInter = (double)(alturas[k] - alturas[atual]) / (k - atual);
                // Se algum pico intermediário tem inclinação maior ou igual,
                // então o cabo ficaria "bloqueado" por esse pico
                if (mInter >= m) {
                    bloqueado = true;
                    break;
                }
            }
            // Se algum pico intermediário tem inclinação maior ou igual,
            // então o cabo ficaria "bloqueado" por esse pico
            if (!bloqueado) {
                proximo = j; // guarda o mais distante sem bloqueio
            }
        }
        // Conecta o pico atual ao mais distante possível
        cout << "Conectando pico " << atual << " com pico " << proximo << endl;
        cabos++; // incrementa contador de cabos
        atual = proximo; // move para o pico conectado
    }
    cout << "Numero minimo de cabos: " << cabos << endl;
    return 0;
}