/*
Faça um programa que receba:
■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do 
estado seja sempre válida, isto é, um número inteiro entre 1 e 5; 
■■ o peso da carga do caminhão em toneladas; 
■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro 
entre 10 e 40.
 * 
Calcule e mostre:
■■ o peso da carga do caminhão convertido em quilos; 
■■ o preço da carga do caminhão; 
■■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem; 
■■ o valor total transportado pelo caminhão, preço da carga mais imposto.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int codigocaminhao, codigocarga; 
    float pesotoneladas, pesoquilo, preco, precoquilo, imposto, precofinal; 
    
    cout << "Insira o código de origem da carga de um caminhão: "; cin >> codigocaminhao; 
    cout << "Insira o peso da carga do caminhão (toneladas): "; cin >> pesotoneladas; 
    cout << "Insira o código da carga: "; cin >> codigocarga; 
    
    pesoquilo = pesotoneladas * 1000; //transformando de toneladas para quilo
    
    //verificando se o codigo da carga é válido
    if (codigocarga >= 10 && codigocarga <=20) {
        precoquilo = 100; 
        preco = precoquilo * pesoquilo; 
        cout << "\nO peso da carga do caminhão convertido em quilos é: " << pesoquilo << " kg"; 
        cout << "\nO preço da carga do caminhão é de: R$" << preco; 
    } else if (codigocarga >= 21 && codigocarga <=30) {
        precoquilo = 250; 
        preco = precoquilo * pesoquilo; 
        cout << "\nO peso da carga do caminhão convertido em quilos é: " << pesoquilo << " kg"; 
        cout << "\nO preço da carga do caminhão é de: R$" << preco; 
    } else if (codigocarga >= 31 && codigocarga <= 40) {
        precoquilo = 340; 
        preco = precoquilo * pesoquilo; 
        cout << "\nO peso da carga do caminhão convertido em quilos é: " << pesoquilo << " kg"; 
        cout << "\nO preço da carga do caminhão é de: R$" << preco; 
    } else {
        cout << "\nCódigo da carga inválido!"; 
    }
    //verificando se o codigo do caminhao é valido
    if (codigocaminhao == 1) {
        imposto = preco * 0.35; 
        precofinal = preco + imposto; 
        cout << "\nO imposto cobrado neste estado é de R$" << imposto; 
        cout << "\nO preço final deste produto é de: R$" << precofinal; 
    } else if (codigocaminhao == 2) {
        imposto = preco * 0.25; 
        precofinal = preco + imposto;
        cout << "\nO imposto cobrado neste estado é de R$" << imposto;
        cout << "\nO preço final deste produto é de: R$" << precofinal;
    } else if (codigocaminhao == 3) {
        imposto = preco * 0.15; 
        precofinal = preco + imposto;
        cout << "\nO imposto cobrado neste estado é de R$" << imposto; 
        cout << "\nO preço final deste produto é de: R$" << precofinal;
    } else if (codigocaminhao == 4) {
        imposto = preco * 0.5; 
        precofinal = preco + imposto;
        cout << "\nO imposto cobrado neste estado é de R$" << imposto; 
        cout << "\nO preço final deste produto é de: R$" << precofinal;
    } else if (codigocaminhao == 5) {
        imposto = 0; 
        cout << "\nEsse estado é isento de imposto!"; 
    } else {
        cout << "\nCódigo de estado inválido!"; 
    }
    return 0;
}

