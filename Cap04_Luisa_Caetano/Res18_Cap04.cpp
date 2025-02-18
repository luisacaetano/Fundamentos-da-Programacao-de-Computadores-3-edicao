/*
Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um 
triângulo, escreva uma mensagem. Considere que:
■■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados; 
■■ chama-se equilátero o triângulo que tem três lados iguais; 
■■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
■■ recebe o nome de escaleno o triângulo que tem os três lados diferentes.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int x, y, z; 
    //variaveis escolhidas pelo exercicio
    
    cout << "Insira o primeiro lado do triângulo: "; cin >> x; 
    cout << "Insira o segundo lado do triângulo: "; cin >> y; 
    cout << "Insira o terceiro lado do triângulo: "; cin >> z; 
    
    //calculo para cada lado do triângulo
    if (x > (y + z)) {
        cout << "\nEsses lados não formam um triângulo!"; 
    } else if (y > (x + z)) {
        cout << "\nEsses lados não formam um triângulo!"; 
    } else if (z > (x + y)) {
        cout << "\nEsses lados não formam um triângulo!"; 
    } else {
        if (x == y  && x == z) {
            cout << "\nEsse é um triângulo equilátero!";
        } else if (x == y) {
            cout << "\nEsse é um triângulo isósceles!";
        } else if (x == z) {
            cout << "\nEsse é um triângulo isósceles!";
        } else if (z == y) {
            cout << "\nEsse é um triângulo isósceles!";
        } else {
            cout << "\nEsse é um triângulo escaleno!";
        }
    }
    return 0;
}

