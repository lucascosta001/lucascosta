#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
// #include "../minhabiblioteca/biblioteca.h"
using namespace std;

struct Produto{
    unsigned int codigo;
    string nome;
};

void CadastrarProduto(Produto *p) {
    cout << "Digite o codigo do produto: \n";
    cin >> p->codigo;
    cout << "Digite o nome do produto: \n";
    getline(cin, p->nome);
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localidade para Português do Brasil, para mostrar acentuação corretamente
    int i = 0;
    vector<Produto> produtos;
    Produto *ponteiro;
    int opcao=0;
    while (opcao !=5) {
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
            case 1:
                Produto produtotemp;
                produtos.push_back(produtotemp);
                ponteiro = &produtos[i];
                CadastrarProduto(ponteiro);
                i++;
                break;
            // case 2:
                
            // break;
            // case 3:

            //     break;
            // case 4:

            //     break;
            // case 5:

            //     return 0;
            // default:

            //     break;
        }  
    }   
}