#include <stdio.h>

#define LINHAS 10
#define COLUNAS 20

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void somar_linhas(int matriz[LINHAS][COLUNAS], int soma_linhas[LINHAS]);
void multiplicar_matriz(int matriz[LINHAS][COLUNAS], int soma_linhas[LINHAS]);
void mostrar_matriz(int matriz[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];
    int soma_linhas[LINHAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Calcular a soma de cada linha
    somar_linhas(matriz, soma_linhas);

    // Multiplicar cada elemento da matriz pela soma da linha correspondente
    multiplicar_matriz(matriz, soma_linhas);

    // Mostrar a matriz resultante
    mostrar_matriz(matriz);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 10x20 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somar_linhas(int matriz[LINHAS][COLUNAS], int soma_linhas[LINHAS]) {
    for(int i = 0; i < LINHAS; i++) {
        soma_linhas[i] = 0;
        for(int j = 0; j < COLUNAS; j++) {
            soma_linhas[i] += matriz[i][j];
        }
    }
}

void multiplicar_matriz(int matriz[LINHAS][COLUNAS], int soma_linhas[LINHAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= soma_linhas[i];
        }
    }
}

void mostrar_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("\nMatriz resultante após multiplicação:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
