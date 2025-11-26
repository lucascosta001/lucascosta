// -------------------------------------------------------------
// Nome: Lucas Alan Costa Novais 252013404
// Disciplina: Computação para Engenharia (CPE) - Tarefa Casa 03 
// Programa: Editor Visual de Imagens em Preto e Branco
// -------------------------------------------------------------
#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int N;
    int matriz[10][10]; // tamanho máximo permitido
    int opcao;

    // Inicializa a semente do gerador de números aleatórios
    srand(time(0));

    // Entrada do tamanho da matriz
    cout << "Digite o tamanho da matriz (1 a 10): ";
    cin >> N;

    // Garante que o tamanho seja válido
    if (N < 1 || N > 10) {
        cout << "Tamanho inválido!" << endl;
        return 0;
    }

    // Preenche a matriz com valores aleatórios (0 ou 1)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 2; // gera 0 ou 1
        }
    }

    // Mostra a matriz inicial
    cout << "\nMatriz inicial:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] == 0)
                cout << char(219) << char(219); // preto "██"
            else
                cout << char(176) << char(176); // branco "░░"
        }
        cout << endl;
    }

    // Menu de opções
    do {
        cout << "\n----- MENU -----\n";
        cout << "1 - Inverter cores\n";
        cout << "2 - Mostrar matriz transposta\n";
        cout << "3 - Contar pixels\n";
        cout << "4 - Desenhar moldura\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            // Inverte as cores (0 vira 1, e 1 vira 0)
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (matriz[i][j] == 0)
                        matriz[i][j] = 1;
                    else
                        matriz[i][j] = 0;
                }
            }

            cout << "\nMatriz com cores invertidas:\n";
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (matriz[i][j] == 0)
                        cout << char(219) << char(219);
                    else
                        cout << char(176) << char(176);
                }
                cout << endl;
            }
            break;

        case 2:
            // Mostra a matriz transposta (troca linha por coluna)
            cout << "\nMatriz transposta:\n";
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (matriz[j][i] == 0)
                        cout << char(219) << char(219);
                    else
                        cout << char(176) << char(176);
                }
                cout << endl;
            }
            break;

        case 3:
            // Conta quantos pixels brancos e pretos há
            int cont_preto = 0, cont_branco = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (matriz[i][j] == 0)
                        cont_preto++;
                    else
                        cont_branco++;
                }
            }
            cout << "\nQuantidade de pixels pretos (██): " << cont_preto << endl;
            cout << "Quantidade de pixels brancos ( ): " << cont_branco << endl;
            break;

        case 4:
            // Desenha uma moldura preta ao redor da matriz
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                        matriz[i][j] = 0; // preto
                }
            }

            cout << "\nMatriz com moldura preta:\n";
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (matriz[i][j] == 0)
                        cout << char(219) << char(219);
                    else
                        cout << char(176) << char(176);
                }
                cout << endl;
            }
            break;

        case 5:
            cout << "Saindo do programa..." << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 5);

    return 0;
}