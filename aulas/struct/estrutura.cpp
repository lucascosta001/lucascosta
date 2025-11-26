#include <iostream>
#include <vector>

using namespace std;

struct Pessoa // primeira letra maiúscula para facilitar o entendimento de que é uma struct
{
    string nome;
    string cpf;
    int telefone;
};

void Preenche (Pessoa *p)
{
    cout << "Digite o Nome da Pessoa: \n";
    string nada="";
    getline(cin,nada);
    getline(cin,p->nome);
    cout << "Digite o CPF da Pessoa: \n";
    getline(cin,p->cpf);
    cout << "Digite o telefone da Pessoa: \n";
    cin >> p->telefone;
}

void Mostra (Pessoa *p, int quant){
    system("cls");
    cout << "***** Pessoas Cadastradas *****\n";
    for(int i=0; i<quant; i++){
        cout << "Nome: " << p[i].nome << "\n";
        cout << "CPF: " << p[i].cpf << "\n";
        cout << "Telefone: " << p[i].telefone << "\n";
        cout << "***************************************************\n";
        p++;
    }
    system("pause");
}

int main()
{
    vector<Pessoa> pessoas;
    Pessoa *ponteiro;
    int j=0;
    int opt=0;
    while (opt !=3)
    {
        system("cls");
        cout << "***** Menu *****\n";
        cout << "1 - Cadastrar Pessoa\n";
        cout << "2 - Mostrar Pessoas Cadastradas\n";
        cout << "3 - Sair\n";
        cin >> opt;
        if (opt==1)
        {
            Pessoa pessoatemp;
            pessoas.push_back(pessoatemp);
            ponteiro = &pessoas[j];
            Preenche(ponteiro);
            j++;
        }
        if (opt==2)
        {
            ponteiro = &pessoas[0];
            Mostra(ponteiro, j);
        }
    }
}