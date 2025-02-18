#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VENDEDORES 4
#define MESES 12

typedef struct {
    int codigo;
    char nome[50];
} Vendedor;

typedef struct {
    int codigo_vendedor;
    int mes;
    float valor;
} Venda;

Vendedor vendedores[MAX_VENDEDORES];
Venda vendas[MAX_VENDEDORES * MESES];
int num_vendedores = 0;
int num_vendas = 0;

void cadastrar_vendedor() {
    if (num_vendedores >= MAX_VENDEDORES) {
        printf("Número máximo de vendedores alcançado.\n");
        return;
    }
    
    Vendedor vendedor;
    printf("Digite o código do vendedor: ");
    scanf("%d", &vendedor.codigo);

    for (int i = 0; i < num_vendedores; i++) {
        if (vendedores[i].codigo == vendedor.codigo) {
            printf("Código já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do vendedor: ");
    scanf(" %[^\n]", vendedor.nome);
    vendedores[num_vendedores++] = vendedor;
    printf("Vendedor cadastrado com sucesso.\n");
}

void cadastrar_venda() {
    int codigo_vendedor, mes;
    float valor;
    
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo_vendedor);
    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o valor da venda: ");
    scanf("%f", &valor);

    for (int i = 0; i < num_vendas; i++) {
        if (vendas[i].codigo_vendedor == codigo_vendedor && vendas[i].mes == mes) {
            printf("Venda já cadastrada para esse vendedor e mês.\n");
            return;
        }
    }

    vendas[num_vendas++] = (Venda){codigo_vendedor, mes, valor};
    printf("Venda cadastrada com sucesso.\n");
}

void consultar_vendas_funcionario() {
    int codigo_vendedor, mes;
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo_vendedor);
    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);

    float total = 0;
    for (int i = 0; i < num_vendas; i++) {
        if (vendas[i].codigo_vendedor == codigo_vendedor && vendas[i].mes == mes) {
            total += vendas[i].valor;
        }
    }

    printf("Total de vendas do vendedor %d no mês %d: %.2f\n", codigo_vendedor, mes, total);
}

void consultar_total_vendas_vendedor() {
    int codigo_vendedor;
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo_vendedor);

    float total = 0;
    for (int i = 0; i < num_vendas; i++) {
        if (vendas[i].codigo_vendedor == codigo_vendedor) {
            total += vendas[i].valor;
        }
    }

    printf("Total de vendas do vendedor %d: %.2f\n", codigo_vendedor, total);
}

void vendedor_mais_vendeu_mes() {
    int mes;
    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);

    int codigo_vendedor_max = -1;
    float max_vendas = 0;

    for (int i = 0; i < num_vendedores; i++) {
        float total = 0;
        for (int j = 0; j < num_vendas; j++) {
            if (vendas[j].codigo_vendedor == vendedores[i].codigo && vendas[j].mes == mes) {
                total += vendas[j].valor;
            }
        }
        if (total > max_vendas) {
            max_vendas = total;
            codigo_vendedor_max = vendedores[i].codigo;
        }
    }

    printf("Vendedor que mais vendeu no mês %d: %d\n", mes, codigo_vendedor_max);
}

void mes_mais_vendas() {
    float total_meses[MESES] = {0};

    for (int i = 0; i < num_vendas; i++) {
        total_meses[vendas[i].mes - 1] += vendas[i].valor;
    }

    int mes_max = 0;
    float max_vendas = total_meses[0];
    for (int i = 1; i < MESES; i++) {
        if (total_meses[i] > max_vendas) {
            max_vendas = total_meses[i];
            mes_max = i;
        }
    }

    printf("Mês com mais vendas: %d\n", mes_max + 1);
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar vendedor\n");
        printf("2. Cadastrar venda\n");
        printf("3. Consultar vendas de um funcionário em determinado mês\n");
        printf("4. Consultar total das vendas de um vendedor\n");
        printf("5. Mostrar o número do vendedor que mais vendeu em determinado mês\n");
        printf("6. Mostrar o número do mês com mais vendas\n");
        printf("7. Finalizar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_vendedor(); break;
            case 2: cadastrar_venda(); break;
            case 3: consultar_vendas_funcionario(); break;
            case 4: consultar_total_vendas_vendedor(); break;
            case 5: vendedor_mais_vendeu_mes(); break;
            case 6: mes_mais_vendas(); break;
            case 7: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 7);

    return 0;
}
