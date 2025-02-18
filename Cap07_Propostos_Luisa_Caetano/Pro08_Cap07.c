#include <stdio.h>

#define LINHAS 3
#define COLUNAS 8

void preencher_matriz(int matriz[LINHAS][COLUNAS], const char* nome);
void somar_matrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]);
void subtrair_matrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]);
void mostrar_matriz(int matriz[LINHAS][COLUNAS], const char* nome);

int main() {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int soma[LINHAS][COLUNAS];
    int diferenca[LINHAS][COLUNAS];

    // Preencher as duas matrizes com números inteiros
    preencher_matriz(matriz1, "Matriz 1");
    preencher_matriz(matriz2, "Matriz 2");

    // Calcular a soma das duas matrizes
    somar_matrizes(matriz1, matriz2, soma);

    // Calcular a diferença das duas matrizes
    subtrair_matrizes(matriz1, matriz2, diferenca);

    // Mostrar as matrizes resultantes
    mostrar_matriz(soma, "Soma das Matrizes");
    mostrar_matriz(diferenca, "Diferença das Matrizes");

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS], const char* nome) {
    printf("Preenchendo %s:\n", nome);
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somar_matrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrair_matrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void mostrar_matriz(int matriz[LINHAS][COLUNAS], const char* nome) {
    printf("\n%s:\n", nome);
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
