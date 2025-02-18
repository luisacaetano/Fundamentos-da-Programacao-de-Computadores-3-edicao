/*
Faça um programa que calcule e mostre a área de um trapézio. 
Sabe-se que: A = ((base maior + base menor) * altura)/2
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float base1, base2, altura, area; 
    //base1 = basemaior
    //base2 = basemenor

    cout << "Insira a base maior do trapézio: "; cin >> base1; 
    cout << "Insira a base menor do trapézio: "; cin >> base2; 
    cout << "Insira a altura do trapézio: "; cin >> altura; 
    
    area = ((base1 + base2) * altura) / 2; //calculo area do trapezio
    cout << "\nA aréa desse trapézio é: " << area;     
    return 0;
}

