/*
aça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
a) a idade dessa pessoa em anos; 
b) a idade dessa pessoa em meses; 
c) a idade dessa pessoa em dias; 
d) a idade dessa pessoa em semanas. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int anonascimento, anoatual, idadeanos, idademeses, idadedias, idadesemanas; 
    
    cout << "Insira seu ano de nascimento: "; cin >> anonascimento; 
    cout << "Insira o ano atual: "; cin >> anoatual; 
    
    idadeanos = anoatual - anonascimento; //calculo idade em anos
    cout << "\na) Sua idade em anos: " << idadeanos; 
    
    idademeses = idadeanos * 12; //calculo idade em meses
    cout << "\nb) Sua idade em meses: " << idademeses; 
    
    idadedias = idadeanos * 365; //calculo idade em dias
    cout << "\nc) Sua idade em dias: " << idadedias; 
    
    idadesemanas = idadedias / 7; //calculo em semanas
    cout << "\nd) Sua idade em semanas (aproximadamente): " <<idadesemanas; 
    return 0;
}

