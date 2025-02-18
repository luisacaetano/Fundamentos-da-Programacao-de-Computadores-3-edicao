/*
Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, num3; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    cout << "Insira o terceiro número: "; cin >> num3; 
    
    //calculo para descobrir a ordem crescente dos tres numeros 
    if (num1 <= num2 && num1 <= num3 && num2 <= num3){
        cout << "\nOs números em ordem crescente é: " << num1 << ", " << num2 << ", " << num3; 
    } else if (num1 <= num3 && num1 <= num2 && num3 <= num2) {
        cout << "\nOs números em ordem crescente é: " << num1 << ", " << num3 << ", " << num2; 
    } else if (num2 <= num1 && num2 <= num3 && num1 <= num3) {
        cout << "\nOs números em ordem crescente é: " << num2 << ", " << num1 << ", " << num3; 
    } else if (num2 <= num3 && num2 <= num1 && num3 <= num1) {
        cout << "\nOs números em ordem crescente é: " << num2 << ", " << num3 << ", " << num1; 
    } else if (num3 <= num2 && num3 <= num1 && num2 <= num1) {
        cout << "\nOs números em ordem crescente é: " << num3 << ", " << num2 << ", " << num1; 
    } else {
        cout << "\nOs números em ordem crescente é: " << num3 << ", " << num1 << ", " << num2; 
    }
    return 0;
}

