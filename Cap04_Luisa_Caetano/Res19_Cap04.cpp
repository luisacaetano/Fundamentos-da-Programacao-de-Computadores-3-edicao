/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float altura, peso; 
    
    cout << "Insira a sua altura: "; cin >> altura; 
    cout << "Insira o seu peso: "; cin >> peso; 
    
    //verificando qual a altura e peso para mostrar a classificacao
    if (altura < 1.2 && peso < 60) {
        cout << "\nSua classificação é A"; 
    } else if (altura >= 1.2 && altura <= 1.7 && peso < 60) {
        cout << "\nSua classificação é B"; 
    } else if (altura > 1.7 && peso < 60) {
        cout << "\nSua classificação é C"; 
    } else if (altura < 1.2 && peso >= 60 && peso <= 90) {
        cout << "\nSua classificação é D"; 
    } else if (altura >= 1.2 && altura <= 1.7 && peso >= 60 && peso <= 90) {
        cout << "\nSua classificação é E"; 
    } else if (altura > 1.7 && peso >= 60 && peso <= 90){
        cout << "\nSua classificação é F"; 
    } else if (altura < 1.2 && peso > 90) {
        cout << "\nSua classificação é G"; 
    } else if (altura >= 1.2 && altura <= 1.7 && peso > 90) {
        cout << "\nSua classificação é H"; 
    } else {
        cout << "\nSua classificação é I"; 
    }
    return 0;
}

