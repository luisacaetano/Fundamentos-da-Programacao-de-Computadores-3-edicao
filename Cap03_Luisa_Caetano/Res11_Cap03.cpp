/*
Faça um programa que receba um número positivo e maior que zero, calcule e mostre: 
a) o número digitado ao quadrado; 
b) o número digitado ao cubo; 
c) a raiz quadrada do número digitado; 
d) a raiz cúbica do número digitado
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float numero, quadrado, cubo, raizquadrada, raizcubica;

    cout << "Insira um número positivo e maior que zero: "; cin >> numero;

    quadrado = (numero * numero); // calculo numero ao quadrado
    cout << "\na) Número digitado ao quadrado: " << quadrado; //Resultado
    
    cubo = (numero * numero * numero); // calculo do numero ao cubo
    cout << "\nb) Número digitado ao cubo: " << cubo; //Resultado
    
    raizquadrada = sqrt(numero); // calculo raiz quadrada
    cout << "\nc) Raiz quadrada do número digitado: " <<raizquadrada; // Resultado
    
    raizcubica = cbrt(numero); // calculo raiz cubica
    cout << "\nd) Raiz cúbica do número digitado: " << raizcubica; //Resultado
    
    return 0;
}
