/*
Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a 
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para 
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float pesosaco, quantderacao, conversao, resto, resto5dias; 
    
    cout << "Insira o peso do saco de ração (em kg): "; cin >> pesosaco;
    cout << "Insira a quantidade fornecida para cada gato (em gramas): "; cin >> quantderacao; 
    
    conversao = pesosaco * 1000; //conversao para gramas    
    resto = conversao - (quantderacao * 2);  //resto no primeiro dia
    resto5dias = resto - (quantderacao * 8); //resto do saco no 5o dia 
    
    cout << "\nO restante no saco após o quinto dia é de: " << resto5dias ; 
    
    return 0;
}

