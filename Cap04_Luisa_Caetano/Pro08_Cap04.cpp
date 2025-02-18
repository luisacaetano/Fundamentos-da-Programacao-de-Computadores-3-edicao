/*
Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
Até R$ 300,00 35%
Acima de R$ 300,00 15%
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salario, aumento; 
    
    cout << "Insira o valor do salário: R$"; cin >> salario; 
    
    //verificando o valor do salario
    if (salario < 350) {
        aumento = salario * 0.35; 
        cout << "\nVocê receberá um aumento de: R$" << aumento; 
        cout << "\nSeu novo salário será: R$" << aumento + salario; 
    } else {
        aumento = salario * 0.15; 
        cout << "\nVocê receberá um aumento de: R$" << aumento; 
        cout << "\nSeu novo salário será: R$" << aumento + salario; 
    }
    return 0;
}

