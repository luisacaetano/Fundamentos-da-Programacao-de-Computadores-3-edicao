/*
Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e 
C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números 
digitados sejam diferentes um do outro.

1 A, B e C em ordem crescente.
2 A, B e C em ordem decrescente.
3 O maior número
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int i; 
    float a, b, c; 
    //num1 = a | num2 = b | num3 = c | opcao= i
    
    cout << "Insira o primeiro número: "; cin >> a; 
    cout << "Insira o segundo número: "; cin >> b; 
    cout << "Insira o terceiro número: "; cin >>c; 
    //mostrando os opcoes
    cout << "\n1. Para descobrir a ordem crescentes dos números inseridos."; 
    cout << "\n2. Para descobrir a ordem decrescente dos números inseridos.";
    cout << "\n3. Para descobrir qual o maior número."; 
    cout << "\nSelecione uma das opções acima: "; cin >> i; 
    
    if (i == 1){
        //se selecionar o número 1 - descobrir a ordem crescente
        if (a <= b && a <= c && b <= c) {
            cout << "\nOs números em ordem crescentes são: " << a << ", " << b << ", " << c; 
        } else if (a <= c && a <=b && c <= b) {
            cout << "\nOs números em ordem crescentes são: " << a << ", " << c << ", " << b; 
        } else if (b <= a && b <=c && a <= c) {
            cout << "\nOs números em ordem crescentes são: " << b << ", " << a << ", " << c; 
        } else if (b <= c && b <= a && b <= a) {
            cout << "\nOs números em ordem crescentes são: " << b << ", " << c << ", " << a; 
        } else if (c <= a && c <= b && a <= b) {
            cout << "\nOs números em ordem crescentes são: " << c << ", " << a << ", " << b; 
        } else {
            cout << "\nOs números em ordem crescentes são: " << c << ", " << b << ", " << a; 
        }
    } else if (i == 2) {
        //se selecionar o número 2 - descobrir a ordem decrescente
        if (a >= b && a >= c && b >= c) {
            cout << "\nOs números em ordem decrescente são: " << a << ", " << b << ", " << c; 
        } else if (a >= c && a >=b && c >= b) {
            cout << "\nOs números em ordem decrescente são: " << a << ", " << c << ", " << b; 
        } else if (b >= a && b >=c && a >= c) {
            cout << "\nOs números em ordem decrescente são: " << b << ", " << a << ", " << c; 
        } else if (b >= c && b >= a && b >= a) {
            cout << "\nOs números em ordem decrescente são: " << b << ", " << c << ", " << a; 
        } else if (c >= a && c >= b && a >= b) {
            cout << "\nOs números em ordem decrescente são: " << c << ", " << a << ", " << b; 
        } else {
            cout << "\nOs números em ordem decrescente são: " << c << ", " << b << ", " << a; 
        }
    } else if (i == 3) {
        //se selecionar o numero 3 - maior numero
        if (a >= b && a >= c) {
            cout << "\nO maior número é o: " << a; 
        } else if (b >= a && b >= c) {
            cout << "\nO maior número é o: " << b; 
        } else {
            cout << "\nO maior número é o: " << c; 
        }
    } else {
        //se selecionar outro numero
        cout << "\nOpção inválida!";
    }
        
    return 0;
}

