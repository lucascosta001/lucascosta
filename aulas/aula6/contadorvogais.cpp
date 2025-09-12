#include <iostream>
#include <string>
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
        if (palavra[i]=='o')
        {
            cout << "saindo do loop\n";
            break;
        }
        if (palavra[i]=='i')
        {
            cout << "pulando a letra i\n";
            i++;
            continue;
        }
        i++;
    } while (i < palavra.length());
    
    cout << "Total de vogais na palavra: " << contavogais << "\n";
    return 0;
}
