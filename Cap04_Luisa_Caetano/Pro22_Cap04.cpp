/*
Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int idade;
    float peso; 
    
    cout << "Insira a sua idade: "; cin >> idade; 
    cout << "Insira seu peso: "; cin >> peso; 
    
    //verificando a idade o peso
    if (idade < 20) {
        if (peso < 60) {
            cout << "\nSeu grupo de risco é o: 9"; 
        } else if (peso >= 60 && peso <= 90) {
            cout << "\nSeu grupo de risco é o: 8"; 
        } else {
            cout << "\nSeu grupo de risco é o: 7"; 
        }
    } else if (idade >= 20 && idade <= 50) {
        if (peso < 60) {
            cout << "\nSeu grupo de risco é o: 6"; 
        } else if (peso >= 60 && peso <= 90) {
            cout << "\nSeu grupo de risco é o: 5"; 
        } else {
            cout << "\nSeu grupo de risco é o: 4"; 
        }
    } else {
        if (peso < 60) {
            cout << "\nSeu grupo de risco é o: 3"; 
        } else if (peso >= 60 && peso <= 90) {
            cout << "\nSeu grupo de risco é o: 2"; 
        } else {
            cout << "\nSeu grupo de risco é o: 1"; 
        }
    }
    return 0;   
}

