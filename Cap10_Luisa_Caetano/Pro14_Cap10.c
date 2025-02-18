#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 5
#define MAX_MEDICOS 3
#define MAX_CONSULTAS 10

typedef struct {
    int cod_paciente;
    char nome[50];
    char endereco[100];
    char fone[15];
} Paciente;

typedef struct {
    int cod_medico;
    char nome[50];
    char fone[15];
    char endereco[100];
} Medico;

typedef struct {
    int num_consulta;
    char dia_semana[10];
    char hora[6]; // formato HH:MM
    int cod_medico;
    int cod_paciente;
} Consulta;

Paciente pacientes[MAX_PACIENTES];
Medico medicos[MAX_MEDICOS];
Consulta consultas[MAX_CONSULTAS];
int num_pacientes = 0;
int num_medicos = 0;
int num_consultas = 0;

void cadastrar_paciente() {
    Paciente p;
    printf("Digite o código do paciente: ");
    scanf("%d", &p.cod_paciente);

    for (int i = 0; i < num_pacientes; i++) {
        if (pacientes[i].cod_paciente == p.cod_paciente) {
            printf("Paciente já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]", p.nome);
    printf("Digite o endereço do paciente: ");
    scanf(" %[^\n]", p.endereco);
    printf("Digite o telefone do paciente: ");
    scanf(" %[^\n]", p.fone);

    pacientes[num_pacientes++] = p;
    printf("Paciente cadastrado com sucesso.\n");
}

void cadastrar_medico() {
    Medico m;
    printf("Digite o código do médico: ");
    scanf("%d", &m.cod_medico);

    for (int i = 0; i < num_medicos; i++) {
        if (medicos[i].cod_medico == m.cod_medico) {
            printf("Médico já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do médico: ");
    scanf(" %[^\n]", m.nome);
    printf("Digite o telefone do médico: ");
    scanf(" %[^\n]", m.fone);
    printf("Digite o endereço do médico: ");
    scanf(" %[^\n]", m.endereco);

    medicos[num_medicos++] = m;
    printf("Médico cadastrado com sucesso.\n");
}

void cadastrar_consulta() {
    Consulta c;
    printf("Digite o número da consulta: ");
    scanf("%d", &c.num_consulta);
    printf("Digite o dia da semana (segunda, terça, ...): ");
    scanf(" %[^\n]", c.dia_semana);
    printf("Digite a hora da consulta (HH:MM): ");
    scanf(" %[^\n]", c.hora);
    printf("Digite o código do médico: ");
    scanf("%d", &c.cod_medico);
    printf("Digite o código do paciente: ");
    scanf("%d", &c.cod_paciente);

    consultas[num_consultas++] = c;
    printf("Consulta cadastrada com sucesso.\n");
}

void mostrar_consultas_em_dia() {
    char dia[10];
    printf("Digite o dia da semana (segunda, terça, ...): ");
    scanf(" %[^\n]", dia);

    for (int i = 0; i < num_consultas; i++) {
        if (strcmp(consultas[i].dia_semana, dia) == 0) {
            printf("Número da Consulta: %d\n", consultas[i].num_consulta);
            printf("Hora: %s\n", consultas[i].hora);

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

            printf("Médico: %s\n", nome_medico);
            printf("Paciente: %s\n", nome_paciente);
            printf("\n");
        }
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Paciente\n");
        printf("2. Cadastrar Médico\n");
        printf("3. Cadastrar Consulta\n");
        printf("4. Mostrar Consultas em um Dia\n");
        printf("5. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_paciente(); break;
            case 2: cadastrar_medico(); break;
            case 3: cadastrar_consulta(); break;
            case 4: mostrar_consultas_em_dia(); break;
            case 5: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 5);

    return 0;
}
