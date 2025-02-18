#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 10
#define MAX_DISCIPLINAS 6
#define MAX_MATRICULAS 3

typedef struct {
    int codigo;
    char nome[50];
    int serie;
} Aluno;

typedef struct {
    int codigo;
    char descricao[50];
    int cargaHoraria;
} Disciplina;

typedef struct {
    int codigoAluno;
    int codigoDisciplina;
    int totalFaltas;
    float notaFinal;
} Matricula;

Aluno alunos[MAX_ALUNOS];
Disciplina disciplinas[MAX_DISCIPLINAS];
Matricula matriculas[MAX_ALUNOS * MAX_MATRICULAS];

int totalAlunos = 0;
int totalDisciplinas = 0;
int totalMatriculas = 0;

void cadastrarDisciplina() {
    if (totalDisciplinas >= MAX_DISCIPLINAS) {
        printf("Número máximo de disciplinas cadastradas.\n");
        return;
    }

    int codigo;
    printf("Digite o código da disciplina: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalDisciplinas; i++) {
        if (disciplinas[i].codigo == codigo) {
            printf("Código de disciplina já cadastrado.\n");
            return;
        }
    }

    disciplinas[totalDisciplinas].codigo = codigo;
    printf("Digite a descrição da disciplina: ");
    scanf(" %[^\n]", disciplinas[totalDisciplinas].descricao);
    printf("Digite a carga horária da disciplina: ");
    scanf("%d", &disciplinas[totalDisciplinas].cargaHoraria);

    totalDisciplinas++;
}

void cadastrarAluno() {
    if (totalAlunos >= MAX_ALUNOS) {
        printf("Número máximo de alunos cadastrados.\n");
        return;
    }

    int codigo;
    printf("Digite o código do aluno: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].codigo == codigo) {
            printf("Código de aluno já cadastrado.\n");
            return;
        }
    }

    alunos[totalAlunos].codigo = codigo;
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", alunos[totalAlunos].nome);

    int serie;
    do {
        printf("Digite a série do aluno (5 a 9): ");
        scanf("%d", &serie);
        if (serie < 5 || serie > 9) {
            printf("Série inválida!\n");
        }
    } while (serie < 5 || serie > 9);

    alunos[totalAlunos].serie = serie;
    totalAlunos++;
}

void realizarMatricula() {
    if (totalMatriculas >= MAX_ALUNOS * MAX_MATRICULAS) {
        printf("Número máximo de matrículas realizadas.\n");
        return;
    }

    int codigoAluno;
    printf("Digite o código do aluno: ");
    scanf("%d", &codigoAluno);

    int alunoExiste = 0;
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].codigo == codigoAluno) {
            alunoExiste = 1;
            break;
        }
    }

    if (!alunoExiste) {
        printf("Aluno não encontrado.\n");
        return;
    }

    int codigoDisciplina;
    printf("Digite o código da disciplina: ");
    scanf("%d", &codigoDisciplina);

    int disciplinaExiste = 0;
    for (int i = 0; i < totalDisciplinas; i++) {
        if (disciplinas[i].codigo == codigoDisciplina) {
            disciplinaExiste = 1;
            break;
        }
    }

    if (!disciplinaExiste) {
        printf("Disciplina não encontrada.\n");
        return;
    }

    int matriculasAluno = 0;
    for (int i = 0; i < totalMatriculas; i++) {
        if (matriculas[i].codigoAluno == codigoAluno) {
            if (matriculas[i].codigoDisciplina == codigoDisciplina) {
                printf("Aluno já matriculado nessa disciplina.\n");
                return;
            }
            matriculasAluno++;
        }
    }

    if (matriculasAluno >= MAX_MATRICULAS) {
        printf("Aluno já está matriculado no máximo de disciplinas permitidas.\n");
        return;
    }

    matriculas[totalMatriculas].codigoAluno = codigoAluno;
    matriculas[totalMatriculas].codigoDisciplina = codigoDisciplina;
    matriculas[totalMatriculas].totalFaltas = 0;
    matriculas[totalMatriculas].notaFinal = 0.0;

    totalMatriculas++;
}

void lancarResultados() {
    int codigoAluno, codigoDisciplina;
    printf("Digite o código do aluno: ");
    scanf("%d", &codigoAluno);
    printf("Digite o código da disciplina: ");
    scanf("%d", &codigoDisciplina);

    for (int i = 0; i < totalMatriculas; i++) {
        if (matriculas[i].codigoAluno == codigoAluno && matriculas[i].codigoDisciplina == codigoDisciplina) {
            printf("Digite o total de faltas: ");
            scanf("%d", &matriculas[i].totalFaltas);
            printf("Digite a nota final: ");
            scanf("%f", &matriculas[i].notaFinal);
            return;
        }
    }

    printf("Matrícula não encontrada.\n");
}

void consultarReprovados() {
    printf("Alunos reprovados:\n");
    for (int i = 0; i < totalMatriculas; i++) {
        int codigoDisciplina = matriculas[i].codigoDisciplina;
        int cargaHoraria = 0;

        for (int j = 0; j < totalDisciplinas; j++) {
            if (disciplinas[j].codigo == codigoDisciplina) {
                cargaHoraria = disciplinas[j].cargaHoraria;
                break;
            }
        }

        if (matriculas[i].notaFinal < 7.0 || matriculas[i].totalFaltas > (0.25 * cargaHoraria)) {
            for (int k = 0; k < totalAlunos; k++) {
                if (alunos[k].codigo == matriculas[i].codigoAluno) {
                    printf("Aluno: %s, Disciplina: %d\n", alunos[k].nome, matriculas[i].codigoDisciplina);
                    break;
                }
            }
        }
    }
}

void consultarDisciplinasAluno() {
    int codigoAluno;
    printf("Digite o código do aluno: ");
    scanf("%d", &codigoAluno);

    printf("Disciplinas cursadas pelo aluno %d:\n", codigoAluno);
    for (int i = 0; i < totalMatriculas; i++) {
        if (matriculas[i].codigoAluno == codigoAluno) {
            for (int j = 0; j < totalDisciplinas; j++) {
                if (disciplinas[j].codigo == matriculas[i].codigoDisciplina) {
                    printf("Disciplina: %s\n", disciplinas[j].descricao);
                    printf("Total de faltas: %d\n", matriculas[i].totalFaltas);
                    printf("Nota final: %.2f\n", matriculas[i].notaFinal);
                    printf("Resultado: %s\n\n", (matriculas[i].notaFinal >= 7.0 && matriculas[i].totalFaltas <= (0.25 * disciplinas[j].cargaHoraria)) ? "Aprovado" : "Reprovado");
                    break;
                }
            }
        }
    }
}

int main() {
    int opcao;

    do {
        printf("1. Cadastrar disciplina\n");
        printf("2. Cadastrar aluno\n");
        printf("3. Realizar matrícula\n");
        printf("4. Lançar resultados\n");
        printf("5. Consultar alunos reprovados\n");
        printf("6. Consultar disciplinas cursadas por um aluno\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarDisciplina();
                break;
            case 2:
                cadastrarAluno();
                break;
            case 3:
                realizarMatricula();
                break;
            case 4:
                lancarResultados();
                break;
            case 5:
                consultarReprovados();
                break;
            case 6:
                consultarDisciplinasAluno();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
