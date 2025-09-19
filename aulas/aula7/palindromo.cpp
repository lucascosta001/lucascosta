#include <iostream>
using namespace std;

int main(){
    cout << "Digite uma palavra: ";
    string word;
    cin >> word;
    string concatena="";
    for(int c=word.length()-1; c>=0; c--) {
        concatena=concatena+word[c];
    }
    if (palavra == concatena){
        cout << "A palavra " << word << " e um palindromo!";
    } else {
        cout << "A palavra " << word << " nao e um palindromo!";
    }
    return 0;
}