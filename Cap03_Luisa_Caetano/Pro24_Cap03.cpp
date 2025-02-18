/*
Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela 
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O 
programa deve fazer as conversões e mostrá-las.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    float reais, dolares, marco, libra; 
    
    cout << "Insira o valor que você está levando para viajar (R$): "; cin >> reais;
    
    dolares = reais / 1.8; //conversao em dollar
    cout << "\nA conversão em dólares é de: $" << dolares; 
    
    marco = reais / 2; //conversao em marco
    cout << "\nA conversão em marco é de: $" << marco; 
    
    libra = reais / 3.57; //conversao em libra
    cout << "\nA conversão em libra é de: $" << libra;
    return 0;
}

