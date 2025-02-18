/*
Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int termos, numero, fatoracao = 1;
   
    printf("Insira a quantidade de termos que serão lidos: ");
    scanf("%d", &termos);
   
    // repetição da quantidade de termos lidos acima
    for (int i = 1; i <= termos; i++) {
        printf("Insira um número inteiro e positivo: ");
        scanf("%d", &numero);
       
        //repetição para realizar a fatoração
        for (int j = 1; j <= numero; j++) {
            fatoracao = fatoracao * j;
        }
        printf("\nSeu fatorial de %d é: %d\n", numero, fatoracao);
        fatoracao = 1;
        //No fim do loop a  variavel fat deve receber 1 novamente senão ela vai utilizar o valor do fatorial anterior para calcular os demais.
    }
    return (EXIT_SUCCESS);
}
