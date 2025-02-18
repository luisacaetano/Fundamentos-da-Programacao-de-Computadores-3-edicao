#include <stdio.h>

#define PRODUTOS 10
#define ARMAZENS 5

void preencher_precos(float precos[PRODUTOS]);
void preencher_quantidades(int quantidades[ARMAZENS][PRODUTOS]);
void calcular_e_mostrar(float precos[PRODUTOS], int quantidades[ARMAZENS][PRODUTOS]);

int main() {
    float precos[PRODUTOS];
    int quantidades[ARMAZENS][PRODUTOS];

    // Preencher preços dos produtos
    printf("Digite os preços de 10 produtos:\n");
    preencher_precos(precos);

    // Preencher quantidades estocadas nos armazéns
    printf("Digite as quantidades estocadas de cada produto em 5 armazéns:\n");
    preencher_quantidades(quantidades);

    // Calcular e mostrar os resultados
    calcular_e_mostrar(precos, quantidades);

    return 0;
}

void preencher_precos(float precos[PRODUTOS]) {
    for(int i = 0; i < PRODUTOS; i++) {
        printf("Preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }
}

void preencher_quantidades(int quantidades[ARMAZENS][PRODUTOS]) {
    for(int i = 0; i < ARMAZENS; i++) {
        for(int j = 0; j < PRODUTOS; j++) {
            printf("Quantidade do produto %d no armazém %d: ", j + 1, i + 1);
            scanf("%d", &quantidades[i][j]);
        }
    }
}

void calcular_e_mostrar(float precos[PRODUTOS], int quantidades[ARMAZENS][PRODUTOS]) {
    int total_quantidades_produto[PRODUTOS] = {0};
    int total_quantidades_armazem[ARMAZENS] = {0};
    int menor_estoque = 1000000;  // Inicialmente um valor alto
    int produto_maior_estoque = -1;
    int armazem_maior_estoque = -1;
    float custo_armazem[ARMAZENS] = {0};

    // Calcular as quantidades totais e o custo de cada armazém
    for(int i = 0; i < ARMAZENS; i++) {
        for(int j = 0; j < PRODUTOS; j++) {
            total_quantidades_produto[j] += quantidades[i][j];
            total_quantidades_armazem[i] += quantidades[i][j];
            custo_armazem[i] += quantidades[i][j] * precos[j];

            if(quantidades[i][j] < menor_estoque) {
                menor_estoque = quantidades[i][j];
            }

            if(quantidades[i][j] > quantidades[i][produto_maior_estoque]) {
                produto_maior_estoque = j;
                armazem_maior_estoque = i;
            }
        }
    }

    // Exibir quantidade de produtos estocados em cada armazém
    printf("\nQuantidade de produtos estocados em cada armazém:\n");
    for(int i = 0; i < ARMAZENS; i++) {
        printf("Armazém %d: %d produtos\n", i + 1, total_quantidades_armazem[i]);
    }

    // Exibir quantidade total de cada produto
    printf("\nQuantidade total de cada produto:\n");
    for(int j = 0; j < PRODUTOS; j++) {
        printf("Produto %d: %d unidades\n", j + 1, total_quantidades_produto[j]);
    }

    // Exibir preço do produto com o maior estoque em um único armazém
    printf("\nPreço do produto com o maior estoque em um único armazém:\n");
    printf("Produto %d: R$ %.2f\n", produto_maior_estoque + 1, precos[produto_maior_estoque]);

    // Exibir o menor estoque armazenado
    printf("\nMenor estoque armazenado: %d\n", menor_estoque);

    // Exibir custo de cada armazém
    printf("\nCusto de cada armazém:\n");
    for(int i = 0; i < ARMAZENS; i++) {
        printf("Armazém %d: R$ %.2f\n", i + 1, custo_armazem[i]);
    }
}
