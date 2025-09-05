// Primeiro projeto em C++, na unb
#include <iostream>
#include <cstdlib> // Para usar system()
using namespace std; // Evita o uso do "std::" antes do cout
int main()
{
    /*std:: */cout << "Hello, World!\n";
    /*std:: */cout << "Primeiro projeto em C++!\n";
    system("pause"); // Pausa o terminal no Windows
    system("cls"); // Limpa o terminal no Windows
    system("color 0A"); // Muda a cor do texto para verde e o fundo para preto
    cout << "Listando os arquivos do diretório atual com dir:\n";
    system("dir");
    return 0;
}