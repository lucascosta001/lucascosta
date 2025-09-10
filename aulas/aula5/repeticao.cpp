#include <iostream>
using namespace std;

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    int contador = 0, i=0, j=0;   
    i=palavra.length();
    cout << "A palavra digitada foi: " << palavra << "\n";
    for (int e = 0; e < i; e++) {
        palavra[e] = tolower(palavra[e]);
    }

    while (j < i)
    {
        if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u')
        {
            cout << "A letra cujo a posicao " << j << " e: ";
            cout << palavra[j] << "; e e uma vogal.\n";
            contador++;
        }
        j++;
    }
    cout << "Total de vogais: " << contador << "\n";
    return 0;
}