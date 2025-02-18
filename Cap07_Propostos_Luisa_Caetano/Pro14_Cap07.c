#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

void preencher_matriz(int matriz[LINHAS][COLUNAS]);
int contar_elementos_fora_intervalo(int matriz[LINHAS][COLUNAS]);

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencher a matriz com números inteiros
    preencher_matriz(matriz);

    // Contar e mostrar a quantidade de elementos fora do intervalo [5,15]
    int quantidade_fora_intervalo = contar_elementos_fora_intervalo(matriz);
    printf("Quantidade de elementos fora do intervalo [5,15]: %d\n", quantidade_fora_intervalo);

    return 0;
}

void preencher_matriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preenchendo a matriz 2x3 com números inteiros:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int contar_elementos_fora_intervalo(int matriz[LINHAS][COLUNAS]) {
    int contador = 0;
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if(matriz[i][j] < 5 || matriz[i][j] > 15) {
                contador++;
            }
        }
    }
    return contador;
}
