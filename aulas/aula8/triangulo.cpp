#include <iostream>
using namespace std;

int main(){
    // numeros triangulares, Eles são formados pela soma de números naturais consecutivos,
    // dada por Tₙ = n(n + 1) / 2
    int num=0;
    cout << "digite um numero inteiro, para saber se e triangular: ";
    cin >> num;
    int tria;
    tria=1;
    for (int i = 1; i < num; i++)
    {
        cout << i << "\n";
        cout << tria;
        if (tria==num){
            cout << "funcionou";
        }
        tria = tria+(tria+1);
    }
    return 0;    
}

// n_posicão e n+(n-1) =

// n = n+(n+1)
// se n = ao input do usuario entao e um numero triangular, caso contrario nao es