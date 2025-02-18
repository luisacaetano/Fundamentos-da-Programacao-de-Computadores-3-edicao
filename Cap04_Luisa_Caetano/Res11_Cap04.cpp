/*
Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos), 
sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e 
terminar no dia seguinte
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    int horainicio, minutoinicio, horatermino, minutotermino, calculoinicio, calculotermino; 
    int segundos, minutos, horas, resto;
    
    cout << "Insira a hora que se inicia o jogo (00): "; cin >> horainicio;
    cout << "Agora insira os minutos (00): "; cin >> minutoinicio; 
    
    cout << "\nInsira a hora que termina o jogo (00): "; cin >> horatermino;
    cout << "Agora insira os minutos (00): "; cin >> minutotermino; 
    
    calculoinicio = (horainicio * 60) + minutoinicio;
    calculotermino = (horatermino * 60) + minutotermino; 
    
    if (calculotermino > calculoinicio) {
        minutos = calculotermino - calculoinicio; 
        if (minutos >= 60) {
            //transformando em segundos e dividindo para virar horas!!
            segundos = minutos * 60; 
            horas = segundos / 3600; 
         
            //pegando o resto e transformando em minutos
            resto = (segundos % 3600 )/60; 
         
            cout << "\nO jogo durou " << (int) horas << " horas e " << resto << " minutos."; 
        
        } else {
            //transfornando em minutos
        cout << "\nO jogo durou apenas " << minutos << " minutos."; 
        }
    } else { 
        cout << "\nHorário inválido!"; 
    }
    return 0; 
}
