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

/*  Desta maneira da para reescrever sem precisar fechar o programa! Mas como foi pedido para fechar o programa se o numero for invalido, deixei comentado.
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

    cout << "Os numeros digitadossao: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << "\n"; // mostra os numeros digitados

// Segunda etapa

    int chave; // variavel para a criptografia
    cout << "Digite um valor inteiro de 1 a 7: \n";
    cin >> chave;
    if (chave < 1 || chave > 7) { // teste para ver se o numero esta entre 1 e 7
        cout << "Valor invalido. Por favor, digite um valor entre 1 e 7.\n";
        return 0;
    }
    
// Terceira etapa Aplicando ajustes

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
    
    int descripto1, descripto2, descripto3, descripto4, descripto5; // variaveis dos numeros descriptografados
    descripto1 = (cripto1 - chave);
    if (descripto1 < 0){
        descripto1 = descripto1 + 26;
    }
    descripto2 = (cripto2 - chave);
    if (descripto2 < 0){
        descripto2 = descripto2 + 26;
    }
    descripto3 = (cripto3 - chave);
    if (descripto3 < 0){
        descripto3 = descripto3 + 26;
    }
    descripto4 = (cripto4 - chave);
    if (descripto4 < 0){
        descripto4 = descripto4 + 26;
    }
    descripto5 = (cripto5 - chave);
    if (descripto5 < 0){
        descripto5 = descripto5 + 26;
    }

    cout << "Os numeros criptografados sao: " << cripto1 << ", " << cripto2 << ", " << cripto3 << ", " << cripto4 << ", " << cripto5 << "\n";

    // Aplicando a cerifa de cesar - mostrando as letras correspondentes aos numeros

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

    // Descriptografando a mensagem
    cout << "\n";
    cout << "Mensagem Descriptografada: \n";

    if (descripto1 == a){ cout << "a "; }       
    if (descripto1 == b){ cout << "b "; }
    if (descripto1 == c){ cout << "c "; }
    if (descripto1 == d){ cout << "d "; }
    if (descripto1 == e){ cout << "e "; }
    if (descripto1 == f){ cout << "f "; }
    if (descripto1 == g){ cout << "g "; }
    if (descripto1 == h){ cout << "h "; }
    if (descripto1 == i){ cout << "i "; }
    if (descripto1 == j){ cout << "j "; }
    if (descripto1 == k){ cout << "k "; }
    if (descripto1 == l){ cout << "l "; }
    if (descripto1 == m){ cout << "m "; }
    if (descripto1 == n){ cout << "n "; }
    if (descripto1 == o){ cout << "o "; }
    if (descripto1 == p){ cout << "p "; }
    if (descripto1 == q){ cout << "q "; }
    if (descripto1 == r){ cout << "r "; }
    if (descripto1 == s){ cout << "s "; }
    if (descripto1 == t){ cout << "t "; }
    if (descripto1 == u){ cout << "u "; }
    if (descripto1 == v){ cout << "v "; }
    if (descripto1 == w){ cout << "w "; }
    if (descripto1 == x){ cout << "x "; }
    if (descripto1 == y){ cout << "y "; }
    if (descripto1 == z){ cout << "z "; }

    if (descripto2 == a){ cout << "a "; }
    if (descripto2 == b){ cout << "b "; }
    if (descripto2 == c){ cout << "c "; }
    if (descripto2 == d){ cout << "d "; }
    if (descripto2 == e){ cout << "e "; }
    if (descripto2 == f){ cout << "f "; }
    if (descripto2 == g){ cout << "g "; }
    if (descripto2 == h){ cout << "h "; }
    if (descripto2 == i){ cout << "i "; }
    if (descripto2 == j){ cout << "j "; }
    if (descripto2 == k){ cout << "k "; }
    if (descripto2 == l){ cout << "l "; }
    if (descripto2 == m){ cout << "m "; }
    if (descripto2 == n){ cout << "n "; }
    if (descripto2 == o){ cout << "o "; }
    if (descripto2 == p){ cout << "p "; }
    if (descripto2 == q){ cout << "q "; }
    if (descripto2 == r){ cout << "r "; }
    if (descripto2 == s){ cout << "s "; }
    if (descripto2 == t){ cout << "t "; }
    if (descripto2 == u){ cout << "u "; }
    if (descripto2 == v){ cout << "v "; }
    if (descripto2 == w){ cout << "w "; }
    if (descripto2 == x){ cout << "x "; }
    if (descripto2 == y){ cout << "y "; }
    if (descripto2 == z){ cout << "z "; }

    if (descripto3 == a){ cout << "a "; }
    if (descripto3 == b){ cout << "b "; }
    if (descripto3 == c){ cout << "c "; }
    if (descripto3 == d){ cout << "d "; }
    if (descripto3 == e){ cout << "e "; }
    if (descripto3 == f){ cout << "f "; }
    if (descripto3 == g){ cout << "g "; }
    if (descripto3 == h){ cout << "h "; }
    if (descripto3 == i){ cout << "i "; }
    if (descripto3 == j){ cout << "j "; }
    if (descripto3 == k){ cout << "k "; }
    if (descripto3 == l){ cout << "l "; }
    if (descripto3 == m){ cout << "m "; }
    if (descripto3 == n){ cout << "n "; }
    if (descripto3 == o){ cout << "o "; }
    if (descripto3 == p){ cout << "p "; }
    if (descripto3 == q){ cout << "q "; }
    if (descripto3 == r){ cout << "r "; }
    if (descripto3 == s){ cout << "s "; }
    if (descripto3 == t){ cout << "t "; }
    if (descripto3 == u){ cout << "u "; }
    if (descripto3 == v){ cout << "v "; }
    if (descripto3 == w){ cout << "w "; }
    if (descripto3 == x){ cout << "x "; }
    if (descripto3 == y){ cout << "y "; }
    if (descripto3 == z){ cout << "z "; }

    if (descripto4 == a){ cout << "a "; }
    if (descripto4 == b){ cout << "b "; }
    if (descripto4 == c){ cout << "c "; }
    if (descripto4 == d){ cout << "d "; }
    if (descripto4 == e){ cout << "e "; }
    if (descripto4 == f){ cout << "f "; }
    if (descripto4 == g){ cout << "g "; }
    if (descripto4 == h){ cout << "h "; }
    if (descripto4 == i){ cout << "i "; }
    if (descripto4 == j){ cout << "j "; }
    if (descripto4 == k){ cout << "k "; }
    if (descripto4 == l){ cout << "l "; }
    if (descripto4 == m){ cout << "m "; }
    if (descripto4 == n){ cout << "n "; }
    if (descripto4 == o){ cout << "o "; }
    if (descripto4 == p){ cout << "p "; }
    if (descripto4 == q){ cout << "q "; }
    if (descripto4 == r){ cout << "r "; }
    if (descripto4 == s){ cout << "s "; }
    if (descripto4 == t){ cout << "t "; }
    if (descripto4 == u){ cout << "u "; }
    if (descripto4 == v){ cout << "v "; }
    if (descripto4 == w){ cout << "w "; }
    if (descripto4 == x){ cout << "x "; }
    if (descripto4 == y){ cout << "y "; }
    if (descripto4 == z){ cout << "z "; }

    if (descripto5 == a){ cout << "a "; }
    if (descripto5 == b){ cout << "b "; }
    if (descripto5 == c){ cout << "c "; }
    if (descripto5 == d){ cout << "d "; }
    if (descripto5 == e){ cout << "e "; }
    if (descripto5 == f){ cout << "f "; }
    if (descripto5 == g){ cout << "g "; }
    if (descripto5 == h){ cout << "h "; }
    if (descripto5 == i){ cout << "i "; }
    if (descripto5 == j){ cout << "j "; }
    if (descripto5 == k){ cout << "k "; }
    if (descripto5 == l){ cout << "l "; }
    if (descripto5 == m){ cout << "m "; }
    if (descripto5 == n){ cout << "n "; }
    if (descripto5 == o){ cout << "o "; }
    if (descripto5 == p){ cout << "p "; }
    if (descripto5 == q){ cout << "q "; }
    if (descripto5 == r){ cout << "r "; }
    if (descripto5 == s){ cout << "s "; }
    if (descripto5 == t){ cout << "t "; }
    if (descripto5 == u){ cout << "u "; }
    if (descripto5 == v){ cout << "v "; }
    if (descripto5 == w){ cout << "w "; }
    if (descripto5 == x){ cout << "x "; }
    if (descripto5 == y){ cout << "y "; }
    if (descripto5 == z){ cout << "z "; }
    return 0;
}
// Lucas Alan Costa Novais - 252013404