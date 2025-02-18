#include <stdio.h>

#define TAMANHO 5

void preencher_matriz(float matriz[TAMANHO][TAMANHO]);
void exibir_matriz(float matriz[TAMANHO][TAMANHO]);
float calcular_soma_diagonal_secundaria(float matriz[TAMANHO][TAMANHO]);

int main() {
    float matriz[TAMANHO][TAMANHO];

    // Preencher a matriz com números reais
    preencher_matriz(matriz);

    // Mostrar a matriz
    printf("Matriz 5x5:\n");
    exibir_matriz(matriz);

    // Calcular e mostrar a soma dos elementos da diagonal secundária
    float soma = calcular_soma_diagonal_secundaria(matriz);
    printf("Soma dos elementos da diagonal secundária: %.2f\n", soma);

    return 0;
}

void preencher_matriz(float matriz[TAMANHO][TAMANHO]) {
    printf("Preenchendo a matriz 5x5 com números reais:\n");
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void exibir_matriz(float matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("%7.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

float calcular_soma_diagonal_secundaria(float matriz[TAMANHO][TAMANHO]) {
    float soma = 0.0;
    for(int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][TAMANHO - 1 - i];
    }
    return soma;
}
