/*
Sabe-se que: 
pé = 12 polegadas 
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas; 
b) jardas; 
c) milhas.
 */
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int polegadas, pes, jardas, milhas; 
    
    cout << "Insira a medida em pés para realizar as conversões: "; cin >> pes; 
    
    polegadas = pes * 12; // Calculo polegadas
    cout << "\na) Polegadas: " << polegadas; 
    
    jardas = pes / 3; // Calculo jardas
    cout << "\nb) Jardas: " << jardas; 
    
    milhas = (jardas / 1760); //Calculo milhas
    cout << "\nc) Milhas: " << milhas; 
    
    return 0; 
}