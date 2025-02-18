/*
Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float salario, novosalario;
    
    cout << "Insira o valor do salário atual: R$"; cin >> salario; 

    //calculo do novo salario 
    if (salario <= 300) {
        novosalario = (salario * 0.5) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    } else if (salario > 300 && salario <= 500) {
        novosalario = (salario * 0.4) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    } else if (salario > 500 && salario <= 700) {
        novosalario = (salario * 0.3) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    } else if (salario > 700 && salario <= 800) {
        novosalario = (salario * 0.2) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    } else if (salario > 800 && salario <= 1000) {
        novosalario = (salario * 0.1) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    } else {
        novosalario = (salario * 0.05) + salario; 
        cout << "\nO novo salário será de R$: " << novosalario; 
    }
    
    return 0;
}

