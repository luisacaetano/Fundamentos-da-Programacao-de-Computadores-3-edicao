/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. 
Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor; 
b) o valor correspondente aos impostos; 
c) o preço final do veículo.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float precofabrica, percentuallucro, percentualimpostos, precolucro, precoimposto, precofinal; 
    
    cout << "Insira o preço de fábrica de um veículo: "; cin >> precofabrica; 
    cout << "Insira o percentual de lucro do distribuidor do veículo: "; cin >> percentuallucro; 
    cout << "Insira o percentual de impostos do veículo: "; cin >> percentualimpostos; 
    
    precolucro = (precofabrica * (percentuallucro/100)); //calculo para o valor do lucro do distribuidor
    cout << "\nValor correspondente ao lucro do distribuidor: R$" << precolucro; 
    
    precoimposto = (precofabrica * (percentualimpostos/100)); //calculo para o valor correspondente aos impostos
    cout << "\nValor correspondente aos impostos: R$" << precoimposto;
    
    precofinal = precofabrica + precolucro + precoimposto; //valor final
    cout << "\nPreço final do veículo: R$" <<precofinal;     
    
    return 0;
}

