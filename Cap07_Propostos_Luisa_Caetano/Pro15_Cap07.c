#include <stdio.h>
#include <stdlib.h>

#define LINHAS 12
#define COLUNAS 13

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void exibir_matriz(int matriz[LINHAS][COLUNAS]);
void normalizar_matriz(int matriz[LINHAS][COLUNAS], float matriz_normalizada[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];
    float matriz_normalizada[LINHAS][COLUNAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Mostrar a matriz original
    printf("Matriz original:\n");
    exibir_matriz(matriz);

    // Normalizar a matriz
    normalizar_matriz(matriz, matriz_normalizada);

    // Mostrar a matriz normalizada
    printf("\nMatriz modificada:\n");
    exibir_matriz(matriz_normalizada);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 12x13 com números inteiros:\n");
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

void normalizar_matriz(int matriz[LINHAS][COLUNAS], float matriz_normalizada[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        int maior_modulo = abs(matriz[i][0]);

        // Encontrar o maior elemento em módulo na linha
        for(int j = 1; j < COLUNAS; j++) {
            int valor_modulo = abs(matriz[i][j]);
            if(valor_modulo > maior_modulo) {
                maior_modulo = valor_modulo;
            }
        }

        // Dividir todos os elementos pelo maior valor em módulo da linha
        for(int j = 0; j < COLUNAS; j++) {
            if (maior_modulo != 0) {
                matriz_normalizada[i][j] = (float)matriz[i][j] / maior_modulo;
            } else {
                matriz_normalizada[i][j] = 0;  // Evitar divisão por zero
            }
        }
    }
}
