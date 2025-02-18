/*
Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W 
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float largura, comprimento, calculo, area; 
    
    cout << "Insira a largura do cômodo: "; cin >> largura; 
    cout << "Insira o comprimento do cômodo: "; cin >> comprimento; 
    
    area = largura * comprimento; //calculo da area
    calculo = area/18; //calculo da potencia de iluminacao 
    
    cout << "\nA área do cômodo é: " << area; 
    cout << "\nA potência de iluminação que deverá ser utilizada é: " << calculo; 
    return 0;
}

