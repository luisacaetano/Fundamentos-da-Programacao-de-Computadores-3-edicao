#include <stdio.h>

#define NUM_ALUNOS 8
#define NUM_DISCIPLINAS 5

void preencher_idades(int idades[NUM_ALUNOS]);
void preencher_codigos_disciplinas(int codigos[NUM_DISCIPLINAS]);
void preencher_matriz_provas(int provas[NUM_ALUNOS][NUM_DISCIPLINAS]);

int main() {
    int idades[NUM_ALUNOS];
    int codigos_disciplinas[NUM_DISCIPLINAS];
    int provas[NUM_ALUNOS][NUM_DISCIPLINAS];

    // Preencher as idades dos alunos
    preencher_idades(idades);

    // Preencher os códigos das disciplinas
    preencher_codigos_disciplinas(codigos_disciplinas);

    // Preencher a matriz com a quantidade de provas feitas por cada aluno em cada disciplina
    preencher_matriz_provas(provas);

    // Mostrar as idades dos alunos
    printf("\nIdades dos alunos:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %d anos\n", i + 1, idades[i]);
    }

    // Mostrar os códigos das disciplinas
    printf("\nCódigos das disciplinas:\n");
    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Disciplina %d: Código %d\n", i + 1, codigos_disciplinas[i]);
    }

    // Mostrar a matriz com a quantidade de provas feitas
    printf("\nQuantidade de provas feitas por cada aluno em cada disciplina:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        for(int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("%d ", provas[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void preencher_idades(int idades[NUM_ALUNOS]) {
    printf("Digite as idades dos 8 alunos:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        printf("Idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }
}

void preencher_codigos_disciplinas(int codigos[NUM_DISCIPLINAS]) {
    printf("\nDigite os códigos das 5 disciplinas:\n");
    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Código da disciplina %d: ", i + 1);
        scanf("%d", &codigos[i]);
    }
}

void preencher_matriz_provas(int provas[NUM_ALUNOS][NUM_DISCIPLINAS]) {
    printf("\nDigite a quantidade de provas feitas por cada aluno em cada disciplina:\n");
    for(int i = 0; i < NUM_ALUNOS; i++) {
        for(int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Quantidade de provas do aluno %d na disciplina %d: ", i + 1, j + 1);
            scanf("%d", &provas[i][j]);
        }
    }
}
