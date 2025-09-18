#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    // Calcular o fatorial
    cout << "Digite um numero inteiro para descobrir o fatorial: ";
    int n;
    cin >> n;
    long long int res=1;
    for (int z=n; z > 1; z--){
        res = res * z;
    };
    cout << "O Fatorial de " << n << " e igual a " << res;
    return 0;
}