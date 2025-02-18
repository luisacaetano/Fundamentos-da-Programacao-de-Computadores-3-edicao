#include <stdio.h>
#include <string.h>

#define MAX_ESTILISTAS 3
#define MAX_ESTACOES 2
#define MAX_ROUPAS 30

typedef struct {
    int codigo;
    char nome[50];
    float salario;
} Estilista;

typedef struct {
    int codigo;
    char nome[50];
} Estacao;

typedef struct {
    int codigo;
    char descricao[50];
    int codigo_estilista;
    int codigo_estacao;
    int ano;
} Roupa;

Estilista estilistas[MAX_ESTILISTAS];
Estacao estacoes[MAX_ESTACOES];
Roupa roupas[MAX_ROUPAS];
int num_estilistas = 0;
int num_estacoes = 0;
int num_roupas = 0;

void cadastrar_estilista() {
    Estilista e;
    printf("Digite o código do estilista: ");
    scanf("%d", &e.codigo);
    printf("Digite o nome do estilista: ");
    scanf(" %[^\n]", e.nome);
    printf("Digite o salário do estilista: ");
    scanf("%f", &e.salario);

    for (int i = 0; i < num_estilistas; i++) {
        if (estilistas[i].codigo == e.codigo) {
            printf("Estilista já cadastrado.\n");
            return;
        }
    }

    estilistas[num_estilistas++] = e;
    printf("Estilista cadastrado com sucesso.\n");
}

void cadastrar_estacao() {
    Estacao e;
    printf("Digite o código da estação: ");
    scanf("%d", &e.codigo);
    printf("Digite o nome da estação: ");
    scanf(" %[^\n]", e.nome);

    for (int i = 0; i < num_estacoes; i++) {
        if (estacoes[i].codigo == e.codigo) {
            printf("Estação já cadastrada.\n");
            return;
        }
    }

    estacoes[num_estacoes++] = e;
    printf("Estação cadastrada com sucesso.\n");
}

void cadastrar_roupa() {
    Roupa r;
    printf("Digite o código da roupa: ");
    scanf("%d", &r.codigo);
    printf("Digite a descrição da roupa: ");
    scanf(" %[^\n]", r.descricao);
    printf("Digite o código do estilista: ");
    scanf("%d", &r.codigo_estilista);
    printf("Digite o código da estação: ");
    scanf("%d", &r.codigo_estacao);
    printf("Digite o ano da roupa: ");
    scanf("%d", &r.ano);

    for (int i = 0; i < num_estilistas; i++) {
        if (estilistas[i].codigo == r.codigo_estilista) {
            for (int j = 0; j < num_estacoes; j++) {
                if (estacoes[j].codigo == r.codigo_estacao) {
                    roupas[num_roupas++] = r;
                    printf("Roupa cadastrada com sucesso.\n");
                    return;
                }
            }
            printf("Código de estação inválido.\n");
            return;
        }
    }
    printf("Código de estilista inválido.\n");
}

void mostrar_roupas_por_estacao() {
    int cod_estacao;
    printf("Digite o código da estação: ");
    scanf("%d", &cod_estacao);

    for (int i = 0; i < num_roupas; i++) {
        if (roupas[i].codigo_estacao == cod_estacao) {
            printf("Código da Roupa: %d\n", roupas[i].codigo);
            printf("Descrição: %s\n", roupas[i].descricao);
            printf("Ano: %d\n", roupas[i].ano);

            for (int j = 0; j < num_estilistas; j++) {
                if (estilistas[j].codigo == roupas[i].codigo_estilista) {
                    printf("Estilista: %s\n", estilistas[j].nome);
                    break;
                }
            }
            printf("\n");
        }
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Estilista\n");
        printf("2. Cadastrar Estação\n");
        printf("3. Cadastrar Roupa\n");
        printf("4. Mostrar Roupas por Estação\n");
        printf("5. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_estilista(); break;
            case 2: cadastrar_estacao(); break;
            case 3: cadastrar_roupa(); break;
            case 4: mostrar_roupas_por_estacao(); break;
            case 5: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 5);

    return 0;
}
