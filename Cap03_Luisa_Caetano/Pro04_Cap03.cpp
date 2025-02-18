/*
Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float nota1, nota2, media; 
    
    cout << "Insira a primeira nota: "; cin >> nota1; 
    cout << "Insira a segunda nota: "; cin >> nota2; 
    
    //considerando peso 2 para a nota 1 
    //considerando peso 3 para a nota 2
    
    media = ((nota1 * 2) + (nota2 * 3))/(2+3); //calculo da media ponderada
    cout << "\nA média ponderada dessas duas notas é de: " << media; 
    return 0;
}

