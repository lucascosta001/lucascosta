#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
    vector<string> frase;
    vector<string>::iterator ponteiro;
    while (true) {
        system("cls");
        cout << "********************MENU********************" << endl;
        cout << "1- Criar novo arquivo de texto e digitar texto" << endl;
        cout << "2- Procurar por uma palavra em um arquivo de texto" << endl;
        cout << "3- Mudar uma palavra por outra em um arquivo de texto" << endl;
        cout << "4- Sair" << endl;
        cout << "********************************************" << endl;
        int opcao;
        cin >> opcao;
        cin.ignore(); // Limpar o buffer do teclado
        string caminho;
        string linha="";
        switch (opcao) {
            case 1: {
                cout << "Digite o caminho e nome do arquivo para guardar o seu texto Ex: \\claudia\\CPE\\exemplo.txt" << endl;
                getline(cin,caminho);
                ofstream meuarquivo(caminho.c_str());
                system("cls");
                cout << "Bem vindo ao editor de textos simples chamado CPE!\n";
                cout << "****************************************************";
                cout << "\nDigite seu texto linha por linha e tecle <ENTER> no final de cada linha" << endl;
                cout << "Para finalizar o texto, digite uma linha com apenas a palavra FIM\n";
                while (linha!="FIM") {
                getline (cin,linha);
                if (linha!="FIM")
                    meuarquivo << linha << endl;
                }
                meuarquivo.close();
                break;
            }
            case 2: {
                cout << "Digite o caminho e nome do arquivo para procurar a palavra Ex: \\claudia\\CPE\\exemplo.txt" << endl;
                string caminho1;
                getline(cin,caminho1);
                ifstream meuarquivo1(caminho1.c_str());
                string lelinha;
                if (meuarquivo1.is_open()) {
                    frase.clear();
                    while (!meuarquivo1.eof()) {
                        getline (meuarquivo1,lelinha); 
                        frase.push_back(lelinha);
                    }
                    meuarquivo1.close();
                } else{
                    cout << "Nao foi possivel abrir o aquivo !" << endl;
                    system("pause");
                    break;
                }
                // procurar palavra
                string str1;
                string str2;
                cout << "Porfavor digite a palavra a ser procurada nesta frase\n";
                getline (cin,str2);
                size_t found;
                int vezes = 0;
                for (ponteiro=frase.begin();ponteiro!=frase.end();ponteiro++) {
                    str1=*ponteiro;
                    found = str1.find(str2);
                    if (found != std::string::npos) {
                        while (found!=std::string::npos) {
                            vezes ++;
                            cout << vezes << "o vez palavra " << str2 << " encontrada na posicao 4: " << found << '\n'; 
                            found=str1.find(str2,found+1);
                        }
                    } 
                }
                if (vezes == 0) {
                    cout << "Palavra nao encontrada no arquivo\n";
                    system("pause");
                    break; 
                }
                    
            }
            case 3: {
                // muda palavra
                cout << "Digite o caminho e nome do arquivo para procurar a palavra Ex: \\claudia\\CPE\\exemplo.txt" << endl;
                string caminho1;
                getline(cin,caminho1);
                ifstream meuarquivo1(caminho1.c_str());
                if (meuarquivo1.is_open()) {
                    frase.clear();
                    string lelinha;
                    while (!meuarquivo1.eof()) {
                        getline (meuarquivo1,lelinha); 
                        frase.push_back(lelinha);
                }
                meuarquivo1.close();
                cout << "Digite uma palavra a ser mudar no arquivo\n";
                string str3;
                getline (cin,str3);
                cout << "Digite para que palavra voce deseja mudar\n";
                string str4;
                getline (cin,str4); 
                size_t found;
                int vezes = 0;
                string str5;
                for (ponteiro=frase.begin();ponteiro!=frase.end();ponteiro++) {
                    str5=*ponteiro;
                    found = str5.find(str3);
                    if (found != std::string::npos) {
                        while (found!=std::string::npos) {
                            vezes ++;
                            ponteiro -> replace(found,str3.length(),str4);
                            cout << vezes << "o vez palavra " << str3 << " foi mudada! " << '\n'; 
                            found=str5.find(str3,found+1);
                        }
                    } 
                }
                if (vezes == 0) {
                    cout << "Palavra nao encontrada no arquivo\n";
                } else {
                    // grava arquivo a alteracao
                    ofstream meuarquivo2(caminho1.c_str());
                    if (meuarquivo2.is_open()){
                        for (ponteiro=frase.begin();ponteiro!=frase.end();ponteiro++) {
                            meuarquivo2 << *ponteiro << endl;
                        }
                        meuarquivo2.close();
                    } else {
                        cout << "Nao foi possivel abrir o arquivo para gravar as mudancas!\n";
                    }
                }
                } else {
                    cout << "Arquivo nao encontrado!\n";
                    system("pause");
                }
                system("pause");
                break;
            }
            case 4:
                cout << "Saindo do programa..." << endl;
                return 0;
            default:
                cout << "Opção invalida! Tente novamente." << endl;
                continue;
            } //switch
    } // while (true)
} // main
