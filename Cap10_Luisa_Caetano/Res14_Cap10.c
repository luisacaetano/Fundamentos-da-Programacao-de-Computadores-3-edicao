#include <stdio.h>
#include <string.h>

#define MAX_BARCOS 6
#define MAX_REGATAS 3
#define MAX_PARTICIPANTES 4

typedef struct {
    int numeroBarco;
    char nomeBarco[50];
    int anoFabricacao;
} Barco;

typedef struct {
    int numeroRegata;
    char data[11];
    char horaInicio[6];
    int codigoBarcoVencedor;
} Regata;

typedef struct {
    int numeroRegata;
    int numeroBarco;
    char horaChegada[6];
} BarcoRegata;

Barco barcos[MAX_BARCOS];
Regata regatas[MAX_REGATAS];
BarcoRegata barcoRegata[MAX_REGATAS * MAX_PARTICIPANTES];
int totalBarcos = 0;
int totalRegatas = 0;
int totalBarcoRegata = 0;

void cadastrarBarco() {
    if (totalBarcos >= MAX_BARCOS) {
        printf("Número máximo de barcos cadastrados.\n");
        return;
    }

    int numero;
    printf("Digite o número do barco: ");
    scanf("%d", &numero);

    for (int i = 0; i < totalBarcos; i++) {
        if (barcos[i].numeroBarco == numero) {
            printf("Barco com esse número já cadastrado.\n");
            return;
        }
    }

    barcos[totalBarcos].numeroBarco = numero;
    printf("Digite o nome do barco: ");
    scanf(" %[^\n]", barcos[totalBarcos].nomeBarco);
    printf("Digite o ano de fabricação: ");
    scanf("%d", &barcos[totalBarcos].anoFabricacao);

    totalBarcos++;
}

void cadastrarRegata() {
    if (totalRegatas >= MAX_REGATAS) {
        printf("Número máximo de regatas cadastradas.\n");
        return;
    }

    int numero;
    printf("Digite o número da regata: ");
    scanf("%d", &numero);

    for (int i = 0; i < totalRegatas; i++) {
        if (regatas[i].numeroRegata == numero) {
            printf("Regata com esse número já cadastrada.\n");
            return;
        }
    }

    regatas[totalRegatas].numeroRegata = numero;
    printf("Digite a data da regata (dd/mm/aaaa): ");
    scanf(" %[^\n]", regatas[totalRegatas].data);
    printf("Digite a hora de início (hh:mm): ");
    scanf(" %[^\n]", regatas[totalRegatas].horaInicio);
    regatas[totalRegatas].codigoBarcoVencedor = -1;

    totalRegatas++;
}

void cadastrarParticipantes() {
    if (totalRegatas == 0) {
        printf("Nenhuma regata cadastrada.\n");
        return;
    }

    int numeroRegata, numeroBarco;
    printf("Digite o número da regata: ");
    scanf("%d", &numeroRegata);

    int regataIndex = -1;
    for (int i = 0; i < totalRegatas; i++) {
        if (regatas[i].numeroRegata == numeroRegata) {
            regataIndex = i;
            break;
        }
    }

    if (regataIndex == -1) {
        printf("Regata não encontrada.\n");
        return;
    }

    int countParticipantes = 0;
    for (int i = 0; i < totalBarcoRegata; i++) {
        if (barcoRegata[i].numeroRegata == numeroRegata) {
            countParticipantes++;
        }
    }

    if (countParticipantes >= MAX_PARTICIPANTES) {
        printf("Número máximo de barcos participantes atingido para essa regata.\n");
        return;
    }

    printf("Digite o número do barco: ");
    scanf("%d", &numeroBarco);

    for (int i = 0; i < totalBarcoRegata; i++) {
        if (barcoRegata[i].numeroRegata == numeroRegata && barcoRegata[i].numeroBarco == numeroBarco) {
            printf("Esse barco já está cadastrado nessa regata.\n");
            return;
        }
    }

    int barcoIndex = -1;
    for (int i = 0; i < totalBarcos; i++) {
        if (barcos[i].numeroBarco == numeroBarco) {
            barcoIndex = i;
            break;
        }
    }

    if (barcoIndex == -1) {
        printf("Barco não encontrado.\n");
        return;
    }

    barcoRegata[totalBarcoRegata].numeroRegata = numeroRegata;
    barcoRegata[totalBarcoRegata].numeroBarco = numeroBarco;
    printf("Digite a hora de chegada (hh:mm): ");
    scanf(" %[^\n]", barcoRegata[totalBarcoRegata].horaChegada);

    totalBarcoRegata++;

    if (regatas[regataIndex].codigoBarcoVencedor == -1) {
        regatas[regataIndex].codigoBarcoVencedor = numeroBarco;
    } else {
        // Comparar os tempos de chegada
        int horaVencedor, minutoVencedor, horaNovo, minutoNovo;
        sscanf(barcoRegata[totalBarcoRegata - 1].horaChegada, "%d:%d", &horaNovo, &minutoNovo);

        for (int i = 0; i < totalBarcoRegata; i++) {
            if (barcoRegata[i].numeroRegata == numeroRegata && barcoRegata[i].numeroBarco == regatas[regataIndex].codigoBarcoVencedor) {
                sscanf(barcoRegata[i].horaChegada, "%d:%d", &horaVencedor, &minutoVencedor);
                break;
            }
        }

        if ((horaNovo < horaVencedor) || (horaNovo == horaVencedor && minutoNovo < minutoVencedor)) {
            regatas[regataIndex].codigoBarcoVencedor = numeroBarco;
        }
    }
}

void mostrarRegatas() {
    if (totalRegatas == 0) {
        printf("Nenhuma regata cadastrada.\n");
        return;
    }

    printf("Regatas realizadas:\n");
    for (int i = 0; i < totalRegatas; i++) {
        printf("Número da Regata: %d, Data: %s, Hora de Início: %s\n", regatas[i].numeroRegata, regatas[i].data, regatas[i].horaInicio);

        if (regatas[i].codigoBarcoVencedor != -1) {
            for (int j = 0; j < totalBarcos; j++) {
                if (barcos[j].numeroBarco == regatas[i].codigoBarcoVencedor) {
                    printf("Barco Vencedor: %s\n", barcos[j].nomeBarco);
                    break;
                }
            }
        } else {
            printf("Nenhum barco vencedor registrado.\n");
        }
    }
}

void mostrarBarcosPorRegata() {
    if (totalRegatas == 0) {
        printf("Nenhuma regata cadastrada.\n");
        return;
    }

    int numeroRegata;
    printf("Digite o número da regata: ");
    scanf("%d", &numeroRegata);

    int regataEncontrada = 0;

    printf("Barcos participantes da Regata %d:\n", numeroRegata);
    for (int i = 0; i < totalBarcoRegata; i++) {
        if (barcoRegata[i].numeroRegata == numeroRegata) {
            regataEncontrada = 1;
            for (int j = 0; j < totalBarcos; j++) {
                if (barcos[j].numeroBarco == barcoRegata[i].numeroBarco) {
                    printf("Barco: %s, Hora de Chegada: %s\n", barcos[j].nomeBarco, barcoRegata[i].horaChegada);
                }
            }
        }
    }

    if (!regataEncontrada) {
        printf("Nenhum barco encontrado para essa regata.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Barco\n");
        printf("2. Cadastrar Regata\n");
        printf("3. Cadastrar Participantes\n");
        printf("4. Mostrar Regatas Realizadas e Barco Vencedor\n");
        printf("5. Mostrar Barcos por Regata\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarBarco();
                break;
            case 2:
                cadastrarRegata();
                break;
            case 3:
                cadastrarParticipantes();
                break;
            case 4:
                mostrarRegatas();
                break;
            case 5:
                mostrarBarcosPorRegata();
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
