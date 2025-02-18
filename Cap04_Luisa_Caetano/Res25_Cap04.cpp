/*
Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em que 
se localiza esse ângulo. Considere os quadrantes da trigonometria e, para ângulos maiores que 360º ou 
menores que −360º, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário 
ou anti-horário)
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    int angulo, voltas, resto; 
    
    cout << "Insira o ângulo (em graus): "; cin >> angulo; 
    
    //calculo do angulo maior que 0
    if (angulo > 0) {
        cout << "\nSentido horário"; 
        voltas = angulo / 360;
        if (angulo >= 0 && angulo <= 90) {
            cout << "\nEle está no primeiro quadrante. ";
        } else if (angulo > 90 && angulo <= 180) {
            cout << "\nEle está no segundo quadrante. ";
        } else if (angulo > 180 && angulo <= 270) {
            cout << "\nEle está no terceiro quadrante. ";
        } else {
            cout << "\nEle está no quarto quadrante. ";
        }
        //calculo do angulo estacionario
    } else if (angulo == 0) {
        cout << "\nSentido estacionário"; 
        //calculo do angulo negativo
    } else if (angulo < 0) {
        voltas = angulo / -360;
        cout << "\nSentido anti-horário"; 
        if (angulo < -1 && angulo >= -90) {
            cout << "\nEle está no quarto quadrante. ";
        } else if (angulo < -90 && angulo >= -180) {
            cout << "\nEle está no terceiro quadrante. ";
        } else if (angulo >= -180 && angulo >= -270) {
            cout << "\nEle está no segundo quadrante. ";
        } else {
            cout << "\nEle está no primeiro quadrante. ";
        }
    }
    cout << "\nVoltas: " << voltas; 

    return 0;
}
