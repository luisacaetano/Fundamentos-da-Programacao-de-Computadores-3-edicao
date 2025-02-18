#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void calcular_somas(int matriz[LINHAS][COLUNAS], int somas_linhas[LINHAS], int somas_colunas[COLUNAS]);
void exibir_matriz(int matriz[LINHAS][COLUNAS]);
void exibir_vetores(int somas_linhas[LINHAS], int somas_colunas[COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];
    int somas_linhas[LINHAS] = {0};
    int somas_colunas[COLUNAS] = {0};

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Calcular as somas das linhas e colunas
    calcular_somas(matriz, somas_linhas, somas_colunas);

    // Mostrar a matriz
    printf("Matriz:\n");
    exibir_matriz(matriz);

    // Mostrar os vetores com as somas
    printf("\nSomas das linhas e colunas:\n");
    exibir_vetores(somas_linhas, somas_colunas);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 5x5 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calcular_somas(int matriz[LINHAS][COLUNAS], int somas_linhas[LINHAS], int somas_colunas[COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        somas_linhas[i] = 0;
        for(int j = 0; j < COLUNAS; j++) {
            somas_linhas[i] += matriz[i][j];
            somas_colunas[j] += matriz[i][j];
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

void exibir_vetores(int somas_linhas[LINHAS], int somas_colunas[COLUNAS]) {
    printf("Somas das linhas:\n");
    for(int i = 0; i < LINHAS; i++) {
        printf("Linha %d: %d\n", i + 1, somas_linhas[i]);
    }

    printf("Somas das colunas:\n");
    for(int j = 0; j < COLUNAS; j++) {
        printf("Coluna %d: %d\n", j + 1, somas_colunas[j]);
    }
}
