/*
 Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições do tipo salário inválido.
Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
4. Finalizar o programa
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
a seguir.
salários % do im posTo
Menor que R$ 500,00 5
De R$ 500,00 a R$ 850,00 10
Acima de R$ 850,00 15
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário usando as
regras a seguir.
salários aumen To
Maiores que R$ 1.500,00 R$ 25,00
De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive) R$ 50,00
De R$ 450,00 (inclusive) a R$ 750,00 R$ 75,00
Menores que R$ 450,00 R$ 100,00
Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando esta tabela:
salários classificação
Até R$ 700,00 Mal remunerado
Maiores que R$ 700,00 Bem remunerado
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int opcao;
    float sal, imposto, n_sal;

    //O programa será finalizado quando o usuario digitar 4 no menu de opções
    do {
        do {
            printf("MENU DE OPÇÕES: \n"
                    "   1. Imposto \n"
                    "   2. Novo salário \n"
                    "   3. Classificação \n"
                    "   4. Finalizar programa. \n\n");
            printf("Selecione uma opção: ");
            scanf("%d", &opcao);
            printf("\n ");

            switch (opcao) {
                case 1:
                    printf("\n Calculo de impostos \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);

                    if (sal < 500) {
                        imposto = sal * 0.05;
                    }
                    else if (sal >= 500 && sal <= 850) {
                        imposto = sal * 0.10;
                    } 
                    else if (sal > 850) {
                        imposto = sal * 0.15;
                    }
                    printf("\n Você pagará R$ %.2f de impostos. \n", imposto);
                    break;

                case 2:
                    printf("\n Calculo de novo salário \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);

                    if (sal < 450) {
                        n_sal = sal + 100;
                    } else if (sal >= 450 && sal < 750) {
                        n_sal = sal + 75;
                    }
                    else if (sal >= 750 && sal <= 1500) {
                        n_sal = sal + 50;
                    }
                    else if (sal > 1500) {
                        n_sal = sal + 25;
                    }
                    printf("Seu novo salário será de R$ %.2f. \n", n_sal);
                    break;

                case 3:
                    printf("Classificação \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);
                    if (sal <= 700) {
                        printf("Mal remunerado. \n");
                    }
                    else if (sal > 700) {
                        printf("Bem remunerado. \n");
                    }
                    break;
                    
                default:
                    printf("Opção inválida. \n");
                    break;
            }
            printf("_____________________________________________________________ \n\n");
        } while (opcao >= 1 && opcao <= 3);
    } while (opcao != 4);

    return (EXIT_SUCCESS);
}
