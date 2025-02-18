/*
João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar 
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de 
João. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salario, conta1, conta2, restante, multa; 
    
    cout << "Insira o valor do salário: R$"; cin >> salario; 
    cout << "Insira o valor da primeira conta: R$"; cin >> conta1; 
    cout << "Insira o valor da segunda conta: R$"; cin >> conta2; 
    
    multa = (conta1 * 0.02) + (conta2 * 0.02); //calculo da multa
    restante = salario - conta1 - conta2 - multa; //calculo do salario menos o valor das contas menos as multas
    cout << "\nNo salário de João restará: R$" << restante; 
    return 0;
}

