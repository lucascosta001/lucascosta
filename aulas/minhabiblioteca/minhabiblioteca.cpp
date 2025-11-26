#include <iostream>
#include "biblioteca.h"
#include <cmath>
using namespace std;

float hipotenusa(float cateto1, float cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

void arvore(int altura){
    int lastRow = altura * 2;
    for (int i = 1; i <= altura; i++){
        int numAst = i * 2;
        int numEspaces = lastRow - numAst;
        int half = numEspaces / 2;
        string line = "";
        for (int o = 0; o < half; o++){
            line += ' ';
        }
        for (int o = 0; o < numAst; o++){
            line += '*';
        }
        cout << "\n";
    }
    system("pause");
}

// bool megasena1() {
//     int acerta = 0;
//     if (digita1==ale1 || digita1==ale2 || digita1==ale3 || digita1==ale4 || digita1==ale5 || digita1==ale6){
//         cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     }   
//     if (digita2==ale1 || digita2==ale2 || digita2==ale3 || digita2==ale4 || digita2==ale5 || digita2==ale6){
//         cout << "O numero " << digita2 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita3==ale1 || digita3==ale2 || digita3==ale3 || digita3==ale4 || digita3==ale5 || digita3==ale6){
//         cout << "O numero " << digita3 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita4==ale1 || digita4==ale2 || digita4==ale3 || digita4==ale4 || digita4==ale5 || digita4==ale6){
//         cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita5==ale1 || digita5==ale2 || digita5==ale3 || digita5==ale4 || digita5==ale5 || digita5==ale6){
//         cout << "O numero " << digita5 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita6==ale1 || digita6==ale2 || digita6==ale3 || digita6==ale4 || digita6==ale5 || digita6==ale6){
//         cout << "O numero " << digita6 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita7==ale1 || digita7==ale2 || digita7==ale3 || digita7==ale4 || digita7==ale5 || digita7==ale6){
//         cout << "O numero " << digita7 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita8==ale1 || digita8==ale2 || digita8==ale3 || digita8==ale4 || digita8==ale5 || digita8==ale6){
//         cout << "O numero " << digita8 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita9==ale1 || digita9==ale2 || digita9==ale3 || digita9==ale4 || digita9==ale5 || digita9==ale6){
//         cout << "O numero " << digita9 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     } 
//     if (digita10==ale1 || digita10==ale2 || digita10==ale3 || digita10==ale4 || digita10==ale5 || digita10==ale6){
//         cout << "O numero " << digita10 << " esta entre os numeros sorteados.\n";
//         acerta=acerta+1;
//     }  

    
// }

bool comparaNumero(int n1, int n2) {
    return n1 == n2;
}

void CadastrarProduto(Produto *p) {
    cout << "Digite o codigo do produto: \n";
    cin >> p->codigo;
    cout << "Digite o nome do produto: \n";
    getline(cin, p->nome);
}

void ListarProdutos(Produto *p, int quant) {
    system("cls");
    cout << "***** Produtos Cadastrados *****\n";
    for(int i=0; i<quant; i++){
        cout << "Codigo: " << p[i].codigo << "\n";
        cout << "Nome: " << p[i].nome << "\n";
        cout << "***************************************************\n";
        p++;
    }
    system("pause");
}