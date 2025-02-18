// Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int n1, n2, n3, n4, soma; 
    cout << "Digite quatro numeros:\n\n"; //Mensagem antes da leitura e pular uma linha
    cout << "Digite o primeiro número: "; cin >> n1; // cin: entrada dos dados
    cout << "Digite o segundo número: "; cin >> n2;
    cout << "Digite o terceiro número: "; cin >> n3;
    cout << "Digite o quarto número: "; cin >> n4; //Recebe os quatro números
    
    soma = n1 + n2 + n3 + n4; //Soma os números digitados
    cout << "\nResultado da soma: " << soma; //Resultado
    return 0;
}