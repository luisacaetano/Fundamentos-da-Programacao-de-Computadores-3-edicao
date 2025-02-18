/*
 Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário. 
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa. 
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
 */
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
    
int main(int argc, char** argv) {
    int num1, num2, opcao, diferenca, produto; 
    float media, divisao;
    
    cout << "Insira o primeiro número: "; cin >> num1; 
    cout << "Insira o segundo número: "; cin >> num2; 
    cout << "1. Média entre os números digitados"; 
    cout << "\n2. Diferença do maior pelo menor"; 
    cout << "\n3. Produto entre os números digitados"; 
    cout << "\n4. Divisão do primeiro pelo segundo"; 
    cout << "\nEscolha uma das opções acima: "; cin >> opcao; 
    
    //media aritmetica
    if (opcao == 1) {
        media = (num1 + num2) / 2; 
        cout << "\nA média entre os números digitados é: " << media; 
    
    // diferenca do maior pelo menor
    } else if (opcao == 2){
        if (num1 >= num2) {
            diferenca = num1 - num2; 
            cout << "\nA diferença do maior para o menor é: " << diferenca; 
        } else {
            diferenca = num2 - num1; 
            cout << "\nA diferença do maior para o menor é: " << diferenca; 
        }
        
    //produto dos dois numeros
    } else if (opcao == 3) {
        produto = num1 * num2; 
        cout << "\nO produto dos dois números é: " << produto; 
        
    //divisao do primeiro pelo segundo
    } else if (opcao == 4) {
        divisao = num1 / num2; 
        cout << "\nA divisão do primeiro número pelo segundo é: " << divisao; 
    } else {
        cout << "Opção INVÁLIDA!"; 
    }
    
    return 0;
}

