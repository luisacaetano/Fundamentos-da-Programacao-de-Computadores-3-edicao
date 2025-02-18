#include <stdio.h>

#define TAMANHO 5

void preencher_matriz(int matriz[TAMANHO][TAMANHO]);
int soma_linha(int matriz[TAMANHO][TAMANHO], int linha);
int soma_coluna(int matriz[TAMANHO][TAMANHO], int coluna);
int soma_diagonal_principal(int matriz[TAMANHO][TAMANHO]);
int soma_diagonal_secundaria(int matriz[TAMANHO][TAMANHO]);
int soma_total(int matriz[TAMANHO][TAMANHO]);

int main() {
    int matriz[TAMANHO][TAMANHO];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Calcular e mostrar a soma dos elementos da linha 4
    printf("Soma dos elementos da linha 4: %d\n", soma_linha(matriz, 4));

    // Calcular e mostrar a soma dos elementos da coluna 2
    printf("Soma dos elementos da coluna 2: %d\n", soma_coluna(matriz, 2));

    // Calcular e mostrar a soma dos elementos da diagonal principal
    printf("Soma dos elementos da diagonal principal: %d\n", soma_diagonal_principal(matriz));

    // Calcular e mostrar a soma dos elementos da diagonal secundária
    printf("Soma dos elementos da diagonal secundária: %d\n", soma_diagonal_secundaria(matriz));

    // Calcular e mostrar a soma de todos os elementos da matriz
    printf("Soma de todos os elementos da matriz: %d\n", soma_total(matriz));

    return 0;
}

void preencher_matriz(int matriz[TAMANHO][TAMANHO]) {
    printf("Preenchendo a matriz 5x5 com números inteiros:\n");
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int soma_linha(int matriz[TAMANHO][TAMANHO], int linha) {
    int soma = 0;
    for(int j = 0; j < TAMANHO; j++) {
        soma += matriz[linha - 1][j]; // Subtração de 1 para ajustar ao índice 0-based
    }
    return soma;
}

int soma_coluna(int matriz[TAMANHO][TAMANHO], int coluna) {
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][coluna - 1]; // Subtração de 1 para ajustar ao índice 0-based
    }
    return soma;
}

int soma_diagonal_principal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int soma_diagonal_secundaria(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][TAMANHO - 1 - i];
    }
    return soma;
}

int soma_total(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
