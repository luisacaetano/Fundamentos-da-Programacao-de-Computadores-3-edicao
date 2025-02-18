/*Faça um programa que receba o preço unitário, a refrigeração (S para os produtos que necessitem de
refrigeração e N para os que não necessitem) e a categoria (A — alimentação; L — limpeza; e V —
vestuário) de doze produtos, e que calcule e mostre:
■■ O custo de estocagem, calculado de acordo com a tabela a seguir.
preço uni Tário refrigera ção ca Tegoria cus To de esTocagem
Até 20
A R$ 2,00
L R$ 3,00
V R$ 4,00
Entre 20 e 50 (inclusive)
S R$ 6,00
N R$ 0,00
Maior que 50
S
A R$ 5,00
L R$ 2,00
V R$ 4,00
N
A ou V R$ 0,00
L R$ 1,00
■■ O imposto calculado de acordo com as regras a seguir:
Se o produto não preencher nenhum dos requisitos a seguir, seu imposto será de 2% sobre o preço
unitário; caso contrário, será de 4%.
Os requisitos são: categoria — A e refrigeração — S.
■■ O preço final, ou seja, preço unitário mais custo de estocagem mais imposto.
■■ A classificação calculada usando a tabela a seguir.
preço final classi ficação
Até R$ 20,00 Barato
Entre R$ 20,00 e R$ 100,00 (inclusive) Normal
Acima de R$ 100,00 Caro
■■ A média dos valores adicionais, ou seja, a média dos custos de estocagem e dos impostos dos doze
produtos.
■■ O maior preço final.
■■ O menor preço final.
■■ O total dos impostos.
■■ A quantidade de produtos com classificação barato.
■■ A quantidade de produtos com classificação caro.
■■ A quantidade de produtos com classificação normal.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char refrigeracao, categoria;

    int i, cont_barato, cont_normal, cont_caro;
    cont_barato = 0;
    cont_normal = 0;
    cont_caro = 0;

    float preco_unitario, preco_final, custo_estocagem;
    float maior_preco, menor_preco, media_adcionais;
    float impostos, total_impostosN, total_impostosS, total_impostos, total_estocagemN, total_estocagemS, total_estocagem, total_adcionais;

    maior_preco = 1;
    menor_preco = 1;

    //Variaveis que ira receber o total dos produtos que não necessitam de refrigeração.
    total_estocagemN = 0;
    total_impostosN = 0;

    //Variaveis que ira receber o total dos produtos que necessitam de refrigeração.
    total_estocagemS = 0;
    total_impostosS = 0;

    //Variaveis que ira receber o total de ambos os produtos
    total_impostos = 0;
    total_estocagem = 0;

    for (i = 1; i <= 12; i++) {

        printf("CALCULO DE CUSTOS \n\n");
        printf("O produto necessita de refrigeração? (S.Sim | N.Não): ");
        scanf(" %c", &refrigeracao);
        printf("\n");

        //Não necessista de refrigeração
        if (refrigeracao == 'N' || refrigeracao == 'n') {
            printf("_________________________________________\n");
            printf("Produto não necessista de refrigeração. \n");
            printf("A. Alimentação \n"
                    "L. Limpeza \n"
                    "V. Vestuaario \n\n");
            printf("Digite a categoria do produto,sendo:");
            scanf(" %c", &categoria);

            printf("Digite o preço unítario do produto: ");
            scanf("%f", &preco_unitario);

            if (preco_unitario < 20) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 2.00;
                        printf("Custo de estocagem: %.2f \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 3.00;
                        printf("Custo de estocagem: %.2f \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 3.00;
                        printf("Custo de estocagem: %.2f \n", custo_estocagem);
                        break;
                }
            } else if (preco_unitario >= 20 && preco_unitario <= 50) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 0;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 0;
                        printf("Custo de estocagem: %.2f \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 0;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;
                }
            } else if (preco_unitario > 50) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 0;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 1.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 0;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;
                }
            }

            //Valor total de estocagem dos produtos que não necessitam de refrigeração.
            total_estocagemN = total_estocagemN + custo_estocagem;

            //Valor total de impostos dos produtos que não necessitam de refrigeração.
            impostos = preco_unitario * 0.02;
            total_impostosN = total_impostosN + impostos;

            preco_final = preco_unitario + impostos + total_estocagem;
            printf("Preço final: R$ %.2f. \n", preco_final);
        }
        
        //Necessita de refrigeração
        else if (refrigeracao == 'S' || refrigeracao == 'S') {
            printf("Produto necessista de refrigeração. \n");
            printf("Produto não necessista de refrigeração. \n");
            printf("A. Alimentação \n"
                    "L. Limpeza \n"
                    "V. Vestuaario \n\n");
            printf("Digite a categoria do produto,sendo:");
            scanf(" %c", &categoria);
            printf("Digite o preço unítario do produto: ");
            scanf("%f", &preco_unitario);
            printf("\n");

            if (preco_unitario < 20) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 2;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 3.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 3.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;
                }
            } else if (preco_unitario >= 20 && preco_unitario <= 50) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 6.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 6.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 6.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;
                }
            } else if (preco_unitario > 50) {
                switch (categoria) {
                    case 'A': //Alimentos
                        printf("Categoria Alimentos \n");
                        custo_estocagem = 5.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'L': //Limpeza
                        printf("Categoria Limpeza \n");
                        custo_estocagem = 2.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;

                    case 'V': //Vestuario
                        printf("Categoria Vestuario \n");
                        custo_estocagem = 4.00;
                        printf("Custo de estocagem: %.2f. \n", custo_estocagem);
                        break;
                }
            }
            total_estocagemS = total_estocagemS + custo_estocagem;

            impostos = preco_unitario * 0.04;
            total_impostosS = total_impostosS + impostos;

            preco_final = preco_unitario + impostos + total_estocagemS;
            printf("Preço final: R$ %.2f. \n", preco_final);

        }
        
        //Opção inválida
        else {
            printf("Opção inválida. \n");
        }

        //Categoria que produto se enquadra.
        if (preco_final < 20) {
            printf("Este produto está barato. \n\n");
            cont_barato++;
        } else if (preco_final >= 20 && preco_final <= 100) {
            printf("Este produto está com preço normal. \n\n");
            cont_normal++;
        } else if (preco_final > 100) {
            printf("Este produto está caro. \n\n");
            cont_caro++;
        }


        if (preco_final > maior_preco) {
            maior_preco = preco_final;

        } else if (preco_final < preco_final) {
            menor_preco = preco_final;
        }
    }

    total_estocagem = total_estocagemN + total_estocagemS;
    total_impostos = total_impostosN + total_impostosS;

    total_adcionais = (total_estocagem + total_impostos);
    media_adcionais = total_adcionais / 12;

    printf("Média dos valores adcionais: R$ %.2f. \n", media_adcionais);
    printf("Maior preço: R$ %.2f. \n", maior_preco);
    printf("Menor preço: R$ %.2f. \n", menor_preco);
    printf("Total de impostos: R$ %.2f. \n", total_impostos);

    printf("Total de produtos com: \n");
    printf("    Classificação barato: %d. \n", cont_barato);
    printf("    Classificação normal: %d. \n", cont_normal);
    printf("    Classificação caro: %d. \n", cont_caro);

    return (EXIT_SUCCESS);
}
