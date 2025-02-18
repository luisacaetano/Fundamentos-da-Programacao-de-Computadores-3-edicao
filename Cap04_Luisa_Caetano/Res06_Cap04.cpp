/*
Faça um programa que receba um número inteiro e verifique se é par ou ímpar
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int num; 
    
    cout << "Insira um número inteiro: "; cin >> num; 
    
    //verifica se o número digitado tem resto 0 ou nao 
    if (num % 2 == 0) {
        cout << "\nEsse número é PAR!"; 
    } else {
        cout << "\nEsse número é ÍMPAR!"; 
    }
    return 0;
}

