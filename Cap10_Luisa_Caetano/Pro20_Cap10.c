#include <stdio.h>

int main() {
    float matriz[5][5];
    int i, j;

    // Preenchendo a matriz com valores
    printf("Preencha a matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Multiplicando cada linha pelo elemento da diagonal principal daquela linha
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] *= matriz[i][i];
        }
    }

    // Mostrando a matriz resultante
    printf("\nMatriz resultante:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
