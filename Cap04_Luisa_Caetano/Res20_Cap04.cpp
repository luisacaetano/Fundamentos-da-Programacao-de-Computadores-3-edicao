/*
Faça um programa que receba:
■■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre 
válida, isto é, um número inteiro entre 1 e 10. 
■■ O peso do produto em quilos. 
■■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 1 e 3.
 * 
Calcule e mostre:
■■ o peso do produto convertido em gramas; 
■■ o preço total do produto comprado; 
■■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende 
do país de origem; 
■■ o valor total, preço total do produto mais imposto. 
 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int codigoproduto, codigopais; 
    float peso, imposto, precogramas, precoproduto, gramas, valorfinal;  
    
    cout << "Insira o código do produto comprado (1 a 10): "; cin >> codigoproduto; 
    cout << "Insira o peso do produto em quilos: "; cin >> peso; 
    cout << "Insira o código do país de origem (1 a 3): "; cin >> codigopais; 
  
    gramas = peso * 1000; //transformando kg em gramas
    //precoproduto = gramas * precogramas;   //descobrindo o valor do produto 
    
    //verificando o codigo do produto
    if (codigoproduto >= 1 && codigoproduto <= 4) {
        precogramas = 10; 
        precoproduto = gramas * precogramas;
        cout << "\nEste produto pesa: " << gramas << " gramas"; 
        cout << "\nO preço deste produto é: R$" << precoproduto; 
    } else if (codigoproduto >= 5 && codigoproduto <= 7){
        precogramas = 25; 
        precoproduto = gramas * precogramas;
        cout << "\nEste produto pesa: " << gramas << " gramas";
        cout << "\nO preço deste produto é: R$" << precoproduto; 
    } else if (codigoproduto >= 8 && codigoproduto <= 10) {
        precogramas = 35; 
        precoproduto = gramas * precogramas;
        cout << "\nEste produto pesa: " << gramas << " gramas";
        cout << "\nO preço deste produto é: R$" << precoproduto; 
    } else {
        cout << "\nProduto Inválido!"; 
    } 
    
    //verificando o codigo do pais
    if (codigopais == 1) {
        cout << "\nEste produto não contém imposto!"; 
    } else if (codigopais == 2) {
        imposto = (precoproduto * 0.15); 
        valorfinal = precoproduto + imposto;
        cout << "\nEste produto contém 15% de imposto, resultando no total de: R$" << imposto; 
        cout << "\nO valor final será de: R$" << valorfinal; 
    } else if (codigopais == 3) {
        imposto = (precoproduto * 0.25); 
        valorfinal = precoproduto + imposto;
        cout << "\nEste produto contém 25% de imposto, resultando no total de: R$" << imposto; 
        cout << "\nO valor final será de: R$" << valorfinal; 
    } else {
        cout << "\Código do País Inválido!"; 
    }
    return 0; 
}

