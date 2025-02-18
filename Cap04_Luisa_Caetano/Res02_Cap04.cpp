/*
Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão 
tirar para serem aprovados, considerando que a média exigida é 6,0

0,0 3,0 Reprovado
3,0 7,0 Exame
7,0 10,0 Aprovado

 */
#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {
    float nota1, nota2, nota3, media, restante; 
    
    cout << "Insira a primeira nota: "; cin >> nota1; 
    cout << "Insira a segunda nota: "; cin >> nota2; 
    cout << "Insira a terceira nota: "; cin >> nota3; 
    
    //if e else para comparar a media e verificar se esta aprovado ou nao 
    media = (nota1 + nota2 + nota3) / 3; 
    if (media >= 0 && media < 3) {
        cout << "\nVocê está REPROVADO!"; 
    } else if (media >=3 && media < 6) {
        cout << "\nVocê esta de EXAME!"; 
        restante = 6 - media; 
        cout << "\nFaltam " << restante << " pontos para você passar!"; 
    } else {
        cout << "\nVocê está APROVADO!"; 
    }
    return 0;
}

