/*
 Faça um programa que receba dois números e mostre o maior.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    
    //verificar qual o número é maior ou se são iguais 
    if (num1 > num2) {
        cout << "\nO " << num1 << " é o maior número."; 
    } else if (num2 > num1) {
        cout << "\nO " << num2 << " é o maior número."; 
    } else {
        cout << "\nOs números são iguais!"; 
    }
    return 0;
}

