/*
Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a 
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em 
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar
 
X – Altura em que deseja pregar o quadro
Y – Distância em que deverá ficar a escada
Z – Tamanho da escada
 */

#include <cstdlib>
#include <iostream>
#include <math.h>   

using namespace std;

int main(int argc, char** argv) {
    //variaveis de acordo com o que o exercício sugeriu
    float x, y, z; 
    
    cout << "Insira o tamanho da escada: (em metros)"; cin >> z;
    cout << "Insira a altura que deseja pregar o quadro: (em metros)"; cin >> x; 
    
    //calculo para encontrar o cateto adjascente, ou seja, a distancia em que deverá ficar a escada
    y = sqrt((z * z) - (x * x));
    
    cout << "\nA distância em que deverá ficar a escada é: " << y; 
    return 0;
}

