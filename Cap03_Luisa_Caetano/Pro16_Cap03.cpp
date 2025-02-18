/*
Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. 
 */

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float catetooposto, catetoadjascente, hipotenusa; 
    
    cout << "Insira o valor do cateto oposto: "; cin >> catetooposto; 
    cout << "Insira o valor do cateto adjascente: "; cin >> catetoadjascente; 
    
    hipotenusa = sqrt((catetooposto * catetooposto) + (catetoadjascente * catetoadjascente)); //calculo da hipotenusa2 = catop2 + catad2
    
    cout << "\nA hipotenusa desse triângulo é: " << hipotenusa; 
    return 0;
}

