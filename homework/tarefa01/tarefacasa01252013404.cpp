#include <iostream>
using namespace std;
// Lucas Alan Costa Novais - 252013404
int main(){
    // Primeira etapa
    int n1, n2, n3, n4, n5; // variaveis dos numeros escolhidos

    cout << "Digite um numero inteiro de 0 a 25: ";
    cin >> n1; // assicia o numero digitado a variavel
    if (n1 < 0 || n1 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; 
    }

/*  Desta maneira da para reescrever sem precisar feixar o programa! Mas como foi pedido para feichar o programa se o numero for invalido, deixei comentado.
    if (n1 < 0 || n1 > 25) { // teste para ver so o numeto esta entre 0 e 25
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25: \n";
        cin >> n1;
    }
*/

    cout << "Digite outro numero inteiro de 0 a 25: ";
    cin >> n2;
    if (n2 < 0 || n2 > 25) {
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0;
    }
    
    cout << "Digite mais um numero inteiro de 0 a 25: ";
    cin >> n3; 
    if (n3 < 0 || n3 > 25) {
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0;
    }

    cout << "Digite o penultimo numero inteiro de 0 a 25: ";
    cin >> n4; 
    if (n4 < 0 || n4 > 25) {
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; 
    }

    cout << "Digite o ultimo numero inteiro de 0 a 25: ";
    cin >> n5; 
    if (n5 < 0 || n5 > 25) {
        cout << "Numero invalido. Por favor, digite um numero entre 0 e 25.\n";
        return 0; 
    }

    cout << "Os numeros digitados nao criptografados sao: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << "\n"; // mostra os numeros digitados

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
    if (cripto1 > 25){  // testa se o velor passou de 25, se sim subtrai 25 para voltar a 0
        cripto1 = cripto1 - 26;
    }
    cripto2 = (n2 + chave); // formula para criptografar
    if (cripto2 > 25){
        cripto2 = cripto2 - 26; // subtrai 26 para voltar a 0
    }
    cripto3 = (n3 + chave);
    if (cripto3 > 25){
        cripto3 = cripto3 - 26;
    }
    cripto4 = (n4 + chave);
    if (cripto4 > 25){
        cripto4 = cripto4 - 26;
    }
    cripto5 = (n5 + chave);
    if (cripto5 > 25){
        cripto5 = cripto5 - 26;
    }

    cout << "Os numeros criptografados sao: " << cripto1 << ", " << cripto2 << ", " << cripto3 << ", " << cripto4 << ", " << cripto5 << "\n";

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z; // variaveis para representar as letras
    a = 0;  b = 1;  c = 2;  d = 3;  e = 4;  f = 5;  g = 6;  h = 7;  i = 8;  j = 9; k = 10; l = 11; m = 12; n = 13; o = 14; p = 15; q = 16; r = 17; s = 18; t = 19; u = 20; v = 21; w = 22; x = 23; y = 24; z = 25;
    cout << "A mensagem Criptografada e: \n";

    // Abaixo uma serie de testes para ver qual letra corresponde ao numero criptografado
    if (cripto1 == a){ cout << "a "; }       
    if (cripto1 == b){ cout << "b "; }
    if (cripto1 == c){ cout << "c "; }
    if (cripto1 == d){ cout << "d "; }
    if (cripto1 == e){ cout << "e "; }
    if (cripto1 == f){ cout << "f "; }
    if (cripto1 == g){ cout << "g "; }
    if (cripto1 == h){ cout << "h "; }
    if (cripto1 == i){ cout << "i "; }
    if (cripto1 == j){ cout << "j "; }
    if (cripto1 == k){ cout << "k "; }
    if (cripto1 == l){ cout << "l "; }
    if (cripto1 == m){ cout << "m "; }
    if (cripto1 == n){ cout << "n "; }
    if (cripto1 == o){ cout << "o "; }
    if (cripto1 == p){ cout << "p "; }
    if (cripto1 == q){ cout << "q "; }
    if (cripto1 == r){ cout << "r "; }
    if (cripto1 == s){ cout << "s "; }
    if (cripto1 == t){ cout << "t "; }
    if (cripto1 == u){ cout << "u "; }
    if (cripto1 == v){ cout << "v "; }
    if (cripto1 == w){ cout << "w "; }
    if (cripto1 == x){ cout << "x "; }
    if (cripto1 == y){ cout << "y "; }
    if (cripto1 == z){ cout << "z "; }
    if (cripto2 == a){ cout << "a "; }
    if (cripto2 == b){ cout << "b "; }
    if (cripto2 == c){ cout << "c "; }
    if (cripto2 == d){ cout << "d "; }
    if (cripto2 == e){ cout << "e "; }
    if (cripto2 == f){ cout << "f "; }
    if (cripto2 == g){ cout << "g "; }
    if (cripto2 == h){ cout << "h "; }
    if (cripto2 == i){ cout << "i "; }
    if (cripto2 == j){ cout << "j "; }
    if (cripto2 == k){ cout << "k "; }
    if (cripto2 == l){ cout << "l "; }
    if (cripto2 == m){ cout << "m "; }
    if (cripto2 == n){ cout << "n "; }
    if (cripto2 == o){ cout << "o "; }
    if (cripto2 == p){ cout << "p "; }
    if (cripto2 == q){ cout << "q "; }
    if (cripto2 == r){ cout << "r "; }
    if (cripto2 == s){ cout << "s "; }
    if (cripto2 == t){ cout << "t "; }
    if (cripto2 == u){ cout << "u "; }
    if (cripto2 == v){ cout << "v "; }
    if (cripto2 == w){ cout << "w "; }
    if (cripto2 == x){ cout << "x "; }
    if (cripto2 == y){ cout << "y "; }
    if (cripto2 == z){ cout << "z "; }
    if (cripto3 == a){ cout << "a "; }
    if (cripto3 == b){ cout << "b "; }
    if (cripto3 == c){ cout << "c "; }
    if (cripto3 == d){ cout << "d "; }
    if (cripto3 == e){ cout << "e "; }
    if (cripto3 == f){ cout << "f "; }
    if (cripto3 == g){ cout << "g "; }
    if (cripto3 == h){ cout << "h "; }
    if (cripto3 == i){ cout << "i "; }
    if (cripto3 == j){ cout << "j "; }
    if (cripto3 == k){ cout << "k "; }
    if (cripto3 == l){ cout << "l "; }
    if (cripto3 == m){ cout << "m "; }
    if (cripto3 == n){ cout << "n "; }
    if (cripto3 == o){ cout << "o "; }
    if (cripto3 == p){ cout << "p "; }
    if (cripto3 == q){ cout << "q "; }
    if (cripto3 == r){ cout << "r "; }
    if (cripto3 == s){ cout << "s "; }
    if (cripto3 == t){ cout << "t "; }
    if (cripto3 == u){ cout << "u "; }
    if (cripto3 == v){ cout << "v "; }
    if (cripto3 == w){ cout << "w "; }
    if (cripto3 == x){ cout << "x "; }
    if (cripto3 == y){ cout << "y "; }
    if (cripto3 == z){ cout << "z "; }
    if (cripto4 == a){ cout << "a "; }
    if (cripto4 == b){ cout << "b "; }
    if (cripto4 == c){ cout << "c "; }
    if (cripto4 == d){ cout << "d "; }
    if (cripto4 == e){ cout << "e "; }
    if (cripto4 == f){ cout << "f "; }
    if (cripto4 == g){ cout << "g "; }
    if (cripto4 == h){ cout << "h "; }
    if (cripto4 == i){ cout << "i "; }
    if (cripto4 == j){ cout << "j "; }
    if (cripto4 == k){ cout << "k "; }
    if (cripto4 == l){ cout << "l "; }
    if (cripto4 == m){ cout << "m "; }
    if (cripto4 == n){ cout << "n "; }
    if (cripto4 == o){ cout << "o "; }
    if (cripto4 == p){ cout << "p "; }
    if (cripto4 == q){ cout << "q "; }
    if (cripto4 == r){ cout << "r "; }
    if (cripto4 == s){ cout << "s "; }
    if (cripto4 == t){ cout << "t "; }
    if (cripto4 == u){ cout << "u "; }
    if (cripto4 == v){ cout << "v "; }
    if (cripto4 == w){ cout << "w "; }
    if (cripto4 == x){ cout << "x "; }
    if (cripto4 == y){ cout << "y "; }
    if (cripto4 == z){ cout << "z "; }
    if (cripto5 == a){ cout << "a "; }
    if (cripto5 == b){ cout << "b "; }
    if (cripto5 == c){ cout << "c "; }
    if (cripto5 == d){ cout << "d "; }
    if (cripto5 == e){ cout << "e "; }
    if (cripto5 == f){ cout << "f "; }
    if (cripto5 == g){ cout << "g "; }
    if (cripto5 == h){ cout << "h "; }
    if (cripto5 == i){ cout << "i "; }
    if (cripto5 == j){ cout << "j "; }
    if (cripto5 == k){ cout << "k "; }
    if (cripto5 == l){ cout << "l "; }
    if (cripto5 == m){ cout << "m "; }
    if (cripto5 == n){ cout << "n "; }
    if (cripto5 == o){ cout << "o "; }
    if (cripto5 == p){ cout << "p "; }
    if (cripto5 == q){ cout << "q "; }
    if (cripto5 == r){ cout << "r "; }
    if (cripto5 == s){ cout << "s "; }
    if (cripto5 == t){ cout << "t "; }
    if (cripto5 == u){ cout << "u "; }
    if (cripto5 == v){ cout << "v "; }
    if (cripto5 == w){ cout << "w "; }
    if (cripto5 == x){ cout << "x "; }
    if (cripto5 == y){ cout << "y "; }
    if (cripto5 == z){ cout << "z "; }

    cout << "\n";
    cout << "Mensagem Descriptografada: \n";

    if (n1 == a){ cout << "a "; }       
    if (n1 == b){ cout << "b "; }
    if (n1 == c){ cout << "c "; }
    if (n1 == d){ cout << "d "; }
    if (n1 == e){ cout << "e "; }
    if (n1 == f){ cout << "f "; }
    if (n1 == g){ cout << "g "; }
    if (n1 == h){ cout << "h "; }
    if (n1 == i){ cout << "i "; }
    if (n1 == j){ cout << "j "; }
    if (n1 == k){ cout << "k "; }
    if (n1 == l){ cout << "l "; }
    if (n1 == m){ cout << "m "; }
    if (n1 == n){ cout << "n "; }
    if (n1 == o){ cout << "o "; }
    if (n1 == p){ cout << "p "; }
    if (n1 == q){ cout << "q "; }
    if (n1 == r){ cout << "r "; }
    if (n1 == s){ cout << "s "; }
    if (n1 == t){ cout << "t "; }
    if (n1 == u){ cout << "u "; }
    if (n1 == v){ cout << "v "; }
    if (n1 == w){ cout << "w "; }
    if (n1 == x){ cout << "x "; }
    if (n1 == y){ cout << "y "; }
    if (n1 == z){ cout << "z "; }
    if (n2 == a){ cout << "a "; }
    if (n2 == b){ cout << "b "; }
    if (n2 == c){ cout << "c "; }
    if (n2 == d){ cout << "d "; }
    if (n2 == e){ cout << "e "; }
    if (n2 == f){ cout << "f "; }
    if (n2 == g){ cout << "g "; }
    if (n2 == h){ cout << "h "; }
    if (n2 == i){ cout << "i "; }
    if (n2 == j){ cout << "j "; }
    if (n2 == k){ cout << "k "; }
    if (n2 == l){ cout << "l "; }
    if (n2 == m){ cout << "m "; }
    if (n2 == n){ cout << "n "; }
    if (n2 == o){ cout << "o "; }
    if (n2 == p){ cout << "p "; }
    if (n2 == q){ cout << "q "; }
    if (n2 == r){ cout << "r "; }
    if (n2 == s){ cout << "s "; }
    if (n2 == t){ cout << "t "; }
    if (n2 == u){ cout << "u "; }
    if (n2 == v){ cout << "v "; }
    if (n2 == w){ cout << "w "; }
    if (n2 == x){ cout << "x "; }
    if (n2 == y){ cout << "y "; }
    if (n2 == z){ cout << "z "; }
    if (n3 == a){ cout << "a "; }
    if (n3 == b){ cout << "b "; }
    if (n3 == c){ cout << "c "; }
    if (n3 == d){ cout << "d "; }
    if (n3 == e){ cout << "e "; }
    if (n3 == f){ cout << "f "; }
    if (n3 == g){ cout << "g "; }
    if (n3 == h){ cout << "h "; }
    if (n3 == i){ cout << "i "; }
    if (n3 == j){ cout << "j "; }
    if (n3 == k){ cout << "k "; }
    if (n3 == l){ cout << "l "; }
    if (n3 == m){ cout << "m "; }
    if (n3 == n){ cout << "n "; }
    if (n3 == o){ cout << "o "; }
    if (n3 == p){ cout << "p "; }
    if (n3 == q){ cout << "q "; }
    if (n3 == r){ cout << "r "; }
    if (n3 == s){ cout << "s "; }
    if (n3 == t){ cout << "t "; }
    if (n3 == u){ cout << "u "; }
    if (n3 == v){ cout << "v "; }
    if (n3 == w){ cout << "w "; }
    if (n3 == x){ cout << "x "; }
    if (n3 == y){ cout << "y "; }
    if (n3 == z){ cout << "z "; }
    if (n4 == a){ cout << "a "; }
    if (n4 == b){ cout << "b "; }
    if (n4 == c){ cout << "c "; }
    if (n4 == d){ cout << "d "; }
    if (n4 == e){ cout << "e "; }
    if (n4 == f){ cout << "f "; }
    if (n4 == g){ cout << "g "; }
    if (n4 == h){ cout << "h "; }
    if (n4 == i){ cout << "i "; }
    if (n4 == j){ cout << "j "; }
    if (n4 == k){ cout << "k "; }
    if (n4 == l){ cout << "l "; }
    if (n4 == m){ cout << "m "; }
    if (n4 == n){ cout << "n "; }
    if (n4 == o){ cout << "o "; }
    if (n4 == p){ cout << "p "; }
    if (n4 == q){ cout << "q "; }
    if (n4 == r){ cout << "r "; }
    if (n4 == s){ cout << "s "; }
    if (n4 == t){ cout << "t "; }
    if (n4 == u){ cout << "u "; }
    if (n4 == v){ cout << "v "; }
    if (n4 == w){ cout << "w "; }
    if (n4 == x){ cout << "x "; }
    if (n4 == y){ cout << "y "; }
    if (n4 == z){ cout << "z "; }
    if (n5 == a){ cout << "a "; }
    if (n5 == b){ cout << "b "; }
    if (n5 == c){ cout << "c "; }
    if (n5 == d){ cout << "d "; }
    if (n5 == e){ cout << "e "; }
    if (n5 == f){ cout << "f "; }
    if (n5 == g){ cout << "g "; }
    if (n5 == h){ cout << "h "; }
    if (n5 == i){ cout << "i "; }
    if (n5 == j){ cout << "j "; }
    if (n5 == k){ cout << "k "; }
    if (n5 == l){ cout << "l "; }
    if (n5 == m){ cout << "m "; }
    if (n5 == n){ cout << "n "; }
    if (n5 == o){ cout << "o "; }
    if (n5 == p){ cout << "p "; }
    if (n5 == q){ cout << "q "; }
    if (n5 == r){ cout << "r "; }
    if (n5 == s){ cout << "s "; }
    if (n5 == t){ cout << "t "; }
    if (n5 == u){ cout << "u "; }
    if (n5 == v){ cout << "v "; }
    if (n5 == w){ cout << "w "; }
    if (n5 == x){ cout << "x "; }
    if (n5 == y){ cout << "y "; }
    if (n5 == z){ cout << "z "; }
    return 0;
}
// Lucas Alan Costa Novais - 252013404