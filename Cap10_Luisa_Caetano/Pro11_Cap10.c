#include <stdio.h>
#include <string.h>

#define MAX_MEDICOS 10
#define MAX_PACIENTES 10
#define MAX_CONSULTAS 50

typedef struct {
    int cod_medico;
    char nome[50];
    float salario;
} Medico;

typedef struct {
    int cod_paciente;
    char nome[50];
    int idade;
    char endereco[100];
} Paciente;

typedef struct {
    int num_consulta;
    char data[11]; // formato dd/mm/aaaa
    int cod_medico;
    int cod_paciente;
    char diagnostico[100];
} Consulta;

Medico medicos[MAX_MEDICOS];
Paciente pacientes[MAX_PACIENTES];
Consulta consultas[MAX_CONSULTAS];
int num_medicos = 0;
int num_pacientes = 0;
int num_consultas = 0;

void incluir_medico() {
    Medico medico;
    printf("Digite o código do médico: ");
    scanf("%d", &medico.cod_medico);

    for (int i = 0; i < num_medicos; i++) {
        if (medicos[i].cod_medico == medico.cod_medico) {
            printf("Médico já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do médico: ");
    scanf(" %[^\n]", medico.nome);
    printf("Digite o salário do médico: ");
    scanf("%f", &medico.salario);

    medicos[num_medicos++] = medico;
    printf("Médico cadastrado com sucesso.\n");
}

void incluir_paciente() {
    Paciente paciente;
    printf("Digite o código do paciente: ");
    scanf("%d", &paciente.cod_paciente);

    for (int i = 0; i < num_pacientes; i++) {
        if (pacientes[i].cod_paciente == paciente.cod_paciente) {
            printf("Paciente já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]", paciente.nome);
    printf("Digite a idade do paciente: ");
    scanf("%d", &paciente.idade);
    printf("Digite o endereço do paciente: ");
    scanf(" %[^\n]", paciente.endereco);

    pacientes[num_pacientes++] = paciente;
    printf("Paciente cadastrado com sucesso.\n");
}

void incluir_consulta() {
    Consulta consulta;
    printf("Digite o número da consulta: ");
    scanf("%d", &consulta.num_consulta);

    printf("Digite a data da consulta (dd/mm/aaaa): ");
    scanf(" %[^\n]", consulta.data);

    printf("Digite o código do médico: ");
    scanf("%d", &consulta.cod_medico);

    printf("Digite o código do paciente: ");
    scanf("%d", &consulta.cod_paciente);

    printf("Digite o diagnóstico: ");
    scanf(" %[^\n]", consulta.diagnostico);

    consultas[num_consultas++] = consulta;
    printf("Consulta cadastrada com sucesso.\n");
}

void excluir_medico() {
    int cod_medico;
    printf("Digite o código do médico a ser excluído: ");
    scanf("%d", &cod_medico);

    int index = -1;
    for (int i = 0; i < num_medicos; i++) {
        if (medicos[i].cod_medico == cod_medico) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Médico não encontrado.\n");
        return;
    }

    for (int i = 0; i < num_consultas; i++) {
        if (consultas[i].cod_medico == cod_medico) {
            printf("Exclusão não permitida. Médico tem consultas cadastradas.\n");
            return;
        }
    }

    for (int i = index; i < num_medicos - 1; i++) {
        medicos[i] = medicos[i + 1];
    }
    num_medicos--;

    printf("Médico excluído com sucesso.\n");
}

void mostrar_consultas_em_data() {
    char data[11];
    printf("Digite a data (dd/mm/aaaa) para consulta: ");
    scanf(" %[^\n]", data);

    for (int i = 0; i < num_consultas; i++) {
        if (strcmp(consultas[i].data, data) == 0) {
            char nome_medico[50];
            char nome_paciente[50];

            for (int j = 0; j < num_medicos; j++) {
                if (medicos[j].cod_medico == consultas[i].cod_medico) {
                    strcpy(nome_medico, medicos[j].nome);
                    break;
                }
            }

            for (int j = 0; j < num_pacientes; j++) {
                if (pacientes[j].cod_paciente == consultas[i].cod_paciente) {
                    strcpy(nome_paciente, pacientes[j].nome);
                    break;
                }
            }

            printf("Número da Consulta: %d\n", consultas[i].num_consulta);
            printf("Data: %s\n", consultas[i].data);
            printf("Médico: %s\n", nome_medico);
            printf("Paciente: %s\n", nome_paciente);
            printf("Diagnóstico: %s\n\n", consultas[i].diagnostico);
        }
    }
}

int main() {
    int opcao;
    do {
        printf("1. Incluir Médico\n");
        printf("2. Incluir Paciente\n");
        printf("3. Incluir Consulta\n");
        printf("4. Excluir Médico\n");
        printf("5. Mostrar Consultas em Data\n");
        printf("6. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: incluir_medico(); break;
            case 2: incluir_paciente(); break;
            case 3: incluir_consulta(); break;
            case 4: excluir_medico(); break;
            case 5: mostrar_consultas_em_data(); break;
            case 6: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 6);

    return 0;
}
