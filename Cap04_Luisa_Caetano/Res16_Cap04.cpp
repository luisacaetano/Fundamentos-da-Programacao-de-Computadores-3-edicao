/*
Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto
poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher 
pelo menos um dos requisitos a seguir:
 * 
 * 
Faça um programa que receba o preço atual e a venda média mensal do produto, calcule e mostre o 
novo preço.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float precoatual, novopreco, vendamediamensal; 
    
    cout << "Insira o preço atual do produto: "; cin >> precoatual;
    cout << "Insira a venda média mensal do produto: "; cin >> vendamediamensal;
    
    //|| significa ou
    if (vendamediamensal < 500 || precoatual < 30) {
        novopreco = (precoatual * 0.1) + precoatual; 
        cout << "\nEsse produto irá receber 10% de aumento, o novo preço será de: R$" << novopreco; 
    } else if (vendamediamensal >= 500 && vendamediamensal < 1200 || precoatual >= 30 && precoatual < 80) {
        novopreco = (precoatual * 0.15) + precoatual; 
        cout << "\nEsse produto irá receber 15% de aumento, o novo preço será de: R$" << novopreco; 
    } else {
        novopreco = precoatual - (precoatual * 0.20); 
        cout << "\nEsse produto irá receber 20% de desconto, o novo preço será de: R$" << novopreco; 
    }
    return 0;
}

