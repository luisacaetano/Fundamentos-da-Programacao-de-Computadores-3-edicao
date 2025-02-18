/*
Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule 
e mostre a quantidade de salários mínimos que esse funcionário ganha
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salariominimo, salariofuncionario, quant; 
    
    cout << "Insira o valor do salário mínimo atual: R$"; cin >> salariominimo; 
    cout << "Insira o valor do salário do funcionário que deseja calcular: R$"; cin >> salariofuncionario; 
    
    quant = salariofuncionario / salariominimo; //calculo da quantidade
    cout << "\nEsse funcionário recebe " << quant << " salários mínimos"; //para o valor aparecer no meio da frase
    return 0;
}

