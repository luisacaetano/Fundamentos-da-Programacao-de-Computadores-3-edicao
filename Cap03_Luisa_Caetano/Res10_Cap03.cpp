// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float area, raio, pi=3.14;

    cout << "Calculo da área de um círculo:\n\n";
    cout << "Insira o raio do círculo: "; cin >> raio;

    area = (pi * (raio * raio)); //calculo da area
    cout << "\nÁrea do círculo: " << area; //Resultado
    return 0;
}
