/*
Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float preco, novopreco; 
    
    cout << "Insira o valor do produto: R$"; cin >> preco;
    
    //calculando o novo preco
    if (preco < 50) {
        novopreco = (preco * 0.05) + preco; 
        cout << "\nO novo preço será de: R$" << novopreco; 
    } else if (preco >= 50 && preco <= 100) {
        novopreco = (preco * 0.10) + preco; 
        cout << "\nO novo preço será de: R$" << novopreco; 
    } else {
        novopreco = (preco * 0.15) + preco; 
        cout << "\nO novo preço será de: R$" << novopreco; 
    }
    
    //calculo da classificacao
    if (novopreco <= 80) {
        cout << "\nEste é um produto barato!"; 
    } else if (novopreco > 80 && novopreco <= 120) {
        cout << "\nO valor deste produto é normal!";
    } else if (novopreco > 120 && novopreco <= 200) {
        cout << "\nEste é um produto caro!"; 
    } else {
        cout << "\nEste é um produto muito caro!"; 
    }
    return 0;
}

