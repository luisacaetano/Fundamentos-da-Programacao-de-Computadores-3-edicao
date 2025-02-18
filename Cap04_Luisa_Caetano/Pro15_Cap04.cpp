/*
Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de 
investimento, de acordo com o tipo de investimento.

1 Poupança 3%
2 Fundos de renda fixa 4%
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int tipo; 
    float valor, valorcorrigido; 
    
    //escolhendo um tipo de poupança e mostrando o valor corrigido 
    cout << "1 - Poupança"; 
    cout << "\n2 - Fundos de renda fixa"; 
    cout << "\nEscolha um dos tipos de investimentos acima: "; cin >> tipo; 
    cout << "Insira o valor do investimento: "; cin >> valor; 
    
    if (tipo == 1) {
        valorcorrigido = (valor * 0.03) + valor; 
        cout << "\nO valor corrigido que você terá no fim do mês é de: R$" << valorcorrigido; 
    } else if (tipo == 2) {
        valorcorrigido = (valor * 0.04) + valor; 
        cout << "\nO valor corrigido que você terá no fim do mês é de: R$" << valorcorrigido; 
    } else {
        cout <<"\nOpção inválida!";
    }
    return 0;
}

