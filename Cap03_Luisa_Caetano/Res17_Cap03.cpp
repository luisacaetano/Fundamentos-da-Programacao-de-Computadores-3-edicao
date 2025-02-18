/* 
Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois 
cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga 
CPMF de 0,38% e o saldo inicial da conta está zerado
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float salario, cheque1, cheque2, cpmf=0.0038, saldofinal; 
    
    cout << "Insira o valor do salário: R$"; cin >> salario; 
    cout << "Insira o valor do primeiro cheque emitido: R$"; cin >> cheque1;
    cout << "Insira o valor do segundo cheque emitido: R$"; cin >> cheque2; 
    
    saldofinal = salario - (cheque1 - (cheque1 * cpmf)) - (cheque2 - (cheque2 * cpmf)); //calculo so saldo final (salario - cpmf do cheque1 - cheque1 - cpmf do cheque2 - cheque2)
    cout << "\nO seu saldo final é de: R$" << saldofinal; 
    
    return 0;
}

