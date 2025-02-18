#include <stdio.h>

#define MAX_TOMBOS 20
#define MAX_EXEMPLARES 3

typedef struct {
    int numero_tombo;
    char nome[50];
    char autor[50];
    char editora[50];
    int codigo_area;
} Tombo;

typedef struct {
    int numero_tombo;
    int numero_exemplar;
    char data_compra[11]; // formato dd/mm/aaaa
} Exemplar;

Tombo tombos[MAX_TOMBOS];
Exemplar exemplares[MAX_TOMBOS * MAX_EXEMPLARES];
int num_tombos = 0;
int num_exemplares = 0;

void cadastrar_tombo() {
    Tombo t;
    printf("Digite o número do tombo: ");
    scanf("%d", &t.numero_tombo);
    printf("Digite o nome da obra: ");
    scanf(" %[^\n]", t.nome);
    printf("Digite o autor da obra: ");
    scanf(" %[^\n]", t.autor);
    printf("Digite a editora da obra: ");
    scanf(" %[^\n]", t.editora);
    printf("Digite o código da área: ");
    scanf("%d", &t.codigo_area);

    for (int i = 0; i < num_tombos; i++) {
        if (tombos[i].numero_tombo == t.numero_tombo) {
            printf("Tombo já cadastrado.\n");
            return;
        }
    }

    tombos[num_tombos++] = t;
    printf("Tombo cadastrado com sucesso.\n");
}

void cadastrar_exemplar() {
    Exemplar e;
    printf("Digite o número do tombo do exemplar: ");
    scanf("%d", &e.numero_tombo);
    printf("Digite o número do exemplar: ");
    scanf("%d", &e.numero_exemplar);
    printf("Digite a data de compra (dd/mm/aaaa): ");
    scanf(" %[^\n]", e.data_compra);

    for (int i = 0; i < num_tombos; i++) {
        if (tombos[i].numero_tombo == e.numero_tombo) {
            exemplares[num_exemplares++] = e;
            printf("Exemplar cadastrado com sucesso.\n");
            return;
        }
    }
    printf("Número de tombo inválido.\n");
}

void mostrar_exemplares_por_tombo() {
    int numero_tombo;
    printf("Digite o número do tombo: ");
    scanf("%d", &numero_tombo);

    printf("Exemplares do tombo %d:\n", numero_tombo);
    for (int i = 0; i < num_exemplares; i++) {
        if (exemplares[i].numero_tombo == numero_tombo) {
            printf("Número do Exemplar: %d\n", exemplares[i].numero_exemplar);
            printf("Data de Compra: %s\n", exemplares[i].data_compra);
            printf("\n");
        }
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Tombo\n");
        printf("2. Cadastrar Exemplar\n");
        printf("3. Mostrar Exemplares por Tombo\n");
        printf("4. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_tombo(); break;
            case 2: cadastrar_exemplar(); break;
            case 3: mostrar_exemplares_por_tombo(); break;
            case 4: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 4);

    return 0;
}
