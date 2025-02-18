// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salarioantigo, salarionovo;
    int percentual; 

    cout << "Insira o salário do funcionário para calcular o salário novo:\n\n";
    cout << "Insira o salário atual do funcionário: "; cin >> salarioantigo;
    cout << "Insira o percentual de aumento deste funcionário (sem o símbolo de %): "; cin >> percentual; 

    salarionovo = salarioantigo + ((salarioantigo * percentual)/100); //calculo com porcentagem
    cout << "\nResultado do salário atualizado: " << salarionovo; //Resultado
    return 0;
}