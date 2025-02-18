/*
 Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra 
na tabela a seguir: 
0,0 3,0 Reprovado
3,0 7,0 Exame
7,0 10,0 Aprovado
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float nota1, nota2, media; 
    
    cout << "Insira a primeira nota: "; cin >> nota1;
    cout << "Insira a segunda nota: "; cin >> nota2; 
    
    //calculo media aritmetica
    media = (nota1 + nota2)/2;
    
    if (media >= 0 && media < 3) {
        cout << "\nVocê está REPROVADO!"; 
    } else if (media >= 3 && media < 7) {
        cout << "\nVocê está de EXAME!"; 
    } else {
        cout << "\nVocê está APROVADO|!"; 
    }
    return 0;
}

