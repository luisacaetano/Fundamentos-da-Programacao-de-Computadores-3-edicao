/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a 
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float nota1, nota2, nota3, nota4, media; 
    
    cout << "Insira a primeira nota: "; cin >> nota1; 
    cout << "Insira a segunda nota: "; cin >> nota2; 
    cout << "Insira a terceira nota: "; cin >> nota3; 
    cout << "Insira a quarta nota: "; cin >> nota4;
    
    //media aritmetica
    media = (nota1 + nota2 + nota3 + nota4) /4; 
    cout << "\nSua média é: " << media; 
    
    if (media >= 7) {
     cout << "\nVocê está APROVADO!";    
    } else {
        cout << "\nVocê está REPROVADO!";    
    }
    return 0;
}

