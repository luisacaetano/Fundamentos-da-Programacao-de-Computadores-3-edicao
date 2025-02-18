#include <stdio.h>

#define LINHAS 3
#define COLUNAS 4

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void exibir_matriz(int matriz[LINHAS][COLUNAS]);
void calcular_estatisticas(int matriz[LINHAS][COLUNAS], int *pares, int *soma_impares, float *media);

int main() {
    int matriz[LINHAS][COLUNAS];
    int pares = 0;
    int soma_impares = 0;
    float media = 0.0;

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Calcular as estatísticas
    calcular_estatisticas(matriz, &pares, &soma_impares, &media);

    // Mostrar a matriz
    printf("Matriz 3x4:\n");
    exibir_matriz(matriz);

    // Mostrar as estatísticas
    printf("Quantidade de elementos pares: %d\n", pares);
    printf("Soma dos elementos ímpares: %d\n", soma_impares);
    printf("Média de todos os elementos: %.2f\n", media);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 3x4 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcular_estatisticas(int matriz[LINHAS][COLUNAS], int *pares, int *soma_impares, float *media) {
    int soma_total = 0;
    int total_elementos = LINHAS * COLUNAS;
    *pares = 0;
    *soma_impares = 0;

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            int valor = matriz[i][j];
            soma_total += valor;
            if (valor % 2 == 0) {
                (*pares)++;
            } else {
                (*soma_impares) += valor;
            }
        }
    }

    *media = (float)soma_total / total_elementos;
}
