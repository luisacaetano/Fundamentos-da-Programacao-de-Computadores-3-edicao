/*
 Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float peso, calculo, calculo2;
    //variavel calculo tranforma kg em gramas
    //variavel calculo2 trasformou as gramas em inteiros para somar com a variavel calculo
    
    cout << "Insira seu peso atual: "; cin >> peso; 
    
    calculo = (int)peso * 1000; //calculo para transformar kg em gramas
    calculo2 = calculo + ((peso - (int)peso) * 100); //calculo para transformar as gramas em inteiros
    
    cout << "\n O seu peso em gramas é: " << calculo2; 
    return 0;
}

