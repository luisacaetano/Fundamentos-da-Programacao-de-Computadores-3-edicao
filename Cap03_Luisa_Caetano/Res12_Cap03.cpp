// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, resultado;

    cout << "Insira um número positivo e maior que zero: "; cin >> num1;
    cout << "Insira outro número positivo e maior que zero: "; cin >> num2; 
    
    resultado = pow(num1, num2);  //calculo para exponencial, num1 o número que esta sendo calculado e o num2 a base
    cout << "\nResultado do número 1 elevado ao número 2: " << resultado; 
    
    return 0;
}