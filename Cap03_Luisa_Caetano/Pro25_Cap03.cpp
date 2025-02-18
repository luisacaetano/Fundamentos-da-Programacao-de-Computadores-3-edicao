/*
Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e 
mostre: 
a) a hora digitada convertida em minutos; 
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; 
c) o total dos minutos convertidos em segundos. 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int hora, minutos, calculohora, calculominutos, calculosegundos; 
    
    cout << "Insira a hora: "; cin >> hora; 
    cout << "Insira os minutos: "; cin >> minutos; 
    
    calculohora = hora * 60; //transformando a hora em minutos 
    cout << "\na) A hora digitada convertida em minutos: " << calculohora; 
    
    calculominutos = calculohora + minutos; //soma dos minutos
    cout << "\nb) O total dos minutos, ou seja, os minutos digitados mais a conversão anterior: " << calculominutos; 
    
    calculosegundos = calculominutos * 60; //calculo dos segundos
    cout << "\nc) O total dos minutos convertidos em segundos: " << calculosegundos; 
    return 0;
}

