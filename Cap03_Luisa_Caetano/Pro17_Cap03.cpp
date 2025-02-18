/*
Faça um programa que receba o raio, calcule e mostre: 
a) o comprimento de uma esfera; sabe-se que C = 2 * p R; 
b) a área de uma esfera; sabe-se que A = p R2
c) o volume de uma esfera; sabe-se que V = ¾ * p R3

 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float raio, comprimento, pi=3.14, area, volume; 
    
    cout << "Insira o valor do raio da esfera: "; cin >> raio; 
    
    comprimento = (2 * pi * raio); //calculo do comprimento
    cout << "\na) O comprimento da esfera: " << comprimento; 
    
    area = pi * pow(raio,2); //calculo da area
    cout << "\nb) A área da esfera: " << area; 
    
    volume = 0.75 * pi * pow(raio,3); //calculo do volume
    cout << "\nc) O volume da esfera: " << volume; 
    return 0;
}

