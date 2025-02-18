/*
Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
■■ a média aritmética das duas notas de cada aluno; e
■■ a mensagem que está na tabela a seguir:
média ariTméTica mensa gem
Até 3      Reprovado
Entre 3 e 7  Exame
De 7 para cima Aprovado
■ o total de alunos aprovados;
■■ o total de alunos de exame;
■■ o total de alunos reprovados;
■■ a média da classe. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float nota1, nota2, mediaaritmetica, mediaturma;
    int cont_aprovados = 0, cont_exame = 0, cont_reprovados= 0;
    
    for (int i = 1; i <= 6; i++) {
        //recebendo os dados dos alunos
        printf("Aluno %d \n", i); 
        printf("Insira a primeira nota: "); 
        scanf("%f", &nota1); 
        printf("Insira a segunda nota: "); 
        scanf("%f", &nota2); 
        
        //calculo da media aritmética
        mediaaritmetica = (nota1 + nota2)/2; 
        
        //calculo da media da turma
        mediaturma = mediaturma + mediaaritmetica;
        
        if (mediaaritmetica <= 3) {
            printf("Este aluno está REPROVADO! \n"); 
            cont_reprovados++; //contador de alunos reprovados
        } else if (mediaaritmetica > 3 && mediaaritmetica < 7) {
            printf("Este aluno está de EXAME! \n"); 
            cont_exame++; //contador de alunos em exame
        } else {
            printf("Este aluno está APROVADO! \n");
            cont_aprovados++; //contador de alunos aprovados
        }
    }
    mediaturma = mediaturma / 6; 
    printf("Total de alunos reprovados: %d \n", cont_reprovados);
    printf("Total de alunos em exame: %d \n", cont_exame);
    printf("Total de alunos aprovados: %d \n", cont_aprovados);
    printf("A média da turma é de %.2f pontos. \n", mediaturma);
    return (EXIT_SUCCESS);
}

