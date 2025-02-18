/*
Faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série
a seguir:
Série = 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768...
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int termos, num1 = 2, num2 = 7, num3 = 3;

    printf("Calculo de seríe \n");

    /*Como pode observar a sequencia seque a seguinte logicica 
        || 1º Termo * 2
        || 2º Termo * 3
        || 3º Termo * 4
     Segundo essa logica basta fazer o algoritimo dentro de um laço,
     */

    printf("Digite o número de termos: ");
    scanf("%d", &termos);

    printf("%d - ", num1);
    printf("%d - ", num2);
    printf("%d - ", num3);

    for (int i = 1; i <= termos; i++) {
        if (i != termos) {
            num1 = num1 * 2;
            printf(" %d -", num1);
        }
        if (i != termos) {
            num2 = num2 * 3;
            printf(" %d -", num2);
        }
        if (i != termos) {
            num3 = num3 * 4;
            printf(" %d -", num3);
        }
        //Para não acontecer bugs os calculos deve ser feito separadamente.
    }

    return (EXIT_SUCCESS);
}

