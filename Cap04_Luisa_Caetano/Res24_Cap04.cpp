/*
Faça um programa que receba o preço, o tipo (A — alimentação; L — limpeza; e V — vestuário) e a
refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refrigeração) de um produto. Suponha que haverá apenas a digitação de dados válidos e, quando houver 
digitação de letras, utilize maiúsculas. Calcule e mostre:
■■ O valor adicional, de acordo com a tabela a seguir:
O valor do imposto, de acordo com a regra a seguir.
PrEço PErCENTuAL soBrE o PrEço
< R$ 25,00 5%
>= R$ 25,00 8%
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float preco, adicional, novopreco, imposto, precocusto, desconto; 
    char tipo, refrigeracao; 
    
    cout << "Insira o preço do produto: "; cin >> preco; 
    cout << "A - Alimentação";
    cout << "\nL - Limpeza";
    cout << "\nV - Vestuário"; 
    cout << "\nInsira o tipo de produto: "; cin >> tipo; 
    cout << "S - Esse produto necessita de refrigeração"; 
    cout << "\nN - Esse produto não necessita de refrigeração";
    cout << "\nInsira o tipo de refrigeração: "; cin >> refrigeracao; 
    
    //calculo do valor adicional
    if (refrigeracao == 'N' && tipo == 'A' && preco < 15) {
        adicional = 2;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'N' && tipo == 'A' && preco >= 15) {
       adicional = 5;
       cout << "\nO valor adicional é de: R$" << adicional;  
    } else if (refrigeracao == 'N' && tipo == 'L' && preco < 10) {
        adicional = 1.5;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'N' && tipo == 'L' && preco >= 10) {
        adicional = 2.5;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'N' && tipo == 'V' && preco < 30) {
        adicional = 3;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'N' && tipo == 'V' && tipo >= 30) {
        adicional = 2.5;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'S' && tipo == 'A') {
        adicional = 8;
        cout << "\nO valor adicional é de: R$" << adicional; 
    } else if (refrigeracao == 'S' && tipo == 'L') {
        adicional = 0;
        cout << "\nEsse produto não tem valor adicional";
    } else if (refrigeracao == 'S' && tipo == 'V') {
        adicional = 0;
        cout << "\nEsse produto não tem valor adicional";
    } else {
        adicional = 0;
        cout << "\nProduto inválido!"; 
    }
    
    //calculo do imposto
    if (preco < 25) {
        imposto = preco * 0.05;
        precocusto = imposto + preco; 
        cout << "\nEsse produto tem um imposto de: R$" << imposto; 
        cout << "\nO valor do preço de custo é de: R$" << precocusto;
    } else {
        imposto = preco * 0.08;
        precocusto = imposto + preco; 
        cout << "\nEsse produto tem um imposto de: R$" << imposto; 
        cout << "\nO valor do preço de custo é de: R$" << precocusto;
    }
    
    //calculo do desconto
    if (tipo == 'A' || refrigeracao == 'S') {
        desconto = 0; 
        cout << "\nEsse produto não terá desconto!"; 
    } else {
        desconto = preco * 0.03; 
        cout << "\nEsse produto receberá um desconto de: R$" <<desconto; 
    }
    
    //novo preco 
    novopreco = precocusto + adicional - desconto; 
    cout << "\nO novo preço deste produto será: R$" << novopreco; 
    
    //calculo classificacao
    if (novopreco <=50) {
        cout << "\nEste é um produto barato!"; 
    } else if (novopreco > 50 && novopreco < 100) {
        cout << "\nO preço deste produto é normal!"; 
    } else {
        cout << "\nEste é um produto caro!"; 
    }
    return 0;
}

