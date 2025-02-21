/*
Em uma fábrica trabalham homens e mulheres divididos em três classes:
■■ trabalhadores que fazem até 30 peças por mês — classe 1;
■■ trabalhadores que fazem de 31 a 50 peças por mês — classe 2;
■■ trabalhadores que fazem mais de 50 peças por mês — classe 3.
A classe 1 recebe salário mínimo. A classe 2 recebe salário mínimo mais 3% deste salário por peça,
acima das 30 peças iniciais. A classe 3 recebe salário mínimo mais 5% desse salário por peça, acima das 30
peças iniciais.
Faça um programa que receba o número do operário, o número de peças fabricadas no mês, o sexo do
operário, e que também calcule e mostre:
■■ o número do operário e seu salário;
■■ o total da folha de pagamento da fábrica;
■■ o número total de peças fabricadas no mês; 
■■ a média de peças fabricadas pelos homens;
■■ a média de peças fabricadas pelas mulheres; e
■■ o número do operário ou operária de maior salário.
A fábrica possui 15 operários.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char sexo;
    int i, cont_m, cont_f;
    int num_peca, num_operario, maior_num;
    int total_pecaH, total_pecaF, total_peca;
    float maior_salario;
    float medPeca_homem, medPeca_mulher;
    float salario_minimo = 450, sal_operario, bonus, folha_de_pagamento = 0;


    for (i = 1; i <= 15; i++) {
        printf("OPERARIO %d \n", i);
        printf("Digite seu sexo: ");
        scanf(" %c", &sexo);

        //Se o usuario digitar sexo masculino caíra nesse bloco;
        if (sexo == 'm') {
            printf("Digite o número do operário: ");
            scanf("%d", &num_operario);
            printf("Digite o número de peças fabricadas: ");
            scanf("%d", &num_peca);
            printf("Nº Operário: %d \n", num_operario);

            //Condicionais para definir a qual classe o usúario pertence;
            if (num_peca <= 30) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 30 && num_peca <= 50) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 50) {
                bonus = (num_peca - 30) * (0.05 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);
            }
            total_pecaH = total_pecaH + num_peca;
            printf("\n");

            //Se o usuario digitar sexo feminino caíra nesse bloco;
        } else if (sexo == 'f') {
            printf("Digite o número do operário: ");
            scanf("%d", &num_operario);
            printf("Digite o número de peças fabricadas: ");
            scanf("%d", &num_peca);
            
            //Condicionais para definir a qual classe o usúario pertence;
            if (num_peca <= 30) {
                sal_operario = salario_minimo;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 30 && num_peca < 50) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 50) {
                bonus = (num_peca - 30) * (0.05 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);
            }
            total_pecaH = total_pecaH + num_peca;
        }

        //Descobrir qual operário tem o maior salário.
        maior_salario = sal_operario;
        maior_num = num_operario;

        if (sal_operario > maior_salario) {
            maior_salario = maior_salario;
            maior_num = num_operario;
        }

        total_pecaF = total_pecaH + num_peca;
        folha_de_pagamento = folha_de_pagamento + sal_operario;

        //Calculo da media de peças de cada sexo
        total_peca = total_pecaF + total_pecaH;
        medPeca_homem = total_peca / total_pecaH;
        medPeca_mulher = total_peca / total_pecaF;

        printf("\n");
    }

    printf("\n");
    printf("FOLHA DE PAGAMENTO \n");
    printf("Total folha de pagamento: R$ %.2f. \n\n", folha_de_pagamento);

    printf("Média de peças fabricada por mulheres: %.2f \n", medPeca_mulher);
    printf("Média de peças fabricada por homem: %.2f \n", medPeca_homem);

    printf("O funcionário de número %d recebe o maior salário, sendo de R$ %.2f. \n", maior_num, maior_salario);

    return (EXIT_SUCCESS);
}