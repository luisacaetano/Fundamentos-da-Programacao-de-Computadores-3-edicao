// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float n1, p1, n2, p2, n3, p3, media; 
    cout << "Digite três notas e seus respectivos pesos:\n\n"; //Mensagem antes da leitura e pular uma linha
    cout << "Digite a primeira nota: "; cin >> n1;
    cout << "Agora insira seu respectivo peso: "; cin >> p1;
    cout << "\nDigite a segunda nota: "; cin >> n2;
    cout << "Agora insira seu respectivo peso: "; cin >> p2;
    cout << "\nDigite a terceira nota: "; cin >> n3; //Recebe as três notas e seus respectivos pesos
    cout << "Agora insira seu respectivo peso: "; cin >> p3;
    
    media = ((n1*p1)+ (n2*p2) + (n3*p3))/(p1 + p2 + p3); //Soma de todas as notas vezes seu respectivo peso dividido pela soma dos pesos
    cout << "\nResultado da média ponderada: " << media; //Resultado
    return 0;
}