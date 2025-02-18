#include <stdio.h>

#define TAMANHO 10

void preencher_matriz(int matriz[TAMANHO][TAMANHO]);
void exibir_matriz(int matriz[TAMANHO][TAMANHO]);
float calcular_media_diagonal_principal(int matriz[TAMANHO][TAMANHO]);

int main() {
    int matriz[TAMANHO][TAMANHO];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Mostrar a matriz
    printf("Matriz 10x10:\n");
    exibir_matriz(matriz);

    // Calcular e mostrar a média dos elementos da diagonal principal
    float media = calcular_media_diagonal_principal(matriz);
    printf("Média dos elementos da diagonal principal: %.2f\n", media);

    return 0;
}

void preencher_matriz(int matriz[TAMANHO][TAMANHO]) {
    printf("Preenchendo a matriz 10x10 com números inteiros:\n");
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

float calcular_media_diagonal_principal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for(int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }
    return (float)soma / TAMANHO;
}
