/*
Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. 
Calcule e mostre:
a) o valor de cada quilowatt; 
b) o valor a ser pago por essa residência; 
c) o valor a ser pago com desconto de 15%. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salariominimo, quantquilowatts, valorquilowatts, valorpago, valordesconto; 
    
    cout << "Insira o valor do salário mínimo: "; cin >> salariominimo; 
    cout << "Insira a quantidade de quilowatts consumida em sua residência: "; cin >> quantquilowatts;
    
    valorquilowatts = salariominimo / 5; //valor do quilowatts
    cout <<"\na) O valor de cada quilowatt: " << valorquilowatts;
    
    valorpago = (salariominimo/5) * quantquilowatts; //valor pago por essa residência
    cout <<"\nb) O valor a ser pago por essa residência: " << valorpago; 
    
    valordesconto = valorpago - (valorpago * 0.15); //valor final com o desconto de 15%
    cout <<"\nc) O valor a ser pago com desconto de 15%: " << valordesconto;
    return 0;
}

