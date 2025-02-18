/*
Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar 
sua ponta. 
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float angulo, distancia, altura, radiano, pi=3.14;
    
    cout << "Insira o ângulo formado pela escada: "; cin >> angulo; 
    cout << "Insira a distância que a escada está da parede: "; cin >> distancia; 
    
    radiano = angulo * pi /180;
    altura = distancia / sin(radiano); //medida da escada opara que possa alcançar a ponta 
    //teorema de pitagoras 
    cout << "\nA medida da escada para que se possa alcançar a ponta é: " << altura; 
    return 0;
}

