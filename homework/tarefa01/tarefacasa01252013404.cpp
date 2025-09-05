#include <iostream>
using namespace std;

int main(){
/*
    a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

*/
    int n1, n2, n3, n4, n5; // variaveis dos numeros escolhidos

    cout << "Digite um numero inteiro de 0 a 25: ";
    cin >> n1; // assicia o numero digitado a variavel

    if (n1 < 0 || n1 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n1;
    }

    cout << "Digite outro numero inteiro de 0 a 25: ";
    cin >> n2; // assicia o numero digitado a variavel
    
    if (n2 < 0 || n2 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n2;
    }

    cout << "Digite mais um numero inteiro de 0 a 25: ";
    cin >> n3; // assicia o numero digitado a variavel
    
    if (n3 < 0 || n3 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n3;
    }

    cout << "Digite o penultimo numero inteiro de 0 a 25: ";
    cin >> n4; // assicia o numero digitado a variavel
    
    if (n4 < 0 || n4 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n4;
    }

    cout << "Digite o ultimo numero inteiro de 0 a 25: ";
    cin >> n5; // assicia o numero digitado a variavel
    
    if (n5 < 0 || n5 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n5;
    }

    cout << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << "\n";
    return 0;
}