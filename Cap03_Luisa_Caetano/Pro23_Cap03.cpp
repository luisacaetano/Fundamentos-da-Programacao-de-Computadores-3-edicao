/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do 
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float angulo1, angulo2, angulo3;
    
    cout << "Insira a medida do primeiro ângulo: "; cin >> angulo1;
    cout << "Insira a medida do segundo ângulo: "; cin >> angulo2;
    
    angulo3 = 180 - (angulo1 + angulo2); //calculo da soma dos triangulos = 180
    cout << "\nO terceiro ângulo desse triângulo é: " << angulo3; 
    
    return 0;
}

