/*
 Faça um programa para resolver equações do 2o grau.

ax2 + bx + c = 0
A variável a deve ser diferente de zero.
∆ = b2 -4 * a * c
∆ < 0 → não existe raiz real
∆ = 0 → existe uma raiz real
x = (-b) / (2 * a)
∆ > 0 → existem duas raízes reais
x1 = (-b + ∆)/ (2 * a)
x2 = (-b - ∆)/ (2 * a)
 */
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

int main(int argc, char** argv) {
    int a, b, c, delta, x1, x2; 
    
    cout << "Insira o número correspondente à letra A: "; cin >> a; 
    cout << "Insira o número correspondente à letra B: "; cin >> b;
    cout << "Insira o número correspondente à letra C: "; cin >> c; 
    
    //calculo da função de segundo grau
    if (a == 0) {
        cout << "\nEsses valores não correspondem a uma equação do segundo grau!";
    } else {
        delta = (b * b) - 4 * a * c;
        if (delta < 0) {
            cout << "\nNão existe raiz real!";
        } else if (delta == 0) {
            cout << "\nExiste uma raiz real!";
            x1 = (-b) / (2 * a); 
            cout << "\nX = " << x1; 
        } else {
            cout << "\nExistem duas raízes reais!";
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a); 
            cout << "\nX1 = " << x1 << " e X2 = " << x2; 
        }
    }
    return 0;
}

