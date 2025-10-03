#include <iostream>
using namespace std;

int main(){
    const int g = 3;
    char velha[g][g]; // matriz para a base do jogo da velha
    // inputs
    // for (int i = 0; i < g; i++){
    //     // linha
    //     for (int c = 0; c < g; c++){
            
    //     }
        
    // }
    

    for (int i = 0; i <= g; i++){
        for (int c = 0; c < g; c++)
        {
            cout << velha[i][c];
        }
        cout << "\n";
    }
    

    // cout << A1 << "|" << A2 << "|" << A3 << "/n" << B1 << "|" << B2 << "|" << B3 << "/n" << C1 << "|" << C2 << "|" << C3 << "/n";
}