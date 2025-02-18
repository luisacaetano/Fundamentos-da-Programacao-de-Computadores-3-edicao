/*
Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

Até R$ 30,00 Sem desconto
Entre R$ 30,00 e R$ 100,00 10%
Acima de R$ 100,00 15%
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float precoatual, desconto; 
    int codigo; 
    
    cout << "Insira o código do produto: "; cin >> codigo; 
    cout << "Insira o preço atual do produto: R$"; cin >> precoatual; 
    
    //calculo do desconto
    if (precoatual <= 30) {
        cout << "\nEsse produto não contém desconto!";
    } else if (precoatual > 30 && precoatual <= 100) {
        desconto = (precoatual * 0.1);
        cout << "\nO desconto deste produto: R$" << desconto; 
        cout << "\nO novo preço deste produto é: R$" << precoatual - desconto; 
    } else {
        desconto = (precoatual * 0.15);
        cout << "\nO desconto deste produto: R$" << desconto; 
        cout << "\nO novo preço deste produto é: R$" << precoatual - desconto; 
    }
    return 0;
}

