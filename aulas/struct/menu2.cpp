#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\minhabiblioteca\biblioteca.h"
using namespace std;

// void CadastrarProduto(Produto *p) {
//     cout << "Digite o codigo do produto: \n";
//     cin >> p->codigo;
//     cout << "Digite o nome do produto: \n";
//     getline(cin, p->nome);
// }

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localidade para Português do Brasil, para mostrar acentuação corretamente
    int i = 0;
    vector<Produto> produtos;
    Produto *ponteiro;
    vector<Produto>::iterator it;
    int j=0;
    while (true) {
        cout << " ******************* MENU ******************* " << endl;
        cout << " 1- Cadastrar produto " << endl;
        cout << " 2- Procurar produto " << endl;
        cout << " 3- Apagar produto " << endl;
        cout << " 4- Listar produtos " << endl;
        cout << " 5- Sair " << endl;
        cout << " ******************************************** " << endl;
        cout << "Digite a opção desejada: ";
        int opcao=0;
        cin >> opcao; 
        switch(opcao) {
            case 1: {
                Produto produtotemp;
                produtos.push_back(produtotemp);
                ponteiro=&produtos[j];
                cadastraproduto(ponteiro);
                j++;
                break;
            }
            case 2: {
                cout << "Procurar produto" << endl;
                system("pause");
                //logica de procurar produto
                break; 
            }
            case 3: {
                cout << "Apagar produto" << endl;
                system("pause");
                //logica de apagar produto
                break;
            }
            case 4: {
                cout << "Listar produtos" << endl;
                //logica de listar produtos
                listaprodutos(produtos);
                system("pause");
                break; 
            }
            case 5: {
                cout << "Sair" << endl;
                return 0; 
            }
            default: {
                cout << "Opção inválida" << endl;
                system("pause");
                break;
            }
        }  
    }     
    return 0;   
}