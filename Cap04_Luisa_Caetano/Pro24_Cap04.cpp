/*
. Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário) 
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração). 
Calcule e mostre:
■■ O valor do aumento, usando as regras que se seguem
■■ O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5% 
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
■■ O novo preço, ou seja, o preço mais aumento menos imposto. 
■■ A classificação, usando as regras a seguir.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float preco, aumento, imposto, novopreco; 
    int categoria; 
    char situacao;
    
    cout << "Insira o valor do produto: R$"; cin >> preco; 
    cout << "1 - Limpeza"; 
    cout << "\n2 - Alimentação"; 
    cout << "\n3 - Vestuário"; 
    cout << "\nInsira uma das categorias acima: "; cin >> categoria; 
    cout << "R - Produtos que necessitam de refrigaração"; 
    cout << "\nN - Produtos que não necessitam de refrigeração"; 
    cout << "\nEscolha umas das situações acima: "; cin >> situacao; 
    
    //verificando o preco a partir da categoria inserida
    if (preco <= 25) {
        if (categoria == 1) {
            aumento = preco * 0.05; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else if (categoria == 2) {
            aumento = preco * 0.08; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else if (categoria == 3) {
            aumento = preco * 0.10; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else {
            cout << "\nCategoria INVÁLIDA!"; 
        }
    } else {
        if (categoria == 1) {
            aumento = preco * 0.12; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else if (categoria == 2) {
            aumento = preco * 0.15; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else if (categoria == 3) {
            aumento = preco * 0.18; 
            cout << "\nO valor do aumento será de: R$" << aumento;
        } else {
            cout << "\nCategoria INVÁLIDA!"; 
        }
    }
    
    //verificando o valor do imposto 
    if (categoria == 2 || situacao == 'R') {
        imposto = preco * 0.05; 
        cout << "\nO valor do imposto é de: R$" << imposto; 
    } else {
        imposto = preco * 0.08; 
        cout << "\nO valor do imposto é de: R$" << imposto; 
    }
    
    //calculando o novo preco 
    novopreco = preco + aumento - imposto; 
    cout << "\nO novo preço será: R$" << novopreco; 
    
    //verificando a classificacao
    if (novopreco <= 50) {
        cout << "\nEste é um produto BARATO!"; 
    } else if (novopreco > 50 && novopreco < 120) {
        cout << "\nO preço deste produto é NORMAL!"; 
    } else {
        cout << "\nEste é um produto CARO!"; 
    }
    return 0;
}

