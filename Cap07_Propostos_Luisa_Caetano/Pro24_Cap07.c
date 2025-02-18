#include <stdio.h>

#define LINHAS 4
#define COLUNAS 5

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
void calcular_somas_colunas(int matriz[LINHAS][COLUNAS], int vetor[COLUNAS]);
void exibir_somas_maiores_que_dez(int vetor[COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];
    int somas_colunas[COLUNAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Calcular as somas das colunas
    calcular_somas_colunas(matriz, somas_colunas);

    // Exibir as somas maiores que dez
    printf("Elementos do vetor maiores que 10:\n");
    exibir_somas_maiores_que_dez(somas_colunas);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 4x5 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calcular_somas_colunas(int matriz[LINHAS][COLUNAS], int vetor[COLUNAS]) {
    // Inicializar o vetor de somas com 0
    for(int j = 0; j < COLUNAS; j++) {
        vetor[j] = 0;
    }

    // Calcular a soma de cada coluna
    for(int j = 0; j < COLUNAS; j++) {
        for(int i = 0; i < LINHAS; i++) {
            vetor[j] += matriz[i][j];
        }
    }
}

void exibir_somas_maiores_que_dez(int vetor[COLUNAS]) {
    int encontrou = 0;
    for(int j = 0; j < COLUNAS; j++) {
        if(vetor[j] > 10) {
            printf("Soma da coluna %d: %d\n", j, vetor[j]);
            encontrou = 1;
        }
    }
    if(!encontrou) {
        printf("Nenhum elemento do vetor é maior que 10.\n");
    }
}
