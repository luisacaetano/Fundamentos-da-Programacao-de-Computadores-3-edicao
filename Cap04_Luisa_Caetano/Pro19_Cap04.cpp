/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
■■ para homens: (72.7 * h) – 58.
■■ para mulheres: (62.1 * h) – 44.7. 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float h, peso; 
    char sexo; 
    
    cout << "F - Feminino"; 
    cout << "\nM - Masculino";
    cout << "\nEscolha um dos sexos acima: "; cin >> sexo; 
    cout << "Insira sua altura: "; cin >> h; 
    
    //verificando o sexo para calcular o peso
    if (sexo == 'F') {
        peso = (62.1 * h) - 44.7; 
        cout << "\nSeu peso ideal é: " << peso; 
    } else if (sexo == 'M') {
        peso = (72.7 * h) - 58; 
        cout << "\nSeu peso ideal é: " << peso;
    } else {
        cout << "\nOpção INVÁLIDA!"; 
    }
    return 0;
}

