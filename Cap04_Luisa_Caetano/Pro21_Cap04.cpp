/*
Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7 ou 8 ou 9 Sudeste
10 a 20 Centro-oeste
21 a 30 Nordeste
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float preco; 
    int codigo; 
    
    cout << "Insira o preço do produto: R$"; cin >> preco; 
    cout << "Insira seu código de origem: "; cin >> codigo; 
    
    //verificando o codigo de origem
    if (codigo == 1) {
        cout << "\nSua procedência é: SUL"; 
    } else if (codigo == 2) {
        cout << "\nSua procedência é: Norte"; 
    } else if (codigo == 3) {
        cout << "\nSua procedência é: LESTE"; 
    } else if (codigo == 4) {
        cout << "\nSua procedência é: OESTE"; 
    } else if (codigo == 5 || codigo == 6) {
        cout << "\nSua procedência é: NORDESTE"; 
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        cout << "\nSua procedência é: SUDESTE"; 
    } else if (codigo >= 10 && codigo <= 20) {
        cout << "\nSua procedência é: CENTRO-OESTE"; 
    } else if (codigo >= 21 && codigo <= 30) {
        cout << "\nSua procedência é: NOROESTE"; 
    } else {
        cout << "\nCódigo INVÁLIDO!"; 
    }
    return 0;
}

