/*
Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa 
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu 
salário final.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salario, comissao, valorvendas, salariofinal; 
    
    cout << "Insira o salário fixo do funcionário: R$"; cin >> salario; 
    cout << "Insira o valor de suas vendas: R$"; cin >> valorvendas; 
    
    comissao = valorvendas * 0.04; //calculo da comissao de 4% sobre as vendas
    salariofinal = comissao + salario; //salario final
    cout << "\nO valor da comissão deste funcionário é: R$" << comissao; 
    cout << "\nO salário final deste funcionário será de: R$" << salariofinal; 
    return 0;
}

