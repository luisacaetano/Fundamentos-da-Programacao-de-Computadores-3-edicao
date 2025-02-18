/*
Faça um programa que receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre: 
■ O imposto, conforme a tabela a seguir.
■ A gratificação, de acordo com a tabela a seguir.
■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
■ A categoria, que está na tabela a seguir. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salariobase, imposto, salarioliquido;
    int temposervico, gratificacao; 
    
    cout << "Insira o salário base: R$"; cin >> salariobase; 
    cout << "Insira o tempo de serviço (em anos): "; cin >> temposervico; 
    
    //calculando o valor do imposto
    if (salariobase < 200) {
        cout << "\nVocê está isento do imposto!"; 
    } else if (salariobase >= 200 && salariobase <= 450) {
        imposto = salariobase * 0.03; 
        cout << "\nImposto de 3% sobre o salário base, resultando em: R$" << imposto; 
    } else if (salariobase > 450 && salariobase < 700) {
        imposto = salariobase * 0.08; 
        cout << "\nImposto de 8% sobre o salário base, resultando em: R$" << imposto;    
    } else{
        imposto = salariobase * 0.12; 
        cout << "\nImposto de 12% sobre o salário base, resultando em: R$" << imposto; 
    }
    
    //calculando o valor da gratificacao
    if (salariobase > 500 && temposervico <= 3) {
        gratificacao = 20;
        cout << "\nVocê irá receber uma gratificação de R$" << gratificacao; 
    } else if (salariobase > 500 && temposervico > 3) {
        gratificacao = 30; 
        cout << "\nVocê irá receber uma gratificação de R$" << gratificacao; 
    } else if (salariobase <= 500 && temposervico <= 5){
        gratificacao = 23;
        cout << "\nVocê irá receber uma gratificação de R$" << gratificacao; 
    } else if (salariobase <= 500 && temposervico >= 3 && temposervico <= 6) {
        gratificacao = 35;
        cout << "\nVocê irá receber uma gratificação de R$" << gratificacao; 
    } else {
        gratificacao = 33;
        cout << "\nVocê irá receber uma gratificação de R$" << gratificacao; 
    }
    //calculando oo salario liquido
    salarioliquido = salariobase - imposto + gratificacao; 
    cout << "\nSeu salário líquido será de: R$" << salarioliquido; 
    
    //verificando a classificação
    if (salarioliquido <= 350) {
        cout << "\nSua classificação é: A"; 
    } else if (salarioliquido > 350 && salarioliquido < 600) {
        cout << "\nSua classificação é: B"; 
    } else {
        cout << "\nSua classificação é: C"; 
    }
    return 0;
}

