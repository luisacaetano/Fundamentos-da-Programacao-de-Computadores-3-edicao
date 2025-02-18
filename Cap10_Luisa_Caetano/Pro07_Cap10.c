#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_CONTAS 100

typedef struct {
    int codigo_cliente;
    char nome[50];
} Cliente;

typedef struct {
    int numero_conta;
    float valor_compra;
    int codigo_cliente;
} Conta;

Cliente clientes[MAX_CLIENTES];
Conta contas[MAX_CONTAS];
int num_clientes = 0;
int num_contas = 0;

void incluir_cliente() {
    Cliente cliente;
    printf("Digite o código do cliente: ");
    scanf("%d", &cliente.codigo_cliente);

    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].codigo_cliente == cliente.codigo_cliente) {
            printf("Cliente já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", cliente.nome);

    clientes[num_clientes++] = cliente;
    printf("Cliente cadastrado com sucesso.\n");
}

void incluir_conta() {
    Conta conta;
    printf("Digite o número da conta: ");
    scanf("%d", &conta.numero_conta);

    for (int i = 0; i < num_contas; i++) {
        if (contas[i].numero_conta == conta.numero_conta) {
            printf("Conta já cadastrada.\n");
            return;
        }
    }

    printf("Digite o código do cliente para a conta: ");
    scanf("%d", &conta.codigo_cliente);

    int cliente_existente = 0;
    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].codigo_cliente == conta.codigo_cliente) {
            cliente_existente = 1;
            break;
        }
    }

    if (!cliente_existente) {
        printf("Cliente não cadastrado.\n");
        return;
    }

    printf("Digite o valor da compra: ");
    scanf("%f", &conta.valor_compra);

    contas[num_contas++] = conta;
    printf("Conta cadastrada com sucesso.\n");
}

void remover_cliente() {
    int codigo_cliente;
    printf("Digite o código do cliente a ser removido: ");
    scanf("%d", &codigo_cliente);

    int index_cliente = -1;
    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].codigo_cliente == codigo_cliente) {
            index_cliente = i;
            break;
        }
    }

    if (index_cliente == -1) {
        printf("Cliente não encontrado.\n");
        return;
    }

    // Verificar se o cliente possui contas
    for (int i = 0; i < num_contas; i++) {
        if (contas[i].codigo_cliente == codigo_cliente) {
            printf("Exclusão não permitida. Cliente possui contas cadastradas.\n");
            return;
        }
    }

    // Remover cliente
    for (int i = index_cliente; i < num_clientes - 1; i++) {
        clientes[i] = clientes[i + 1];
    }
    num_clientes--;

    printf("Cliente removido com sucesso.\n");
}

int main() {
    int opcao;
    do {
        printf("1. Incluir Cliente\n");
        printf("2. Incluir Conta\n");
        printf("3. Remover Cliente\n");
        printf("4. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: incluir_cliente(); break;
            case 2: incluir_conta(); break;
            case 3: remover_cliente(); break;
            case 4: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 4);

    return 0;
}
