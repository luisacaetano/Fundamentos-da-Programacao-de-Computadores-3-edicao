//  Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salarioantigo, salarionovo; 

    cout << "Insira o salário do funcionário para calcular o salário novo: "; cin >> salarioantigo; 

    salarionovo = salarioantigo + (salarioantigo * 0.25); //calculo com porcentagem
    cout << "\nResultado do salário atualizado: " << salarionovo; //Resultado
    return 0;
}