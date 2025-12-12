
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <iostream>
#include <vector>
using namespace std;

struct Produto{
    unsigned int codigo;
    string nome;
};


float hipotenusa(float, float);
void arvore(int);
bool megasena1(int, int, int, int, int, int, int, int, int, int);
bool comparaNumero(int n1, int n2);
void CadastrarProduto(Produto *produtos);
int fatorial(int);
unsigned long long fibonacci(int n);
double euler(int x, int termos);
void BoasVindas(string);

#endif // BIBLIOTECA_H