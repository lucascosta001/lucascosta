#include <iostream>
using namespace std;

int main(){
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    int contador = 0;
    if (palavra.length() != 5){
        cout << "A palavra deve ter exatamente 5 letras.\n";
        return 1;
    }
    cout << "A palavra digitada foi: " << palavra << "\n";
    palavra[0] = tolower(palavra[0]);
    palavra[1] = tolower(palavra[1]);
    palavra[2] = tolower(palavra[2]);
    palavra[3] = tolower(palavra[3]);
    palavra[4] = tolower(palavra[4]);

    // palavra=palavra.lower(); // Converte a palavra para minúsculas
    // palavra=palavra.upper(); // Converte a palavra para maiúsculas
 
    if (palavra[0] == 'a' || palavra[0] == 'e' || palavra[0] == 'i' || palavra[0] == 'o' || palavra[0] == 'u'){
        cout << "A palavra digitada comeca com uma vogal.\n";
        contador++;
        cout << palavra[0] << " e uma vogal.\n";

    }
    if (palavra[1] == 'a' || palavra[1] == 'e' || palavra[1] == 'i' || palavra[1] == 'o' || palavra[1] == 'u'){
        contador++;
        cout << palavra[1] << " e uma vogal.\n";

    }
    if (palavra[2] == 'a' || palavra[2] == 'e' || palavra[2] == 'i' || palavra[2] == 'o' || palavra[2] == 'u'){
        contador++;
        cout << palavra[2] << " e uma vogal.\n";

    }
    if (palavra[3] == 'a' || palavra[3] == 'e' || palavra[3] == 'i' || palavra[3] == 'o' || palavra[3] == 'u'){
        contador++;
        cout << palavra[3] << " e uma vogal.\n";

    }
    if (palavra[4] == 'a' || palavra[4] == 'e' || palavra[4] == 'i' || palavra[4] == 'o' || palavra[4] == 'u'){
        contador++;
        cout << palavra[4] << " e uma vogal.\n";

    }
    cout << "Total de vogais: " << contador << "\n";
    return 0;
}