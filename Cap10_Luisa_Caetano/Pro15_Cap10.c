#include <stdio.h>

#define MAX_COZINHEIROS 3
#define MAX_INGREDIENTES 15
#define MAX_RECEITAS 20

typedef struct {
    int codigo;
    char nome[50];
    float calorias;
} Receita;

typedef struct {
    int codigo;
    char descricao[50];
} Ingrediente;

typedef struct {
    int codigo_ingrediente;
    int codigo_receita;
    float quantidade;
    char unidade[10];
} Ingredientes_Receita;

typedef struct {
    int codigo;
    char nome[50];
    float salario;
} Cozinheiro;

Cozinheiro cozinheiros[MAX_COZINHEIROS];
Ingrediente ingredientes[MAX_INGREDIENTES];
Receita receitas[MAX_RECEITAS];
Ingredientes_Receita ingredientes_receita[MAX_RECEITAS * 3]; // Max 3 ingredientes por receita
int num_cozinheiros = 0;
int num_ingredientes = 0;
int num_receitas = 0;
int num_ingredientes_receita = 0;

void cadastrar_cozinheiro() {
    Cozinheiro c;
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &c.codigo);
    printf("Digite o nome do cozinheiro: ");
    scanf(" %[^\n]", c.nome);
    printf("Digite o salário do cozinheiro: ");
    scanf("%f", &c.salario);

    for (int i = 0; i < num_cozinheiros; i++) {
        if (cozinheiros[i].codigo == c.codigo) {
            printf("Cozinheiro já cadastrado.\n");
            return;
        }
    }

    cozinheiros[num_cozinheiros++] = c;
    printf("Cozinheiro cadastrado com sucesso.\n");
}

void cadastrar_ingrediente() {
    Ingrediente i;
    printf("Digite o código do ingrediente: ");
    scanf("%d", &i.codigo);
    printf("Digite a descrição do ingrediente: ");
    scanf(" %[^\n]", i.descricao);

    for (int i = 0; i < num_ingredientes; i++) {
        if (ingredientes[i].codigo == i.codigo) {
            printf("Ingrediente já cadastrado.\n");
            return;
        }
    }

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
    scanf("%f", &r.calorias);

    for (int i = 0; i < num_receitas; i++) {
        if (receitas[i].codigo == r.codigo) {
            printf("Receita já cadastrada.\n");
            return;
        }
    }

    receitas[num_receitas++] = r;
    printf("Receita cadastrada com sucesso.\n");

    for (int i = 0; i < 3; i++) {
        Ingredientes_Receita ir;
        printf("Digite o código do ingrediente %d (0 para finalizar): ", i + 1);
        scanf("%d", &ir.codigo_ingrediente);
        if (ir.codigo_ingrediente == 0) break;
        ir.codigo_receita = r.codigo;
        printf("Digite a quantidade: ");
        scanf("%f", &ir.quantidade);
        printf("Digite a unidade de medida: ");
        scanf(" %[^\n]", ir.unidade);

        ingredientes_receita[num_ingredientes_receita++] = ir;
    }
}

void mostrar_receitas_por_cozinheiro() {
    int cod_cozinheiro;
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &cod_cozinheiro);

    printf("Receitas de cozinheiro %d:\n", cod_cozinheiro);
    for (int i = 0; i < num_receitas; i++) {
        for (int j = 0; j < num_ingredientes_receita; j++) {
            if (receitas[i].codigo == ingredientes_receita[j].codigo_receita) {
                if (cozinheiros[cod_cozinheiro].codigo == cod_cozinheiro) {
                    printf("Código: %d\n", receitas[i].codigo);
                    printf("Nome: %s\n", receitas[i].nome);
                    printf("Calorias: %.2f\n", receitas[i].calorias);
                    printf("\n");
                    break;
                }
            }
        }
    }
}

void mostrar_receitas_por_calorias() {
    float min_calorias, max_calorias;
    printf("Digite o intervalo de calorias (min max): ");
    scanf("%f %f", &min_calorias, &max_calorias);

    printf("Receitas com calorias entre %.2f e %.2f:\n", min_calorias, max_calorias);
    for (int i = 0; i < num_receitas; i++) {
        if (receitas[i].calorias >= min_calorias && receitas[i].calorias <= max_calorias) {
            printf("Código: %d\n", receitas[i].codigo);
            printf("Nome: %s\n", receitas[i].nome);
            printf("Calorias: %.2f\n", receitas[i].calorias);
            printf("\n");
        }
    }
}

void mostrar_total_receitas_por_cozinheiro() {
    int cod_cozinheiro;
    printf("Digite o código do cozinheiro: ");
    scanf("%d", &cod_cozinheiro);

    int total_receitas = 0;
    for (int i = 0; i < num_receitas; i++) {
        for (int j = 0; j < num_ingredientes_receita; j++) {
            if (receitas[i].codigo == ingredientes_receita[j].codigo_receita) {
                if (cozinheiros[cod_cozinheiro].codigo == cod_cozinheiro) {
                    total_receitas++;
                    break;
                }
            }
        }
    }

    printf("Total de receitas elaboradas pelo cozinheiro %d: %d\n", cod_cozinheiro, total_receitas);
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Cozinheiro\n");
        printf("2. Cadastrar Ingrediente\n");
        printf("3. Cadastrar Receita\n");
        printf("4. Mostrar Receitas por Cozinheiro\n");
        printf("5. Mostrar Receitas por Calorias\n");
        printf("6. Mostrar Total de Receitas por Cozinheiro\n");
        printf("7. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_cozinheiro(); break;
            case 2: cadastrar_ingrediente(); break;
            case 3: cadastrar_receita(); break;
            case 4: mostrar_receitas_por_cozinheiro(); break;
            case 5: mostrar_receitas_por_calorias(); break;
            case 6: mostrar_total_receitas_por_cozinheiro(); break;
            case 7: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 7);

    return 0;
}
