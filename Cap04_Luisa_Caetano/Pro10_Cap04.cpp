/*
O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
Até R$ 12.000,00 5 isento
Entre R$ 12.000,00 e R$ 25.000,00 10 15
Acima de R$ 25.000,00 15 20
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float custofabrica, valorfinal; 
    
    cout << "Insira o custo de fábrica do veículo: R$"; cin >> custofabrica; 
    
    //calculo do valor final
    if (custofabrica < 12000) {
        valorfinal = (custofabrica * 0.05) + custofabrica; 
        cout << "\nO valor final deste veículo é: R$" << valorfinal; 
    } else if (custofabrica >= 12000 && custofabrica <= 25000) {
        valorfinal = (custofabrica * 0.10) + (custofabrica * 0.15) + custofabrica; 
        cout << "\nO valor final deste veículo é: R$" << valorfinal; 
    } else {
        valorfinal = (custofabrica * 0.15) + (custofabrica * 0.20) + custofabrica; 
        cout << "\nO valor final deste veículo é: R$" << valorfinal; 
    }
    return 0;
}