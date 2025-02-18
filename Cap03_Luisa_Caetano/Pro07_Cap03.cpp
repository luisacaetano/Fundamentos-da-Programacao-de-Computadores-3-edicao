/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float peso, pesogordo, pesomagro; 
    //variaveis do peso atual, peso se ela engordar e peso se ela emagrecer
    
    cout << "Insira o seu peso atual: "; cin >> peso; 
    
    pesogordo = peso + (peso * 0.15); //calculo se ela engordar 15%
    pesomagro = peso - (peso * 0.20); //calculo se ela emagrecer 20%
    
    cout << "\na) Caso você engorde 15% sobre o peso digitado, seu novo peso será: " << pesogordo; 
    cout << "\nb) Caso você emagreça 20% sobre o peso digitado, seu novo peso será: " << pesomagro; 
    return 0;
}

