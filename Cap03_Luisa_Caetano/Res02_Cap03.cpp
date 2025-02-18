// Faça um programa que receba três notas, calcule e mostre a média aritmética.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float n1, n2, n3, media; 
    cout << "Digite três notas:\n\n"; //Mensagem antes da leitura e pular uma linha
    cout << "Digite a primeira nota: "; cin >> n1;
    cout << "Digite a segunda nota: "; cin >> n2;
    cout << "Digite a terceira nota: "; cin >> n3; //Recebe as três notas
    
    media = (n1 + n2 + n3)/3; //Soma os números digitados e divide por 3 
    cout << "\nResultado da média aritmética: " << media; //Resultado
    return 0;
}