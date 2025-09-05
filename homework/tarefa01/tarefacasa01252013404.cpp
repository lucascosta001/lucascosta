#include <iostream>
using namespace std;
// Lucas Alan Costa Novais - 252013404
int main(){
/*
    a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
*/

    int n1, n2, n3, n4, n5; // variaveis dos numeros escolhidos

// Primeira etapa

    cout << "Digite um numero inteiro de 0 a 25: ";
    cin >> n1; // assicia o numero digitado a variavel

/*  Desta maneira da para reescrever sem precisar feixar o programa! Mas como foi pedido para feichar o programa se o numero for invalido, deixei comentado.

    if (n1 < 0 || n1 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n1;
    }
*/
    if (n1 < 0 || n1 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; // fecha o programa
    }

    cout << "Digite outro numero inteiro de 0 a 25: ";
    cin >> n2; // assicia o numero digitado a variavel
    
    if (n2 < 0 || n2 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; // fecha o programa
    }

    cout << "Digite mais um numero inteiro de 0 a 25: ";
    cin >> n3; // assicia o numero digitado a variavel
    
    if (n3 < 0 || n3 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; // fecha o programa
    }

    cout << "Digite o penultimo numero inteiro de 0 a 25: ";
    cin >> n4; // assicia o numero digitado a variavel
    
    if (n4 < 0 || n4 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; // fecha o programa
    }

    cout << "Digite o ultimo numero inteiro de 0 a 25: ";
    cin >> n5; // assicia o numero digitado a variavel
    
    if (n5 < 0 || n5 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; // fecha o programa
    }

    cout << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << "\n\n";
    
// Segunda etapa

    int chave; // variavel para a criptografia
    cout << "Digite um valor inteiro de 1 a 7: \n";
    cin >> chave;
    
    if (chave < 1 || chave > 7) {
        cout << "Valor invalido. Por favor, digite um valor entre 1 e 7.\n";
        return 0;
    }
    
// Terceira etapa

    int cripto1, cripto2, cripto3, cripto4, cripto5; // variaveis dos numeros criptografados
    cripto1 = (n1 + chave); // formula para criptografar
    // ou seja se o valor n1 for 3 e a chave 6, entao vai a 9, 3 e c, 9 e i
    if (cripto1 > 25){
        cripto1 = cripto1 - 25;
    }
    cripto2 = (n2 + chave); // formula para criptografar
    if (cripto2 >= 25){
        cripto2 = cripto2 - 25;
    }
    cripto3 = (n3 + chave); // formula para criptografar
    if (cripto3 >= 25){
        cripto3 = cripto3 - 25;
    }
    cripto4 = (n4 + chave); // formula para criptografar
    if (cripto4 >= 25){
        cripto4 = cripto4 - 25;
    }
    cripto5 = (n5 + chave); // formula para criptografar
    if (cripto5 >= 25){
        cripto5 = cripto5 - 25;
    }
    

    cout << cripto1 << ", " << cripto2 << ", " << cripto3 << ", " << cripto4 << ", " << cripto5 << "\n";
    return 0;
}