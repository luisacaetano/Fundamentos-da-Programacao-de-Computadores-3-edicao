/*
 Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, 
pelo menos, o custo do espetáculo seja alcançado.
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    float custo, precoconvite, quantidademinima; 
    
    cout << "Insira o custo do espetáculo: "; cin >> custo; 
    cout << "Insira o preço do convite desse espetáculo: "; cin >> precoconvite; 
    
    quantidademinima = custo / precoconvite; //calculo do custo pelo preço do convite 
    cout << "\nA quantidade mínima de convites que deverão ser vendidos são: " << round(quantidademinima); //arredondamento caso seja número fracionado
    
    return 0;
}

