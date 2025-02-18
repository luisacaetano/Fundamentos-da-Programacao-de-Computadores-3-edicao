/*
Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.
Até R$ 350,00 R$ 100,00
R$ 350,00 R$ 600,00 R$ 75,00
R$ 600,00 R$ 900,00 R$ 50,00
Acima de R$ 900,00 R$ 35,00
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    float salariobruto, gratificacao, salarioatual;
    
    cout << "Insira o valor do salário bruto: R$"; cin >> salariobruto;
    
    //calculo do novo salario
    if (salariobruto <= 350) {
        gratificacao = 100; 
        salarioatual = (gratificacao + salariobruto) - (salariobruto * 0.07); 
        cout << "\nSeu salário atual será de: R$" << salarioatual; 
    } else if (salariobruto > 350 && salariobruto < 600) {
        gratificacao = 75; 
        salarioatual =  (gratificacao + salariobruto) - (salariobruto * 0.07); 
        cout << "\nSeu salário atual será de: R$" << salarioatual; 
    } else if (salariobruto >= 600 && salariobruto <= 900) {
        gratificacao = 50; 
        salarioatual = (gratificacao + salariobruto) - (salariobruto * 0.07); 
        cout << "\nSeu salário atual será de: R$" << salarioatual; 
    } else {
        gratificacao = 35; 
        salarioatual = (gratificacao + salariobruto) - (salariobruto * 0.07); 
        cout << "\nSeu salário atual será de: R$" << salarioatual; 
    }
    
    return 0;
}

