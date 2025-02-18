#include <stdio.h>

#define NUM_ALUNOS 8
#define NUM_DISCIPLINAS 5

void preencher_idades(int idades[NUM_ALUNOS]);
void preencher_codigos_disciplinas(int codigos[NUM_DISCIPLINAS]);
void preencher_matriz_provas(int provas[NUM_ALUNOS][NUM_DISCIPLINAS]);
int encontrar_disciplina(int codigos[NUM_DISCIPLINAS], int codigo);
void quantidade_alunos_entre_18_25_mais_2_provas(int idades[NUM_ALUNOS], int provas[NUM_ALUNOS][NUM_DISCIPLINAS], int codigo);
void listar_alunos_menos_3_provas(int provas[NUM_ALUNOS][NUM_DISCIPLINAS], int codigo);
void calcular_media_idade_sem_provas(int idades[NUM_ALUNOS], int provas[NUM_ALUNOS][NUM_DISCIPLINAS]);

int main() {
    int idades[NUM_ALUNOS];
    int codigos_disciplinas[NUM_DISCIPLINAS];
    int provas[NUM_ALUNOS][NUM_DISCIPLINAS];
    int codigo;

    // Preencher os dados
    preencher_idades(idades);
    preencher_codigos_disciplinas(codigos_disciplinas);
    preencher_matriz_provas(provas);

    // Verificar quantidade de alunos entre 18 e 25 anos que fizeram mais de 2 provas em uma disciplina
    printf("\nDigite o código da disciplina para verificar alunos entre 18 e 25 anos que fizeram mais de 2 provas: ");
    scanf("%d", &codigo);
    if (encontrar_disciplina(codigos_disciplinas, codigo) == -1) {
        printf("Código de disciplina não cadastrado!\n");
    } else {
        quantidade_alunos_entre_18_25_mais_2_provas(idades, provas, codigo);
    }

    // Listar alunos que fizeram menos que 3 provas em uma disciplina
    printf("\nDigite o código da disciplina para listar alunos que fizeram menos que 3 provas: ");
    scanf("%d", &codigo);
    if (encontrar_disciplina(codigos_disciplinas, codigo) == -1) {
        printf("Código de disciplina não cadastrado!\n");
    } else {
        listar_alunos_menos_3_provas(provas, codigo);
    }

    // Calcular a média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina
    calcular_media_idade_sem_provas(idades, provas);

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

int encontrar_disciplina(int codigos[NUM_DISCIPLINAS], int codigo) {
    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        if (codigos[i] == codigo) {
            return i;
        }
    }
    return -1;
}

void quantidade_alunos_entre_18_25_mais_2_provas(int idades[NUM_ALUNOS], int provas[NUM_ALUNOS][NUM_DISCIPLINAS], int codigo) {
    int disciplina_index = encontrar_disciplina(NULL, codigo);
    int contador = 0;

    for(int i = 0; i < NUM_ALUNOS; i++) {
        if (idades[i] >= 18 && idades[i] <= 25 && provas[i][disciplina_index] > 2) {
            contador++;
        }
    }
    printf("Quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de 2 provas na disciplina %d: %d\n", codigo, contador);
}

void listar_alunos_menos_3_provas(int provas[NUM_ALUNOS][NUM_DISCIPLINAS], int codigo) {
    int disciplina_index = encontrar_disciplina(NULL, codigo);

    printf("Alunos que fizeram menos que 3 provas na disciplina %d:\n", codigo);
    for(int i = 0; i < NUM_ALUNOS; i++) {
        if (provas[i][disciplina_index] < 3) {
            printf("Aluno %d\n", i + 1);
        }
    }
}

void calcular_media_idade_sem_provas(int idades[NUM_ALUNOS], int provas[NUM_ALUNOS][NUM_DISCIPLINAS]) {
    int soma_idades = 0;
    int contador = 0;
    int aluno_ja_contado[NUM_ALUNOS] = {0};

    for(int i = 0; i < NUM_ALUNOS; i++) {
        for(int j = 0; j < NUM_DISCIPLINAS; j++) {
            if (provas[i][j] == 0 && !aluno_ja_contado[i]) {
                soma_idades += idades[i];
                contador++;
                aluno_ja_contado[i] = 1;
                break;
            }
        }
    }

    if (contador > 0) {
        float media_idade = (float)soma_idades / contador;
        printf("Média de idade dos alunos que não fizeram nenhuma prova: %.2f\n", media_idade);
    } else {
        printf("Nenhum aluno deixou de fazer todas as provas.\n");
    }
}
