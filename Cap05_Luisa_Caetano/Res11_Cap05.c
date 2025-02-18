/*
Faça um programa que receba um número inteiro maior que 1, verifique se o número fornecido é primo ou não e mostre uma mensagem de número primo ou de número não primo.
Um número é primo quando é divisível apenas por 1 e por ele mesmo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, resto, verificacao = 0; 
    
    printf("Insira um número inteiro: "); 
    scanf("%d", &num); 
    
    for (int i = 1; i < num; i++) {
        resto = num % i;
        
        if (resto == 0) {
        verificacao++; 
        }
    }
    
    if ((verificacao > 2) || (num == 4)) {
        printf("Não é um número primo. \n");
    }
    else {
        printf("É um número primo. \n");
    }
    return (EXIT_SUCCESS);
}

