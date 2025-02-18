/*
Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o 
segundo, o mês e o terceiro, o ano
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int dia1, mes1, ano1, dia2, mes2, ano2;
    //dados da primeira data
    cout << "INSIRA A PRIMEIRA DATA"; 
    cout << "\nInsira o dia (00): "; cin >> dia1; 
    cout << "Insira o mês (00): "; cin >> mes1;
    cout << "Insira o ano (0000): "; cin >> ano1; 
    // dados da segunda data
    cout << "\nINSIRA A SEGUNDA DATA"; 
    cout << "\nInsira o dia (00): "; cin >> dia2; 
    cout << "Insira o mês (00): "; cin >> mes2;
    cout << "Insira o ano (0000): "; cin >> ano2; 
    
    
    if (ano1 > ano2) {
        cout << "\nA maior data é a: " << dia1 << "/" << mes1 << "/" << ano1; 
        } else if (ano2 > ano1) {
            cout << "\nA maior data é a: " << dia2 << "/" << mes2 << "/" << ano2; 
        } else if (ano1 == ano2) {
            if (mes1 > mes2) {
                cout << "\nA maior data é a: " << dia1 << "/" << mes1 << "/" << ano1; 
            } else if (mes2 > mes1) {
                cout << "\nA maior data é a: " << dia2 << "/" << mes2 << "/" << ano2; 
            } else if (mes1 == mes2) {
                if (dia1 > dia2) {
                    cout << "\nA maior data é a: " << dia1 << "/" << mes1 << "/" << ano1; 
                } else if (dia2 > dia1) {
                    cout << "\nA maior data é a: " << dia2 << "/" << mes2 << "/" << ano2; 
                } else {
                    cout << "\nAs datas são iguais!"; 
            }
        }
    }
    return 0;

}
