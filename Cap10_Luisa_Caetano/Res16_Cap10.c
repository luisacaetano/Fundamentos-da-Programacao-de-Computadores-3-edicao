#include <stdio.h>
#include <string.h>

#define MAX_CURSOS 6
#define MAX_VAGAS 40

typedef struct {
    int inscricao;
    int idade;
    int pontuacao;
} Candidato;

Candidato cursos[MAX_CURSOS][MAX_VAGAS];
int totalCandidatos[MAX_CURSOS] = {0};

void inserirCandidato(Candidato vetor[], int *total, Candidato novo) {
    int i = *total - 1;
    while (i >= 0 && (vetor[i].pontuacao < novo.pontuacao || 
            (vetor[i].pontuacao == novo.pontuacao && vetor[i].idade < novo.idade))) {
        vetor[i + 1] = vetor[i];
        i--;
    }
    vetor[i + 1] = novo;
    if (*total < MAX_VAGAS) {
        (*total)++;
    }
}

void mostrarAprovados() {
    for (int i = 0; i < MAX_CURSOS; i++) {
        printf("Curso %d:\n", i + 1);
        for (int j = 0; j < totalCandidatos[i]; j++) {
            printf("Inscricao: %d, Idade: %d, Pontuacao: %d\n", 
                    cursos[i][j].inscricao, cursos[i][j].idade, cursos[i][j].pontuacao);
        }
        printf("\n");
    }
}

int main() {
    while (1) {
        Candidato candidato;
        printf("Digite o número de inscrição (negativo para parar): ");
        scanf("%d", &candidato.inscricao);

        if (candidato.inscricao < 0) {
            break;
        }

        printf("Digite a idade: ");
        scanf("%d", &candidato.idade);
        printf("Digite a pontuação: ");
        scanf("%d", &candidato.pontuacao);
        int codigoCurso;
        printf("Digite o código do curso (1 a 6): ");
        scanf("%d", &codigoCurso);

        if (codigoCurso < 1 || codigoCurso > 6) {
            printf("Código do curso inválido!\n");
            continue;
        }

        inserirCandidato(cursos[codigoCurso - 1], &totalCandidatos[codigoCurso - 1], candidato);
    }

    mostrarAprovados();

    return 0;
}
