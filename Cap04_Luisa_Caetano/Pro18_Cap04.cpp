/*
Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int idade; 
    
    cout << "Insira sua idade: "; cin >> idade; 
    //verificando a idade
    if (idade >=18) {
        cout << "\nVocê é maior de idade!"; 
    } else { 
        cout << "\nVocê é menor de idade!"; 
    }
    return 0;
}

