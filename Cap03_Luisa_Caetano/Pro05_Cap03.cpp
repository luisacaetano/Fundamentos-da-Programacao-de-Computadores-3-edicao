/*
Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float preco, preconovo; 
    
    cout << "Insira o preço do produto: R$"; cin >> preco; 
    
    preconovo = preco - (preco * 0.10); //calculo de porcentagem
    cout << "\nO valor do novo preço com 10% de desconto é: R$" << preconovo; 
    return 0;
}

