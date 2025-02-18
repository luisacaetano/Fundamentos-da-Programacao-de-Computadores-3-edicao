/*
Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
Menu de opções: 
1. Somar dois números. 
2. Raiz quadrada de um número. 
Digite a opção desejada
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    int opcao; 
    float num1, num2, soma, raiz;
    
    // menu de opcoes
    cout << "MENU DE OPÇÕES"; 
    cout << "\n1. Somar dois números."; 
    cout << "\n2. Raiz quadrada de um número"; 
    cout << "\nInsira a opção desejada: "; cin >> opcao; 
    //quadro de opcaoes
    if (opcao == 1) {
        cout << "\nInsira o primeiro número: "; cin >> num1; 
        cout << "Insira o segundo número: "; cin >> num2; 
        
        soma = num1 + num2; 
        
        cout << "\nO resultado da soma é: " << soma; 
    } else if (opcao == 2) {
        cout << "\nInsira um número: "; cin >> num1; 
        
        raiz = sqrt(num1); 
        cout << "\nA raiz quadrada deste número é: " << raiz; 
    } else {
        cout << "Opção inválida!"; 
    }
    return 0;
}

