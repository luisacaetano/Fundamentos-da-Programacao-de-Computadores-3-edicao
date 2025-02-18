/*
 * Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem. 
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Sênior Acima de 30
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float idade; 
    
    cout << "Insira sua idade: "; cin >> idade; 
    //verificando a idade para mostrar a categoria correta
    if (idade < 5) {
        cout << "\nMuito novo para entrar na categoria INFANTIL!"; 
    } else if (idade >= 5 && idade <= 7) {
        cout << "\nCategoria INFANTIL!"; 
    } else if (idade >= 8 && idade <= 10) {
        cout << "\nCategoria JUVENIL!"; 
    } else if (idade >=  11 && idade <= 15) {
        cout << "\nCategoria ADOLESCENTE!"; 
    } else if (idade >= 16 && idade <= 30) {
        cout << "\nCategoria ADULTO!";
    } else {
        cout << "\nCategoria SÊNIOR!"; 
    }
    return 0;
}

