/*
. Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do 
programa. As opções são: 
a) O primeiro número elevado ao segundo número. 
b) Raiz quadrada de cada um dos números. 
c) Raiz cúbica de cada um dos números. 
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    int num1, num2, calculo1;
    float raiz1, raiz2, raiz3, raiz4; 
    //calculo1 = priemiro numero elevado ao segundo
    char opcao; 
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    cout << "A - O primeiro número elevado ao segundo número"; 
    cout << "\nB - Raiz quadrada de cada um dos números"; 
    cout << "\nC - Raiz cúbica de cada um dos números"; 
    cout << "\nEscolha uma das opções acima: "; cin >> opcao; 
    
    //numeros elevados 
    if (opcao == 'A') {
        calculo1 = pow(num1, num2); 
        cout << "\nO primeiro número elevado ao segundo é: " << calculo1; 
    //raiz quadrada dos dois numeros
    } else if (opcao == 'B') {
        raiz1 = sqrt(num1); 
        raiz2 = sqrt(num2);
        cout << "\nA raiz quadrada do primeiro número é: " << raiz1; 
        cout << "\nA raiz quadrada do segundo número é: " << raiz2; 
    //raiz cubica dos dois numeros
    } else if (opcao == 'C') {
        raiz3 = cbrt(num1); 
        raiz4 = cbrt(num2); 
        cout << "\nA raiz cúbica do primeiro número é: " << raiz3; 
        cout << "\nA raiz cúbica do segundo número é: " << raiz4; 
    } else {
        cout << "\nOpção INVÁLIDA!"; 
    }
    return 0;
}

