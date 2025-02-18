/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa; 
b) quantos anos ela terá em 2050.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int anonascimento, anoatual, idade, idade2050; 
    
    cout << "Insira seu ano de nascimento: "; cin >> anonascimento; 
    cout << "Insira o ano atual: "; cin >> anoatual; 
    
    idade = anoatual - anonascimento; //calculo idade
    cout << "\na) Idade: " << idade; 
    
    idade2050 = 2050 - anonascimento; //calculo idade em 2050
    cout << "\nb) Idade em 2050: " << idade2050;
    
    return 0;
}

