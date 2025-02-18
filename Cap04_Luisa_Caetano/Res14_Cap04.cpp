/*
Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário, 
acrescido de bonificação e de auxílio escola

Até R$ 500,00 5% do salário
Entre R$ 500,00 e R$ 1.200,00 12% do salário
Acima de R$ 1.200,00 Sem bonificação

Até R$ 600,00 R$ 150,00
Acima de R$ 600,00 R$ 100,00
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salario, bonificacao, novosalario, auxilio; 
    
    cout << "Insira o salário do funcionário: R$"; cin >> salario; 
    
    if (salario < 500) {
        bonificacao = salario * 0.05; //5%
        novosalario = salario + bonificacao; 
        cout << "\nEle irá receber uma bonificação de R$" << bonificacao;
    } else if (salario >= 500 && salario <=1200){
        bonificacao = salario * 0.12; //12%
        novosalario = salario + bonificacao; 
        cout << "\nEle irá receber uma bonificação de R$" << bonificacao; 
    } else {
        bonificacao = 0; //Não irá receber bonificação
        novosalario = salario + bonificacao; 
        cout << "\nEsse funcionário não receberá bonificação!"; 
    }
    
    if (salario <= 600) {
        auxilio = 150; //auxilio de 150,00
        cout << "\nEsse funcionário receberá 150,00 de auxílio escola!";
    } else {
        auxilio = 100; //auxilio de 100,00
        cout << "\nEsse funcionário receberá 100,00 de auxílio escola!";
    }
    cout << "\nSeu novo salário será de: R$" << novosalario + auxilio; 
    return 0;
}

