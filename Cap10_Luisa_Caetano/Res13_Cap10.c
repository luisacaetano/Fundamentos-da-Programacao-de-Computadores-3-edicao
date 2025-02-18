#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 10

typedef struct {
    char nomePaciente[50];
    char nomeMedico[50];
    char dataNascimento[11];
    char sexo[10];
} Paciente;

Paciente pacientes[MAX_PACIENTES];
int totalPacientes = 0;

void cadastrarPaciente() {
    if (totalPacientes >= MAX_PACIENTES) {
        printf("Número máximo de pacientes cadastrados.\n");
        return;
    }

    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]", pacientes[totalPacientes].nomePaciente);
    printf("Digite o nome do médico: ");
    scanf(" %[^\n]", pacientes[totalPacientes].nomeMedico);
    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf(" %[^\n]", pacientes[totalPacientes].dataNascimento);
    printf("Digite o sexo do paciente: ");
    scanf(" %[^\n]", pacientes[totalPacientes].sexo);

    totalPacientes++;
}

void mostrarPacientes() {
    if (totalPacientes == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }

    printf("Pacientes cadastrados:\n");
    for (int i = 0; i < totalPacientes; i++) {
        printf("Nome: %s, Médico: %s, Data de Nascimento: %s, Sexo: %s\n", 
               pacientes[i].nomePaciente, pacientes[i].nomeMedico, 
               pacientes[i].dataNascimento, pacientes[i].sexo);
    }
}

void ordenarPacientes(int crescente) {
    Paciente temp[MAX_PACIENTES];
    memcpy(temp, pacientes, totalPacientes * sizeof(Paciente));

    for (int i = 0; i < totalPacientes - 1; i++) {
        for (int j = i + 1; j < totalPacientes; j++) {
            if ((crescente && strcmp(temp[i].nomePaciente, temp[j].nomePaciente) > 0) ||
                (!crescente && strcmp(temp[i].nomePaciente, temp[j].nomePaciente) < 0)) {
                Paciente aux = temp[i];
                temp[i] = temp[j];
                temp[j] = aux;
            }
        }
    }

    printf("Pacientes em ordem %s:\n", crescente ? "crescente" : "decrescente");
    for (int i = 0; i < totalPacientes; i++) {
        printf("Nome: %s, Médico: %s, Data de Nascimento: %s, Sexo: %s\n", 
               temp[i].nomePaciente, temp[i].nomeMedico, 
               temp[i].dataNascimento, temp[i].sexo);
    }
}

void excluirPaciente() {
    if (totalPacientes == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }

    char nome[50];
    printf("Digite o nome do paciente que deseja remover: ");
    scanf(" %[^\n]", nome);

    int found = 0;
    for (int i = 0; i < totalPacientes; i++) {
        if (strcmp(pacientes[i].nomePaciente, nome) == 0) {
            found = 1;
            for (int j = i; j < totalPacientes - 1; j++) {
                pacientes[j] = pacientes[j + 1];
            }
            totalPacientes--;
            printf("Paciente removido com sucesso.\n");
            break;
        }
    }

    if (!found) {
        printf("Paciente não encontrado.\n");
    }
}

void excluirPacientesPorMedico() {
    if (totalPacientes == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }

    char medico[50];
    printf("Digite o nome do médico cujos pacientes deseja remover: ");
    scanf(" %[^\n]", medico);

    int i = 0;
    while (i < totalPacientes) {
        if (strcmp(pacientes[i].nomeMedico, medico) == 0) {
            for (int j = i; j < totalPacientes - 1; j++) {
                pacientes[j] = pacientes[j + 1];
            }
            totalPacientes--;
            printf("Paciente sob o cuidado do médico %s removido.\n", medico);
        } else {
            i++;
        }
    }

    printf("Todos os pacientes do médico %s foram removidos.\n", medico);
}

int main() {
    int opcao;

    do {
        printf("1. Cadastrar paciente\n");
        printf("2. Mostrar pacientes em ordem de cadastramento\n");
        printf("3. Mostrar pacientes em ordem crescente\n");
        printf("4. Mostrar pacientes em ordem decrescente\n");
        printf("5. Excluir paciente\n");
        printf("6. Excluir pacientes por médico\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPaciente();
                break;
            case 2:
                mostrarPacientes();
                break;
            case 3:
                ordenarPacientes(1);
                break;
            case 4:
                ordenarPacientes(0);
                break;
            case 5:
                excluirPaciente();
                break;
            case 6:
                excluirPacientesPorMedico();
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
