#include <stdio.h>

#define MAX_RECEBIMENTOS 15

typedef struct {
    int codigo;
    char data[11]; // formato dd/mm/aaaa
    char descricao[100];
    float valor;
} Recebimento;

Recebimento recebimentos[MAX_RECEBIMENTOS];
int num_recebimentos = 0;

void cadastrar_recebimento() {
    Recebimento r;
    printf("Digite o código do recebimento: ");
    scanf("%d", &r.codigo);
    printf("Digite a data (dd/mm/aaaa): ");
    scanf(" %[^\n]", r.data);
    printf("Digite a descrição: ");
    scanf(" %[^\n]", r.descricao);
    printf("Digite o valor: ");
    scanf("%f", &r.valor);

    recebimentos[num_recebimentos++] = r;
    printf("Recebimento cadastrado com sucesso.\n");
}

void mostrar_recebimentos() {
    if (num_recebimentos == 0) {
        printf("Nenhum recebimento cadastrado.\n");
        return;
    }

    float total = 0;
    for (int i = 0; i < num_recebimentos; i++) {
        printf("Código: %d\n", recebimentos[i].codigo);
        printf("Data: %s\n", recebimentos[i].data);
        printf("Descrição: %s\n", recebimentos[i].descricao);
        printf("Valor: %.2f\n", recebimentos[i].valor);
        printf("\n");
        total += recebimentos[i].valor;
    }

    printf("Total Geral: %.2f\n", total);
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Recebimento\n");
        printf("2. Mostrar Recebimentos\n");
        printf("3. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_recebimento(); break;
            case 2: mostrar_recebimentos(); break;
            case 3: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 3);

    return 0;
}
