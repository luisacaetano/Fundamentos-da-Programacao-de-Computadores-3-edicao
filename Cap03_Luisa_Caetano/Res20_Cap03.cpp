/*
Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no 
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a medida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham 
com medidas de ângulos em radianos
 */
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    int angulo; 
    float alturaparede, pi=3.14, radiano, escada; 
    
    cout << "Insira a medida do ângulo (em graus) formado pela escada: "; cin >> angulo; 
    cout << "Insira a altura da parede onde está a ponta da escada (em metros): "; cin >> alturaparede; 
    
    radiano = angulo * pi /100; //calculo para encontrar o radiano 
    escada = alturaparede / sin(radiano); //hipotenusa = cateto oposto / seno do raio
    
    cout << "\nA medida da escada é de: " << escada; 
    return 0;
}
