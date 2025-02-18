/*
Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo. 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float num1, num2, subtracao;
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    
    subtracao = num1 - num2; //subtracao
    cout << "\nO resultado da subtração é: " << subtracao; 
    return 0;
}

