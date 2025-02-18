#include <stdio.h>

#define TAMANHO 5

void preencher_matriz(float matriz[TAMANHO][TAMANHO]);
void exibir_matriz(float matriz[TAMANHO][TAMANHO]);
void multiplicar_linhas_por_diagonal_principal(float matriz[TAMANHO][TAMANHO]);

int main() {
    float matriz[TAMANHO][TAMANHO];

    // Preencher a matriz com números reais
    preencher_matriz(matriz);

    // Mostrar a matriz original
    printf("Matriz 5x5 original:\n");
    exibir_matriz(matriz);

    // Multiplicar cada linha pelo elemento da diagonal principal da linha
    multiplicar_linhas_por_diagonal_principal(matriz);

    // Mostrar a matriz resultante
    printf("Matriz 5x5 após multiplicar cada linha pelo elemento da diagonal principal da linha:\n");
    exibir_matriz(matriz);

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

void multiplicar_linhas_por_diagonal_principal(float matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        float multiplicador = matriz[i][i];
        // Multiplica cada elemento da linha pelo elemento da diagonal principal
        for(int j = 0; j < TAMANHO; j++) {
            matriz[i][j] *= multiplicador;
        }
    }
}
