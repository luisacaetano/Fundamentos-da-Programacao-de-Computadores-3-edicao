/*
Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float lado, calculo; 
    
    cout << "Insira o valor do lado do quadrado: "; cin >> lado; 
    
    calculo = lado * lado; //calculo da area do quadrado
    
    cout << "\nA área do quadrado é: " << calculo; 
    return 0;
}

