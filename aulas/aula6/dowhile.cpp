#include <iostream>
using namespace std;

int main()
{
    string palavra;
    getline(cin, palavra);
    int i = 0;
    int contavogais = 0;
    do
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            contavogais++;
            cout << "A letra na posicao " << i << " e: " << palavra[i] << " e uma vogal.\n";
        }
        i++;
    } while (i < palavra.length());
    cout << "Total de vogais na palavra: " << contavogais << "\n";
    return 0;
}
