#include <iostream>
using namespace std;

int main(){
    // numeros triangulares, Eles são formados pela soma de números naturais consecutivos,
    // dada por Tₙ = n(n + 1) / 2
    cout << "digite um numero inteiro, para saber se e triangular: ";
    int num=0, soma;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        soma = soma + i;
        if (soma == num){
            cout << num << " e triangular!";
            return 0;
        }       
    }
    cout << num << " nao e triangular!";
    return 0;    
}