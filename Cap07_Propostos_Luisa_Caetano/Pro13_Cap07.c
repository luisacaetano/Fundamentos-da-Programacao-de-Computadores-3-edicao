#include <stdio.h>

#define LINHAS 6
#define COLUNAS 4

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void recalcular_matriz(int matriz[LINHAS][COLUNAS]);
void mostrar_matriz(int matriz[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Recalcular a matriz multiplicando cada linha pelo maior elemento da linha
    recalcular_matriz(matriz);

    // Mostrar a matriz resultante
    mostrar_matriz(matriz);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 6x4 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void recalcular_matriz(int matriz[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        int maior = matriz[i][0];
        // Encontrar o maior elemento da linha
        for(int j = 1; j < COLUNAS; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        // Multiplicar cada elemento da linha pelo maior elemento
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= maior;
        }
    }
}

void mostrar_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("\nMatriz resultante após o recalculo:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
