#include <stdio.h>

int main() {
    int matriz[8][6];
    int i, j;
    int soma = 0, count = 0;
    float media;

    // Preenchendo a matriz com valores
    printf("Preencha a matriz 8x6:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 6; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Somando os elementos das linhas pares
            if(i % 2 == 0) {  // Linhas pares: 0, 2, 4, 6
                soma += matriz[i][j];
                count++;
            }
        }
    }

    // Calculando a média
    media = (float)soma / count;

    // Mostrando a média dos elementos das linhas pares
    printf("Média dos elementos das linhas pares: %.2f\n", media);

    return 0;
}
