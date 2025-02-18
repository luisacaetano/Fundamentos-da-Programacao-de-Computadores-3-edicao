/* Faça um programa que receba três números, calcule e mostre a multiplicação desses números. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, num3, multiplicacao; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    cout << "Insira o terceiro número: "; cin >> num3; 
    
    multiplicacao = num1 * num2 * num3; //multiplicacao
    cout << "\nO valor da multiplicação é: " << multiplicacao; 
    return 0;
}

