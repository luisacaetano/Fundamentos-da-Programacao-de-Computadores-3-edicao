/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salariobase, salarionovo;

    cout << "Calculo do salário à receber:\n\n";
    cout << "Insira o salário base do funcionário: "; cin >> salariobase;

    salarionovo = salariobase + 50 - (salariobase * 0.10); //calculo de porcentagem
    cout << "\nResultado do salário à receber: " << salarionovo; //Resultado
    return 0;
}
