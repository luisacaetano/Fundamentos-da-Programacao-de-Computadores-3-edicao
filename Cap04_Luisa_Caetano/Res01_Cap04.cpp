/*
A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas 
obedece aos pesos a seguir:
 
Trabalho de laboratório: 2
Avaliação semestral: 3
Exame final: 5 

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue 
a tabela:
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float notafinal, trabalholaboratorio, avaliacaosemestral, examefinal, media; 
    
    cout << "Insira a nota do trabalho de laboratório: "; cin >> trabalholaboratorio; 
    cout << "Insira a nota da avaliação semestral: "; cin >> avaliacaosemestral; 
    cout << "Insira a nota do exame final: "; cin >> examefinal; 
    
    //calculo da media ponderada
    media = ((trabalholaboratorio * 2) + (avaliacaosemestral * 3) + (examefinal * 5)) / (2 + 3 + 5);
    cout << "\nMédia ponderada: "  << media; 
    
    //if e else if para verificar a media e o conceito
    if (media >= 8 && media <= 10) {
        cout << "\nObtive o conceito: A"; 
    } else if (media >= 7 && media < 8) {
        cout << "\nObtive o conceito: B"; 
    } else if (media >=6 && media < 7) {
        cout << "\nObtive o conceito: C"; 
    } else if (media >=5 && media < 6) {
        cout << "\nObtive o conceito: D"; 
    } else {
        cout << "\nObtive o conceito: E"; 
    }
    return 0;
}

