/*
Faça um programa que receba três números e mostre o maior.
 */

#include <iostream>
#include <cstdlib>
#include <valarray>

using namespace std;

int main(int argc, char** argv) {
    float num1, num2, num3; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    cout << "Insira o terceiro número: "; cin >> num3; 
    
    if (num1 >= num2 && num1 >= num3) { 
        cout << "\nO número " << num1 << " é o maior!"; 
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "\nO número " << num2 << " é o maior!"; 
    } else if (num3 >= num1 && num3 >= num2) {
       cout << "\nO número " << num3 << " é o maior!"; 
    } else {
        cout << "\nOs números são iguais!";
    }
    return 0;
}
