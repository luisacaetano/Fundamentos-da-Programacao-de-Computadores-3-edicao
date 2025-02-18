/*
Faça um programa que receba um número real, encontre e mostre: 
a) a parte inteira desse número; 
b) a parte fracionária desse número; 
c) o arredondamento desse número.
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float num, partefrac; 
    
    cout << "Insira um número real: "; cin >> num; 
    
    cout << "\na) A parte inteira desse número: " << (int)num; //calculo da parte inteira do número inserido
    partefrac = num - (int)num; //calculo da parte fracionada inserida
    cout << "\nb) A parte fracionária desse número: " << partefrac; 
    cout << "\nc) O arredondamento desse número: " << (int) round(num); //calculo do arredondamento do número
    
    return 0;
}

