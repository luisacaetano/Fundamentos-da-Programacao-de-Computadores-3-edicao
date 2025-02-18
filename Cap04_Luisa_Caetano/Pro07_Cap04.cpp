/*
Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um 
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento
 */

#include <cstdlib>
#include <iostream>
using namespace std;
    
int main(int argc, char** argv) {
    float salario, aumento; 
    
    cout << "Insira o valor do salário: R$"; cin >> salario; 
    
    //aumeto de salario
    if (salario < 500) {
        aumento = salario * 0.3; 
        cout << "\nVocê irá receber um aumento de R$" << aumento; 
        cout << "\nSeu novo salário será de: R$" << aumento + salario; 
    } else {
        cout << "\nVocê não tem direito de receber aumento."; 
    }
    return 0;
}

