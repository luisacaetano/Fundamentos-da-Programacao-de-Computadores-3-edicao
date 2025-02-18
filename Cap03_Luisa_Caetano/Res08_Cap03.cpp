/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float deposito, taxajuros, rendimentos, valorfinal;

    cout << "Calculo de rendimentos: \n\n";
    cout << "Insira o valor do depósito "; cin >> deposito;
    cout << "Insira a taxa de juros: "; cin >> taxajuros; 
    
    rendimentos = deposito * (taxajuros/100);
    cout << "\nO valor do rendimento é: " << rendimentos; //calculo do rendimento
    
    valorfinal = deposito + rendimentos; 
    cout << "\nO valor do final após o rendimento é: " << valorfinal; //calculo final
    return 0;
}