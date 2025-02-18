/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salariobase, salarionovo;

    cout << "Calculo do salário à receber:\n\n";
    cout << "Insira o salário base do funcionário: "; cin >> salariobase;

    salarionovo = salariobase + (salariobase * 0.05) - (salariobase * 0.07); //calculo de porcentagem
    cout << "\nResultado do salário à receber: " << salarionovo; //Resultado
    return 0;
}
