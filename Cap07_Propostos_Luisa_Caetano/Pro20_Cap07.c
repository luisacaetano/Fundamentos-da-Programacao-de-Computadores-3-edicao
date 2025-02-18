#include <stdio.h>

#define TAMANHO 5

void preencher_matriz(float matriz[TAMANHO][TAMANHO]);
void exibir_matriz(float matriz[TAMANHO][TAMANHO]);
float encontrar_maior_valor(float matriz[TAMANHO][TAMANHO]);
void multiplicar_diagonal_principal(float matriz[TAMANHO][TAMANHO], float multiplicador);
void exibir_matriz_resultante(float matriz[TAMANHO][TAMANHO]);

int main() {
    float matriz[TAMANHO][TAMANHO];
    float maior_valor;

    // Preencher a matriz com números reais
    preencher_matriz(matriz);

    // Encontrar o maior valor na matriz
    maior_valor = encontrar_maior_valor(matriz);

    // Multiplicar a diagonal principal pelo maior valor
    multiplicar_diagonal_principal(matriz, maior_valor);

    // Mostrar a matriz resultante
    printf("Matriz resultante após multiplicar a diagonal principal pelo maior valor:\n");
    exibir_matriz_resultante(matriz);

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

float encontrar_maior_valor(float matriz[TAMANHO][TAMANHO]) {
    float maior = matriz[0][0];
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

void multiplicar_diagonal_principal(float matriz[TAMANHO][TAMANHO], float multiplicador) {
    for(int i = 0; i < TAMANHO; i++) {
        matriz[i][i] *= multiplicador;
    }
}

void exibir_matriz_resultante(float matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("%7.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
