/*
Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
anterior.
Faça um programa que determine o salário atual desse funcionário.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float salarioinicial, aumento, salarioatual;
    int anoinicial, anoatual;
   
    salarioinicial = 1000;
    aumento = salarioinicial * 0.015;
    salarioatual = aumento + salarioinicial;
    anoinicial = 2005;
   
    printf("Insira o ano atual: ");
    scanf("%d", &anoatual);
   
    // for (condicao de inicio; condicao de termino; acao)
    for (int i = 2007; i <= anoatual; i++) {
        // contador começa em 2006 pois se começar em 2005 irá contar o acréscimo a partir de 2005, assim bugando o programa
        salarioatual = ((aumento * 2) + salarioinicial);
    }
    printf("\nSeu novo salário será de R$ %.2f\n", salarioatual);
   
    return (EXIT_SUCCESS);
}