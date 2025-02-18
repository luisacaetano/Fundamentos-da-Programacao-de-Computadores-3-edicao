#include <stdio.h>

#define LINHAS 6
#define COLUNAS 10

void preencher_matriz(int matriz[LINHAS + 1][COLUNAS]);
void exibir_matriz(int matriz[LINHAS + 1][COLUNAS]);
void somar_colunas_e_acumular(int matriz[LINHAS + 1][COLUNAS]);

int main() {
    int matriz[LINHAS + 1][COLUNAS]; // +1 para a linha adicional para as somas

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Somar as colunas e acumular as somas na 7ª linha
    somar_colunas_e_acumular(matriz);

    // Mostrar a matriz com as somas das colunas
    printf("Matriz 6x10 com a 7ª linha contendo as somas das colunas:\n");
    exibir_matriz(matriz);

    return 0;
}

void preencher_matriz(int matriz[LINHAS + 1][COLUNAS]) {
    printf("Preenchendo a matriz 6x10 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[LINHAS + 1][COLUNAS]) {
    for(int i = 0; i <= LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somar_colunas_e_acumular(int matriz[LINHAS + 1][COLUNAS]) {
    // Inicializar a 7ª linha com 0s
    for(int j = 0; j < COLUNAS; j++) {
        matriz[LINHAS][j] = 0;
    }

    // Somar as colunas e acumular na 7ª linha
    for(int j = 0; j < COLUNAS; j++) {
        for(int i = 0; i < LINHAS; i++) {
            matriz[LINHAS][j] += matriz[i][j];
        }
    }
}
