/*
Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para 
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem 
estar em metros.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float alturadegrau, alturatotal, degraus; 
    
    cout << "Insira a altura de cada degrau (em metros): "; cin >> alturadegrau; 
    cout << "Insira a altura total que deseja alcançar subindo a escada (em metros): "; cin >> alturatotal; 
    
    degraus = alturatotal / alturadegrau; //calculo dos degraus
    
    cout << "\nA quantidade de degraus que essa escada tem são de: " << degraus; 
    return 0;
}

