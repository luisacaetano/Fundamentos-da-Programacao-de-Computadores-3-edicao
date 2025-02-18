#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CLIENTES 1000
#define MAX_PRATOS 100
#define MAX_INGREDIENTES 15
#define MAX_COZINHEIROS 3

typedef struct {
    int codigo;
    char nome[50];
    int calorias;
    int codigo_cozinheiro;
} Receita;

typedef struct {
    int codigo;
    char descricao[50];
} Ingrediente;

typedef struct {
    int codigo_receita;
    int codigo_ingrediente;
    float quantidade;
    char unidade[10];
} IngredientesReceita;

typedef struct {
    int codigo;
    char nome[50];
    int total_receitas;
} Cozinheiro;

Receita receitas[MAX_PRATOS];
Ingrediente ingredientes[MAX_INGREDIENTES];
IngredientesReceita ingredientes_receita[MAX_PRATOS * MAX_INGREDIENTES];
Cozinheiro cozinheiros[MAX_COZINHEIROS];
int num_receitas = 0;
int num_ingredientes = 0;
int num_cozinheiros = 0;

void cadastrar_cozinheiro() {
    Cozinheiro c;
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &c.codigo);
    printf("Digite o nome do cozinheiro: ");
    scanf(" %[^\n]", c.nome);
    c.total_receitas = 0;

    cozinheiros[num_cozinheiros++] = c;
    printf("Cozinheiro cadastrado com sucesso.\n");
}

void cadastrar_ingrediente() {
    Ingrediente i;
    printf("Digite o código do ingrediente: ");
    scanf("%d", &i.codigo);
    printf("Digite a descrição do ingrediente: ");
    scanf(" %[^\n]", i.descricao);

    ingredientes[num_ingredientes++] = i;
    printf("Ingrediente cadastrado com sucesso.\n");
}

void cadastrar_receita() {
    Receita r;
    printf("Digite o código da receita: ");
    scanf("%d", &r.codigo);
    printf("Digite o nome da receita: ");
    scanf(" %[^\n]", r.nome);
    printf("Digite o total de calorias a cada 100g: ");
    scanf("%d", &r.calorias);
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &r.codigo_cozinheiro);

    for (int i = 0; i < num_cozinheiros; i++) {
        if (cozinheiros[i].codigo == r.codigo_cozinheiro) {
            receitas[num_receitas++] = r;
            cozinheiros[i].total_receitas++;
            printf("Receita cadastrada com sucesso.\n");
            return;
        }
    }
    printf("Código de cozinheiro inválido.\n");
}

void mostrar_receitas_cozinheiro() {
    int codigo_cozinheiro;
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &codigo_cozinheiro);

    printf("Receitas do cozinheiro %d:\n", codigo_cozinheiro);
    for (int i = 0; i < num_receitas; i++) {
        if (receitas[i].codigo_cozinheiro == codigo_cozinheiro) {
            printf("Código da Receita: %d\n", receitas[i].codigo);
            printf("Nome: %s\n", receitas[i].nome);
            printf("Calorias: %d\n", receitas[i].calorias);
            printf("\n");
        }
    }
}

void mostrar_receitas_calorias() {
    int calorias_min, calorias_max;
    printf("Digite o intervalo de calorias (min max): ");
    scanf("%d %d", &calorias_min, &calorias_max);

    printf("Receitas com calorias entre %d e %d:\n", calorias_min, calorias_max);
    for (int i = 0; i < num_receitas; i++) {
        if (receitas[i].calorias >= calorias_min && receitas[i].calorias <= calorias_max) {
            printf("Código da Receita: %d\n", receitas[i].codigo);
            printf("Nome: %s\n", receitas[i].nome);
            printf("Calorias: %d\n", receitas[i].calorias);
            printf("\n");
        }
    }
}

void mostrar_total_receitas() {
    for (int i = 0; i < num_cozinheiros; i++) {
        printf("Cozinheiro %d - Nome: %s, Total de Receitas: %d\n", cozinheiros[i].codigo, cozinheiros[i].nome, cozinheiros[i].total_receitas);
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Cozinheiro\n");
        printf("2. Cadastrar Ingrediente\n");
        printf("3. Cadastrar Receita\n");
        printf("4. Mostrar Receitas de um Cozinheiro\n");
        printf("5. Mostrar Receitas por Intervalo de Calorias\n");
        printf("6. Mostrar Total de Receitas por Cozinheiro\n");
        printf("7. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_cozinheiro(); break;
            case 2: cadastrar_ingrediente(); break;
            case 3: cadastrar_receita(); break;
            case 4: mostrar_receitas_cozinheiro(); break;
            case 5: mostrar_receitas_calorias(); break;
            case 6: mostrar_total_receitas(); break;
            case 7: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 7);

    return 0;
}
