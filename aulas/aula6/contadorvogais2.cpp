#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra;
    getline(cin, palavra);
    int i = 0;
    int contavogais = 0;
    
    for (int i=0; i < palavra.length(); i++) {
        palavra[i] = tolower(palavra[i]);
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
            continue;
        }
    }
    
    cout << "Total de vogais na palavra: " << contavogais << "\n";
    return 0;
}
