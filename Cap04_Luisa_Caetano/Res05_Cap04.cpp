/*
Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, 
em seguida, os quatro números em ordem decrescente. Suponha 
que o usuário digitará quatro números diferentes.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, num3, num4; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número (de modo que seja maior que o primeiro): "; cin >> num2; 
    cout << "Insira o terceiro número (de modo que seja maior que o segundo): "; cin >> num3; 
    cout << "Insira o quarto número (aleatório): "; cin >> num4; 
    
    //calculo para saber qual é a posicao do numero4 
    if (num4 >= num3) {
        cout << "\nOs números em ordem decrescente são: " << num4 << ", " << num3 << ", " << num2 << ", " << num1; 
    } else if (num4 >= num2 && num4 <= num3) {
        cout << "\nOs números em ordem decrescente são: " << num3 << ", " << num4 << ", " << num2 << ", " << num1; 
    } else if (num4 >= num1 && num4 <= num2) {
        cout << "\nOs números em ordem decrescente são: " << num3 << ", " << num2 << ", " << num4 << ", " << num1; 
    } else {
        cout << "\nOs números em ordem decrescente são: " << num3 << ", " << num2 << ", " << num1 << ", " << num4; 
    }
    
    return 0;
}

