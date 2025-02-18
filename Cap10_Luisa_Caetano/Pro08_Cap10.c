#include <stdio.h>

#define MAX_ESTADOS 15

typedef struct {
    char nome[50];
    int num_veiculos;
    int num_acidentes;
} Estado;

Estado estados[MAX_ESTADOS];
int num_estados = 0;

void cadastrar_estado() {
    Estado estado;
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado.nome);
    printf("Digite o número de veículos em 2012: ");
    scanf("%d", &estado.num_veiculos);
    printf("Digite o número de acidentes de trânsito em 2012: ");
    scanf("%d", &estado.num_acidentes);

    estados[num_estados++] = estado;
    printf("Estado cadastrado com sucesso.\n");
}

void estatisticas() {
    if (num_estados == 0) {
        printf("Nenhum estado cadastrado.\n");
        return;
    }

    int menor_acidentes = estados[0].num_acidentes;
    int maior_acidentes = estados[0].num_acidentes;
    char estado_menor_acidentes[50];
    char estado_maior_acidentes[50];
    int total_acidentes = 0;

    for (int i = 0; i < num_estados; i++) {
        if (estados[i].num_acidentes < menor_acidentes) {
            menor_acidentes = estados[i].num_acidentes;
            strcpy(estado_menor_acidentes, estados[i].nome);
        }
        if (estados[i].num_acidentes > maior_acidentes) {
            maior_acidentes = estados[i].num_acidentes;
            strcpy(estado_maior_acidentes, estados[i].nome);
        }
        total_acidentes += estados[i].num_acidentes;
    }

    printf("Estado com o menor índice de acidentes: %s (%d acidentes)\n", estado_menor_acidentes, menor_acidentes);
    printf("Estado com o maior índice de acidentes: %s (%d acidentes)\n", estado_maior_acidentes, maior_acidentes);

    printf("Média de acidentes: %.2f\n", (float)total_acidentes / num_estados);

    for (int i = 0; i < num_estados; i++) {
        float percentual_veiculos = (float)estados[i].num_veiculos / total_acidentes * 100;
        printf("Estado: %s, Percentual de veículos: %.2f%%\n", estados[i].nome, percentual_veiculos);
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Estado\n");
        printf("2. Mostrar Estatísticas\n");
        printf("3. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_estado(); break;
            case 2: estatisticas(); break;
            case 3: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 3);

    return 0;
}
