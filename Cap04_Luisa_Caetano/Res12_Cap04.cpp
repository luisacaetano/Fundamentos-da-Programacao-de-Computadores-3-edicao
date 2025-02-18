/*
Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor Não tem aumento
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int opcao; 
    float salario, aumento, novosalario; 
    
    cout << "CARGOS DE FUNCIONÁRIOS"; 
    cout << "\n1. Escrituário."; 
    cout << "\n2. Secretário. "; 
    cout << "\n3. Caixa.";
    cout << "\n4. Gerente.";
    cout << "\n5. Diretor."; 
    cout << "\nEscolha uma das opções acima: "; cin >> opcao;
    cout << "Insira seu salário atual: R$"; cin >> salario; 
    
    //verificando cada opcao
    if (opcao == 1) {
        cout << "\nO cargo selecionado é Escrituário."; 
        aumento = (salario * 0.5); 
        cout << "\nO valor de aumento será de 50%, equivalente a: R$" << aumento; 
        novosalario = aumento + salario; 
        cout << "\nSeu novo salário será de: R$" << novosalario; 
    } else if (opcao == 2) {
        cout << "\nO cargo selecionado é Secretário."; 
        aumento = (salario * 0.35); 
        cout << "\nO valor de aumento será de 35%, equivalente a: R$" << aumento; 
        novosalario = aumento + salario; 
        cout << "\nSeu novo salário será de: R$" << novosalario; 
    } else if (opcao == 3) {
        cout << "\nO cargo selecionado é Caixa."; 
        aumento = (salario * 0.20); 
        cout << "\nO valor de aumento será de 20%, equivalente a: R$" << aumento; 
        novosalario = aumento + salario; 
        cout << "\nSeu novo salário será de: R$" << novosalario; 
    } else if (opcao == 4) {
        cout << "\nO cargo selecionado é Gerente."; 
        aumento = (salario * 0.10); 
        cout << "\nO valor de aumento será de 10%, equivalente a: R$" << aumento; 
        novosalario = aumento + salario; 
        cout << "\nSeu novo salário será de: R$" << novosalario; 
    } else if (opcao == 5) {
        cout << "\nO cargo selecionado é Diretor."; 
        cout << "\nNão haverá aumento para esse cargo.";
    } else {
        cout << "Opção Inválida!";
    }
    return 0;
}

