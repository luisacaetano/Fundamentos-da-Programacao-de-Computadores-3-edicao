/*
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a 
seguir. Mostre o saldo médio e o valor do crédito
Acima de R$ 400,00 30% do saldo médio
R$ 400,00 R$ 300,00 25% do saldo médio
R$ 300,00 R$ 200,00 20% do saldo médio
Até R$ 200,00 10% do saldo médio
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float saldomedio, calculo; 
    
    cout << "Insira o saldo médio do último ano: R$"; cin >> saldomedio; 
    
    //verificando o saldo medio
    if (saldomedio > 400) {
        calculo = saldomedio * 0.3; 
        cout << "\nSeu saldo médio é de: R$" << saldomedio << " e seu valor de crédito será de: R$" << calculo + saldomedio; 
    } else if (saldomedio > 300 && saldomedio <= 400) {
        calculo = saldomedio * 0.25; 
        cout << "\nSeu saldo médio é de: R$" << saldomedio << " e seu valor de crédito será de: R$" << calculo + saldomedio; 
    } else if (saldomedio > 200 && saldomedio <= 300) {
        calculo = saldomedio * 0.2; 
        cout << "\nSeu saldo médio é de: R$" << saldomedio << " e seu valor de crédito será de: R$" << calculo + saldomedio; 
    } else {
        calculo = saldomedio * 0.1; 
        cout << "\nSeu saldo médio é de: R$" << saldomedio << " e seu valor de crédito será de: R$" << calculo + saldomedio; 
    }
    return 0;
}

