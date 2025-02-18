/*
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número 
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir: 
a) a hora trabalhada vale 1/8 do salário mínimo; 
b) a hora extra vale 1/4 do salário mínimo; 
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor 
da hora extra; 
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras
 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float a, b, c, d, e, f, g , h; 
    /* 
     variáveis: 
     a - horas trabalhadas 
     b - valor do salário mínimo
     c - número de horas extras trabalhadas 
     d - valor da hora trabalhada 
     e - valor da hora extra 
     f - salario bruto 
     g - valor a receber pelas horas extras
     h - salario a receber
     */
    
    cout << "Insira o número de horas trabalhadas: "; cin >> a; 
    cout << "Insira o valor do salário mínimo: "; cin >> b; 
    cout << "Insira o número de horas extras trabalhadas: "; cin >> c; 
        
    // a) a hora trabalhada vale 1/8 do salário mínimo; 
    d = b / 8; //calculo do valor da hora trabalhada
    cout << "\na) O valor da hora trabalhada é de: R$" << d; 
    
    //b) a hora extra vale 1/4 do salário mínimo; 
    e = b / 4; //calculo do valor da hora extra
    cout << "\nb) O valor da hora extra trabalhada é de: R$" << e; 
    
    //c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
    f = a * d; // calculo do salario bruto 
    cout << "\nc) O salário bruto das horas trabalhadas é de: R$" << f; 
    
    // d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra
    g = c * e; //quantia a receber pelas horas extras
    cout << "\nd) A quantia a receber pelas horas extras é de: R$" << g; 
    
    //e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras
    h = f + g; 
    cout << "\ne) O salário final a receber é de: R$" << h; 
    
    return 0;
}
