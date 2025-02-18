/*
Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
mostre a hora digitada apenas em minutos. Lembre-se de que:
■■ para quatro e meia, deve-se digitar 4.30; 
■■ os minutos vão de 0 a 59. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float hora, horainteira, minutos, soma; 
    
    cout << "Insira o horário que você deseja calcular (Ex: para 4:30 inserir 4.30): "; cin >> hora; 
    
    horainteira = (int)hora * 60; //calculo da hora inteira
    minutos = hora - (int)hora; //calculo dos minutos
    soma = horainteira + (minutos * 100); //calculo final transaformando os minutos em inteiros 
    
    cout << "\nHora digitada em minutos: " << soma; 
    
    return 0;
}

