/*
Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA – 
mês por extenso e hora:minuto.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int dia, mes, ano, hora, minuto; 
    
    cout << "Insira o dia: "; cin >> dia; 
    cout << "Insira o mês: "; cin >> mes; 
    cout << "Insira o ano: "; cin >> ano; 
    cout << "Insira a hora: "; cin >> hora; 
    cout << "Insira os minutos: "; cin >> minuto; 
    //formato de data
    cout << "\n" << dia << "/" << mes << "/" << ano; 
    //formato de hora
    cout << "\n" << hora << ":" << minuto; 
    
    //verificando o mes
    if (mes == 01) {
        cout << "\nMês de janeiro";
    } else if (mes == 02) {
        cout << "\nMês de fevereiro";
    } else if (mes == 03) {
        cout << "\nMês de março";
    } else if (mes == 04){
        cout << "\nMês de abril";
    } else if (mes == 05) {
        cout << "\nMês de maio";
    } else if (mes == 06) {
        cout << "\nMês de junho";
    } else if (mes == 07) {
        cout << "\nMês de julho";
    } else if (mes == 8) {
        cout << "\nMês de agosto";
    } else if (mes == 9) {
        cout << "\nMês de setembro";
    } else if (mes == 10) {
        cout << "\nMês de outubro";
    } else if (mes == 11) {
        cout << "\nMês de novembro";
    } else if (mes == 12) {
        cout << "\nMês de dezembro";
    } else {
        cout << "\nMês inválido!";
    }
    return 0;
}

