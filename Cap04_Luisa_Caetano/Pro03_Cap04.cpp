/*
 * Faça um programa que receba dois números e mostre o menor.
 */

#include <cstdlib>
#include <iostream>
using namespace std;
    
int main(int argc, char** argv) {
    float num1, num2; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    
    if (num1 > num2) {
        cout << "\nO número " << num1 << " é o maior!"; 
    } else if (num2 > num1) {
        cout << "\nO número " << num2 << " é o maior!"; 
    } else {
        cout << "\nOs números são iguais1"; 
    }
    return 0;
}

