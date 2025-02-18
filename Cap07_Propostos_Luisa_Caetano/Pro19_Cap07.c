#include <stdio.h>

#define LINHAS 8
#define COLUNAS 6

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void exibir_matriz(int matriz[LINHAS][COLUNAS]);
float calcular_media_linhas_pares(int matriz[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Mostrar a matriz
    printf("Matriz 8x6:\n");
    exibir_matriz(matriz);

    // Calcular e mostrar a média dos elementos das linhas pares
    float media = calcular_media_linhas_pares(matriz);
    printf("Média dos elementos das linhas pares: %.2f\n", media);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 8x6 com números inteiros:\n");
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

float calcular_media_linhas_pares(int matriz[LINHAS][COLUNAS]) {
    int soma = 0;
    int contador = 0;

    for(int i = 0; i < LINHAS; i += 2) { // Itera apenas sobre as linhas pares
        for(int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
            contador++;
        }
    }

    // Verifica se há linhas pares para evitar divisão por zero
    if (contador == 0) return 0.0;
    
    return (float)soma / contador;
}
