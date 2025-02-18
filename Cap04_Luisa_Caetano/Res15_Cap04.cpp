/*
Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule e mostre o salário 
a receber do funcionário de acordo com as regras a seguir:
■■ O valor da hora trabalhada é igual a 1/5 do salário mínimo. 
■■ O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
■■ Para cada dependente, acrescentar R$ 32,00. 
■■ Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%. 
■■ O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas 
extras. 
■■ Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:
Isento Inferior a R$ 200,00
10% De R$ 200,00 até R$ 500,00
20% Superior a R$ 500,00
■ O salário líquido é igual ao salário bruto menos IRRF.
■■ A gratificação é de acordo com a tabela a seguir:
Até R$ 350,00 R$ 100,00
Superior a R$ 350,00 R$ 50,00
■■ O salário a receber do funcionário é igual ao salário líquido mais a gratificação
 */
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
    
int main(int argc, char** argv) {
    float salario, valorhoratrab, salariomes, valorhoraextratrab, valorfinalextra, salariobruto, salarioliquido, salarioareceber;
    int horastrab, dependentes, horasext, numdependentes; 
    
    cout << "Insira o valor do salário mínimo: "; cin >> salario; 
    cout << "Insira o número de horas trabalhadas: "; cin >> horastrab;
    cout << "Insira a quantidade de dependentes do funcionário: "; cin >> dependentes; 
    cout << "Insira a quantidade de horas extras trabalhadas: "; cin >> horasext; 
    
    valorhoratrab = salario / 5; //valor da hora trabalhada
    salariomes = horastrab * valorhoratrab; //salário do mês
    numdependentes = dependentes * 32; //quatidade de dependentes vezes o valor
    valorhoraextratrab = (valorhoratrab * 0.5); //valor da hora extra 
    valorfinalextra = valorhoraextratrab * horasext; //valor final das horas extras trabalhadas
    salariobruto = salariomes + numdependentes + valorfinalextra; //salario bruto
    
    //verificando se vai precisar pagar o imposto de renda
    if (salariobruto < 200){ 
        cout << "\nVocê está isento do Imposto de Renda!";
    } else if (salariobruto >=200 && salariobruto <=500){
        salarioliquido = salariobruto - (salariobruto * 0.1);
        cout << "\nVocê irá pagar 10% de Imposto de Renda!";
    } else {
        salarioliquido = salariobruto - (salariobruto * 0.2);
        cout << "\nVocê irá pagar 20% de Imposto de Renda!";
    }
    
    //verificando se irá receber gratificação
    if (salarioliquido <= 350) {
        salarioareceber = salarioliquido + 100; 
        cout << "\nVocê irá receber R$100,00 de gratificação!";
    } else {
        salarioareceber = salarioliquido + 50; 
        cout << "\nVocê irá receber R$50,00 de gratificação!";
    }
    cout << "\nO salário final é de: R$" << salarioareceber;
    
    return 0;
}

