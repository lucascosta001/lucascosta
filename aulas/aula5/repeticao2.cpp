#include <iostream>
using namespace std;

int main() {
    string frase; // Pode ser alterado para frase
    cout << "Digite uma frase: ";
    getline(cin,frase); // Usar getline para ler frases com espaços

    int contador = 0, i=0, j=0;   
    i=frase.length(); // length da frase
    cout << "A frase digitada foi: " << frase << "\n";

    /* for (int e = 0; e < i; e++) { // Converter para minúsculas
        frase[e] = tolower(frase[e]);
    } */
    
    while (j < i) // Percorrer a frase
    {
        frase[j] = tolower(frase[j]);
        if (frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') // Verificar vogais
        {
            cout << "A letra cujo a posicao " << j << " e: ";
            cout << frase[j] << "; e e uma vogal.\n";
            contador++;
        }
        j++;
    }
    cout << "Total de vogais na frase: " << contador << "\n";
    return 0;
}