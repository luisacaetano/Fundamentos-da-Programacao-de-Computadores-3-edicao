#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void preencher_matriz(float matriz[LINHAS][COLUNAS]);
void multiplicar_matriz(float matriz[LINHAS][COLUNAS], float multiplicador);
void mostrar_matriz(float matriz[LINHAS][COLUNAS]);

int main() {
    float matriz[LINHAS][COLUNAS];
    float multiplicador;

    // Preencher a matriz com números reais
    preencher_matriz(matriz);

    // Receber o valor numérico para multiplicar a matriz
    printf("Digite um valor para multiplicar a matriz: ");
    scanf("%f", &multiplicador);

    // Multiplicar a matriz pelo valor fornecido
    multiplicar_matriz(matriz, multiplicador);

    // Mostrar a matriz resultante
    mostrar_matriz(matriz);

    return 0;
}

void preencher_matriz(float matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 3x3 com números reais:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void multiplicar_matriz(float matriz[LINHAS][COLUNAS], float multiplicador) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= multiplicador;
        }
    }
}

void mostrar_matriz(float matriz[LINHAS][COLUNAS]) {
    printf("\nMatriz resultante após multiplicação:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
