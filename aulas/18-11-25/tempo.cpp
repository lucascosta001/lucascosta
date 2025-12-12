#include <iostream>
#include <time.h>
#include "C:\Users\lucas\Documentos\estudos\unb\c++\lucascosta\minhabiblioteca\biblioteca.h"
using namespace std;

int main() {
    clock_t startTime = clock();
    arvore(10);
    cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC << " segundos" << endl;
    return 0;
}