/*
 Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2. 
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float diagonalmaior, diagonalmenor, calculo; 
    
    cout << "Insira o valor da diagonal maior do losango: "; cin >> diagonalmaior; 
    cout << "Insira o valor da diagonal menor do losango: "; cin >> diagonalmenor; 
    
    calculo = (diagonalmaior * diagonalmenor) / 2; //calculo da area do losango
    cout << "\nO valor da área desse losango é: " << calculo; 
    return 0;
}

