/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo. 
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
c) o imposto equivale a 3% do salário bruto. 
d) o salário a receber equivale ao salário bruto menos o imposto. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float horastrab, salariominimo, salariofinal, valorhoratrab, salariobruto, imposto; 
    
    cout << "Insira o número de horas trabalhadas: "; cin >> horastrab; 
    cout << "Insira o valor do salário mínimo: "; cin >> salariominimo; 
    
    valorhoratrab = salariominimo / 2; //calculando o valor da hora trabalhada 
    salariobruto = horastrab * valorhoratrab; //calculo do salario bruto
    imposto = salariobruto * 0.03; //calculo do imposto 
    salariofinal = salariobruto - imposto; //calculo do salario final
    
    cout << "\nO salário à receber é de: R$" << salariofinal; 
    
    return 0;
}

