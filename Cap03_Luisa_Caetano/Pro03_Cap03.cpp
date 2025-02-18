/*
 Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo 
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar 
com validações. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, divisao; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    
    divisao = num1 / num2; 
    cout << "\nO valor da divisão é: " << divisao; 
    return 0;
}

