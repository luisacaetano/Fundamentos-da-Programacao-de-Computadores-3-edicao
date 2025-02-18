// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2. 

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float area, base, altura;

    cout << "Calculo da área de um triângulo:\n\n";
    cout << "Insira a base do triângulo: "; cin >> base;
    cout << "Insira a altura do triângulo: "; cin >> altura; 

    area = (base * altura)/2; //calculo da area
    cout << "\nÁrea do triângulo: " << area; //Resultado
    return 0;
}
