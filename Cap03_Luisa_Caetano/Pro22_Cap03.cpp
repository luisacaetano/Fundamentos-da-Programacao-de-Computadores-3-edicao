/*
Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número 
de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do 
polígono.
 */


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int lados, calculo; 
    
    cout << "Insira o número de lados de um polígono convexo: "; cin >> lados; 
    
    calculo = lados * (lados - 3) / 2; // calculo de diagonais do poligono
    cout << "\nO números de diagonais que esse polígono tem são: " << calculo; 
    return 0;
}

