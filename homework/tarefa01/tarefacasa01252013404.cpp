#include <iostream>
using namespace std;

int main(){
/*
    a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

*/
    int n1, n2, n3, n4, n5;
    cout << "Digite um número inteiro: ";
    cin >> n1;
    cout << "Digite outro número inteiro: ";
    cin >> n2;
    cout << "Digite mais um número inteiro: ";
    cin >> n3;
    cout << "Digite o penúltimo número inteiro: ";
    cin >> n4;
    cout << "Digite o último número inteiro: ";
    cin >> n5;
    cout << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << "\n";
    return 0;
}