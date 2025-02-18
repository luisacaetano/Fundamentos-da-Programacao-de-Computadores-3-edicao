/*
Faça um programa que receba: 
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
Calcule e mostre: 
■■ o preço unitário do produto comprado, seguindo a Tabela I; 
■■ o preço total da nota; 
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto. 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int codigo, quant; 
    float preco, precototal, desconto; 
    
    cout << "Insira o código do produto comprado: "; cin >> codigo; 
    cout << "Insira a quantidade comprada: "; cin >> quant;
    
    //calculando o valor total da nota
    if (codigo >= 1 && codigo <= 10) {
        preco = 10;
        precototal = preco * quant; 
        cout << "\nO preco unitário do produto é: R$" << preco; 
        cout << "\nO valor total na nota é de: R$" << precototal; 
    } else if (codigo >= 11 && codigo <= 20) {
        preco = 15;
        precototal = preco * quant; 
        cout << "\nO preco unitário do produto é: R$" << preco; 
        cout << "\nO valor total na nota é de: R$" << precototal; 
    } else if (codigo >= 21 && codigo <= 30) {
        preco = 20;
        precototal = preco * quant; 
        cout << "\nO preco unitário do produto é: R$" << preco;
        cout << "\nO valor total na nota é de: R$" << precototal; 
    } else if (codigo >= 31 && codigo <= 40) {
        preco = 30;
        precototal = preco * quant; 
        cout << "\nO preco unitário do produto é: R$" << preco; 
        cout << "\nO valor total na nota é de: R$" << precototal; 
    } else {
        cout << "\nCódigo de produto INVÁLIDO!"; 
    }
    
    //calculando o desconto
    if (precototal <= 250) {
        desconto = precototal * 0.05;
        cout << "\nO valor do desconto é de: R$" << desconto; 
        cout << "\nO preço final na nota com o desconto é de: R$" << precototal - desconto; 
    } else if (precototal > 250 && precototal <= 500) {
        desconto = precototal * 0.10;
        cout << "\nO valor do desconto é de: R$" << desconto; 
        cout << "\nO preço final na nota com o desconto é de: R$" << precototal - desconto; 
    } else {
        desconto = precototal * 0.15;
        cout << "\nO valor do desconto é de: R$" << desconto; 
        cout << "\nO preço final na nota com o desconto é de: R$" << precototal - desconto; 
    }
    return 0;
}

