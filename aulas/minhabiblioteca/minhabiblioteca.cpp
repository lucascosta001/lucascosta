#include <cmath>
#include "biblioteca.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
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

bool megasena1(int digita1, int digita2, int digita3, int digita4, int digita5, int digita6, int digita7, int digita8, int digita9, int digita10) {
    cout << "Bem vindo ao sorteio da Mega Sena!\n";
    cout << "Serao sorteados 6 numeros entre 1 e 60.\n";
    srand(time(0));
    //Sorteando os 6 numeros
    int numero1, numero2, numero3, numero4, numero5, numero6;
    numero1 = rand() % 60 + 1;  
    numero2 = rand() % 60 + 1;  
    numero3 = rand() % 60 + 1;  
    numero4 = rand() % 60 + 1;
    numero5 = rand() % 60 + 1;
    numero6 = rand() % 60 + 1;
    
    //Verificando numero1
    int acerta = 0;
    if (digita1==numero1 || digita1==numero2 || digita1==numero3 || digita1==numero4 || digita1==numero5 || digita1==numero6){
        cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    }   
    if (digita2==numero1 || digita2==numero2 || digita2==numero3 || digita2==numero4 || digita2==numero5 || digita2==numero6){
        cout << "O numero " << digita2 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita3==numero1 || digita3==numero2 || digita3==numero3 || digita3==numero4 || digita3==numero5 || digita3==numero6){
        cout << "O numero " << digita3 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita4==numero1 || digita4==numero2 || digita4==numero3 || digita4==numero4 || digita4==numero5 || digita4==numero6){
        cout << "O numero " << digita1 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita5==numero1 || digita5==numero2 || digita5==numero3 || digita5==numero4 || digita5==numero5 || digita5==numero6){
        cout << "O numero " << digita5 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita6==numero1 || digita6==numero2 || digita6==numero3 || digita6==numero4 || digita6==numero5 || digita6==numero6){
        cout << "O numero " << digita6 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita7==numero1 || digita7==numero2 || digita7==numero3 || digita7==numero4 || digita7==numero5 || digita7==numero6){
        cout << "O numero " << digita7 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita8==numero1 || digita8==numero2 || digita8==numero3 || digita8==numero4 || digita8==numero5 || digita8==numero6){
        cout << "O numero " << digita8 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita9==numero1 || digita9==numero2 || digita9==numero3 || digita9==numero4 || digita9==numero5 || digita9==numero6){
        cout << "O numero " << digita9 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (digita10==numero1 || digita10==numero2 || digita10==numero3 || digita10==numero4 || digita10==numero5 || digita10==numero6){
        cout << "O numero " << digita10 << " esta entre os numeros sorteados.\n";
        acerta=acerta+1;
    } 
    if (acerta==4)
       cout << "Parabens! Voce fez quadra!\n";
    if (acerta==5) 
         cout << "Parabens! Voce fez quina!\n";
    if (acerta < 4) 
       cout << "Que pena voce somente acertou " << acerta << " numero(s)\n";
    cout << "Os numeros sorteados foram: " << numero1 << ", " << numero2 << ", " << numero3 << ", " << numero4 << ", " << numero5 << " e " << numero6 << ".\n";
    if (acerta==6) 
        return true;
    else
        return false;
}      


bool comparaNumero(int n1, int n2) {
    return n1 == n2;
}

// void CadastrarProduto(Produto *p) {
//     cout << "Digite o codigo do produto: \n";
//     cin >> p->codigo;
//     cout << "Digite o nome do produto: \n";
//     getline(cin, p->nome);
// }

// void ListarProdutos(Produto *p, int quant) {
//     system("cls");
//     cout << "***** Produtos Cadastrados *****\n";
//     for(int i=0; i<quant; i++){
//         cout << "Codigo: " << p[i].codigo << "\n";
//         cout << "Nome: " << p[i].nome << "\n";
//         cout << "***************************************************\n";
//         p++;
//     }
//     system("pause");
// }

int fatorial(int n) {
    if (n == 0) return 1; // Caso base
    return n * fatorial(n - 1); // Chamada recursiva
}

unsigned long long fibonacci(int n){
    if (n <= 1) return n; // Caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
}

double euler(int x, int termos) {
    if (termos <= 0) return 0;
    return pow(x, termos) / fatorial(termos) + euler(x, termos - 1);
}