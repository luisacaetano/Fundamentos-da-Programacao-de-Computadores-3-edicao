/*
Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. 
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
    
int main(int argc, char** argv) {
    int num, multiplicador, multiplicacao; 
    
    cout << "Insira um número inteiro: "; cin >> num; 
    
    for (multiplicador > 0 ; multiplicador <= 10; multiplicador++) { //multiplicador maior que 0 e menor igual a dez 
        //multiplicao++ para repetir 
        multiplicacao = num * multiplicador;  //multiplicacao 
        cout << "\n" << num << " * " << multiplicador << " = " << multiplicacao; //formato da tabuada    
    }

    return 0;
}

