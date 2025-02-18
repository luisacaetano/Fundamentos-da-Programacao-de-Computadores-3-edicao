#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_AVALIACOES 4

void calcular_medias(float notas[NUM_ALUNOS][NUM_AVALIACOES], float medias[], int alunos[]);
void alunos_recuperacao(float medias[], int alunos[]);

int main() {
    int alunos[NUM_ALUNOS];
    float notas[NUM_ALUNOS][NUM_AVALIACOES];
    float medias[NUM_ALUNOS];

    // Receber os números dos alunos e suas notas
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o número do aluno %d: ", i + 1);
        scanf("%d", &alunos[i]);

        printf("Digite as notas das 4 avaliações do aluno %d:\n", alunos[i]);
        for(int j = 0; j < NUM_AVALIACOES; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcular a média de todos os alunos
    calcular_medias(notas, medias, alunos);

    // Mostrar os alunos que deverão fazer recuperação
    alunos_recuperacao(medias, alunos);

    return 0;
}

void calcular_medias(float notas[NUM_ALUNOS][NUM_AVALIACOES], float medias[], int alunos[]) {
    for(int i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;
        for(int j = 0; j < NUM_AVALIACOES; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / NUM_AVALIACOES;
        printf("A média do aluno %d é: %.2f\n", alunos[i], medias[i]);
    }
}

void alunos_recuperacao(float medias[], int alunos[]) {
    printf("\nAlunos que deverão fazer recuperação:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        if(medias[i] < 6.0) {
            printf("Aluno %d com média %.2f\n", alunos[i], medias[i]);
        }
    }
}
