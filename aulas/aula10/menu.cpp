#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i = 0;
    unsigned int codigo[1000];
    string nome[1000];
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
            case 1:
                //logica de cadastrar produto
                system("cls");
                cout << "Cadastrar produto" << endl;
                cout << "------------------" << endl;
                cout << "Codigo do produto: ";
                cin >> codigo[i];
                cout << "Nome do produto: ";
                cin >> nome[i];
                i++;
                cout << "Produto cadastrado com sucesso!" << endl;
                system("pause");
                break;
            case 2:
                cout << "Procurar produto" << endl;
                system("pause");
                //logica de procurar produto
                break;
            case 3:
                cout << "Apagar produto" << endl;
                system("pause");
                //logica de apagar produto
                break;
            case 4:
                cout << "Listar produtos" << endl;
                for (int k=0; k<i; k++) {
                    cout << "Codigo: " << codigo[k] << " - Nome: " << nome[k] << endl;
                }
                system("pause");
                break;
            case 5:
                cout << "Sair" << endl;
                return 0;
            default:
                cout << "Opção inválida" << endl;
                system("pause");
                break;
        }  
    }   
}