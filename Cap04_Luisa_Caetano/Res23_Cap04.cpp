/*
Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino; V
— vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o número de horas trabalhadas no mês de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver 
digitação de letras, utilize maiúsculas. Calcule e mostre:
■ O coeficiente do salário, de acordo com a tabela a seguir
■ O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coeficiente do salário. 
■ O imposto, de acordo com a tabela a seguir.
■ A gratificação, de acordo com as regras a seguir.
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de 
R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
Turno: Noturno
Número de horas trabalhadas: Superior a 80 horas
■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação. 
■ A classificação, de acordo com a tabela a seguir:
 */
#include <cstdlib>
#include <iostream>
#include <string.h> 

using namespace std;

int main(int argc, char** argv) {
    float salariominimo, horastrab, valorcoeficiente, salariobruto, imposto, gratificacao, auxilio, salarioliquido; 
    char turno, categoria; 
    
    cout << "Insira o valor do salário mínimo: R$"; cin >> salariominimo; 
    cout << "M - Matutino \nV - Vespetino \nN - Noturno ";
    cout << "\nEscolha um dos turnos acima: "; cin >> turno; 
    cout << "O - Operário \nG - Gerente"; 
    cout << "\nEscolha uma das categorias acima: "; cin >> categoria; 
    cout << "Insira o número de horas trabalhadas no mês: "; cin >> horastrab; 
    
    //verificando o turno inserido
    if (turno == 'M') {
        valorcoeficiente = salariominimo * 0.1; 
        salariobruto = horastrab * valorcoeficiente; 
        cout << "\nO valor do coeficiente é: R$" << valorcoeficiente; 
        cout << "\nO salário bruto é: R$" << salariobruto; 
    } else if (turno == 'V'){
        valorcoeficiente = salariominimo * 0.15; 
        salariobruto = horastrab * valorcoeficiente; 
        cout << "\nO valor do coeficiente é: R$" << valorcoeficiente;
        cout << "\nO salário bruto é: R$" << salariobruto; 
    } else if (turno == 'N'){
        valorcoeficiente = salariominimo * 0.12; 
        salariobruto = horastrab * valorcoeficiente; 
        cout << "\nO valor do coeficiente é: R$" << valorcoeficiente;
        cout << "\nO salário bruto é: R$" << salariobruto; 
    } else {
        cout << "\nTurno inserido inválido!";
    }
    
    //verificando a categoria inserida
    if (categoria == 'O' && salariobruto >= 300) {
        imposto = salariobruto * 0.05; 
        cout << "\nO imposto sobre o salário bruto é de: R$" << imposto; 
    } else if (categoria == 'O' && salariobruto < 300) {
        imposto = salariobruto * 0.03; 
        cout << "\nO imposto sobre o salário bruto é de: R$" << imposto; 
    } else if (categoria == 'G' && salariobruto >= 400) {
        imposto = salariobruto * 0.06; 
        cout << "\nO imposto sobre o salário bruto é de: R$" << imposto; 
    } else if (categoria == 'G' && salariobruto < 400) {
        imposto = salariobruto * 0.04; 
        cout << "\nO imposto sobre o salário bruto é de: R$" << imposto; 
    } else {
        cout << "\nCategoria inserida inválida!";
    }
    
    //verificando o valor da gratificaçao
    if (turno == 'N' && horastrab > 80) {
        gratificacao = 50;
        cout << "\nGratificação de R$50,00"; 
    } else {
        gratificacao = 30; 
        cout << "\nGratificação de R$30,00"; 
    }

    //verificando o valor do auxilio alimentacao
    if (categoria == 'O' || valorcoeficiente <=25) {
        auxilio = salariobruto / 3; 
        cout << "\nO valor do seu auxílio alimentação será de: R$" << auxilio; 
    } else {
        auxilio = salariobruto / 2; 
        cout << "\nO valor do seu auxílio alimentação será de: R$" << auxilio; 
    }
    
    //salario liquido
    salarioliquido = salariobruto - imposto + gratificacao + auxilio; 
    cout << "\nO valor do seu salário líquido será de: R$" << salarioliquido; 
    
    //verificando a classificacao
    if (salarioliquido < 350) {
        cout << "\nEsse funcionário está mal remunerado"; 
    } else if (salarioliquido >= 350 && salarioliquido <= 600) {
        cout << "\nO salário deste funcionário está normal"; 
    } else {
        cout << "\nEsse funcionário está bem remunerado"; 
    }
    return 0;
}

