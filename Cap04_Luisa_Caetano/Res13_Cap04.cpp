/*
Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de 
opção inválida e não se preocupe com restrições, como salário negativo.
Menu de opções:
1. Imposto 
2. Novo salário 
3. Classificação 
Digite a opção desejada. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;
    
int main(int argc, char** argv) {
    int opcao; 
    float salario, imposto, novosalario; 
    
    cout << "MENU DE OPÇÕES";
    cout << "\n1. Imposto.";
    cout << "\n2. Novo salário.";
    cout << "\n3. Classificação.";
    cout << "\nInsira a opção desejada: "; cin >> opcao; 
    
    //verificando cada opcao
    if (opcao == 1) {
        /*Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras a seguir      
        Menor que R$ 500,00 5%
        De R$ 500,00 (inclusive) a R$ 850,00 (inclusive) 10%
        Acima de R$ 850,00 15%
         */
        cout << "Insira o salário do funcionário: R$"; cin >> salario; 
        if (salario < 500) {
            imposto = salario * 0.05; 
            cout << "\nO valor do imposto será de: R$" << imposto; 
        } else if (salario >=500 && salario <=850) {
            imposto = salario * 0.1; 
            cout << "\nO valor do imposto será de: R$" << imposto; 
        } else if (salario > 850) {
            imposto = salario * 0.15; 
            cout << "\nO valor do imposto será de: R$" << imposto; 
        } else {
            cout << "\nValor inserido inválido!"; 
        }
    } else if (opcao == 2) {
        /*
        Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as regras a seguir.
        Maior que R$ 1.500,00 R$ 25,00
        De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive) R$ 50,00
        De R$ 450,00 (inclusive) a R$ 750,00 R$ 75,00
        Menor que R$ 450,00 R$ 100,00
         */
        cout << "Insira o salário do funcionário: R$"; cin >> salario; 
        if (salario > 1500) {
            novosalario = salario + 25; 
            cout << "\nO novo salário atualizado é de: R$" << novosalario; 
        } else if (salario >= 750 && salario <= 1500) {
            novosalario = salario + 50; 
            cout << "\nO novo salário atualizado é de: R$" << novosalario; 
        } else if (salario >= 450 && salario < 750){
            novosalario = salario + 75; 
            cout << "\nO novo salário atualizado é de: R$" << novosalario; 
        } else if (salario < 450) {
            novosalario = salario + 100; 
            cout << "\nO novo salário atualizado é de: R$" << novosalario; 
        } else {
            cout << "\nValor inserido inválido!"; 
        }
    } else if (opcao == 3) {
        /*
        Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir.
        Até R$ 700,00 (inclusive) Mal remunerado
        Maiores que R$ 700,00 Bem remunerado
         */
        cout << "Insira o salário do funcionário: R$"; cin >> salario; 
        if (salario <= 700) {
            cout << "\nEsse funcionário está mal remunerado!"; 
        } else if (salario > 700) {
            cout << "\nEsse funcionário está bem remunerado!"; 
        } else {
            cout << "\nValor inserido inválido!"; 
        }
    } else {
        cout << "\nOpção inválida!"; 
    }
    return 0;
}

