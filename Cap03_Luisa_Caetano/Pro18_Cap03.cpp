/*
Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em 
Fahrenheit. Sabe-se que F = 180*(C + 32)/100
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    float temperatura, calculo;
    
    cout << "Insira a temperatura (em Celsius): "; cin >> temperatura; 
    
    calculo = 1.8 * temperatura + 32; //calculo da temperatura em fahnheit 
    cout << "A temperatura em Fahrenheit é: " << calculo; 
    return 0;
}

