/*
Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
fórmula a seguir:

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numinteiro, fatoracao=1;
    float solucao=1;
   
    printf("Insira um número inteiro e positivo: ");
    scanf("%d", &numinteiro);
   
    for (int i=0; i <= numinteiro; i++) {
        for (int j=1; j <= i; j++) {
            fatoracao = fatoracao * j;
        }
        solucao = solucao + (1/fatoracao); // E = 1 + 1/N!
    }
    printf("\nA solução de E: %.2f\n", solucao);
    return (EXIT_SUCCESS);
}