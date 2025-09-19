#include <iostream>
// #include <cctype>
#include <string>
using namespace std;

int main(){
    cout << "Digite uma frase para testar se e um palindromo: ";
    string frase;
    getline(cin, frase);
    string concatena="";
    string tirabranco="";
    for(int i=0; i < frase.length(); i++) {
        if (frase[i] != ' '){
            tirabranco=tirabranco+(char)tolower(frase[i]);
        }
    }
    for (int i=tirabranco.length()-1; i>=0; i--) {
        concatena=concatena+tirabranco[i];
    }
    if (tirabranco == concatena){
        cout << frase << " e um palindromo!";
    } else {
        cout << frase << " nao e um palindromo!";
    }
    return 0;
}