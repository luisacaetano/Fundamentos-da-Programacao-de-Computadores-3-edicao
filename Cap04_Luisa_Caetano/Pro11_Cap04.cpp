/*
Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
Até R$ 300,00 15% 
R$ 300,00 R$ 600,00 10% 
R$ 600,00 R$ 900,00 5% 
Acima de R$ 900,00 0%
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float salario, aumento; 
    
    cout << "Insira o valor do salário atual: R$"; cin >> salario; 
    
    //calculo do salario
    if (salario <= 300) {
        aumento = salario * 0.15; 
        cout << "\nO seu aumento será de: R$" << aumento;
        cout << "\n Seu novo salário será: R$" << aumento + salario; 
    } else if (salario > 300 && salario < 600) {
        aumento = salario * 0.10; 
        cout << "\nO seu aumento será de: R$" << aumento;
        cout << "\n Seu novo salário será: R$" << aumento + salario; 
    } else if (salario >= 600 && salario <= 900) {
        aumento = salario * 0.05; 
        cout << "\nO seu aumento será de: R$" << aumento;
        cout << "\n Seu novo salário será: R$" << aumento + salario; 
    } else {
        cout << "\nVocê não tem direito ao aumento de salário!"; 
    }
    return 0;
}

