#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_CONTAS 100

typedef struct {
    int numero_cliente;
    char nome[50];
    char telefone[15];
    char endereco[100];
} Cliente;

typedef struct {
    int numero_conta;
    int numero_cliente;
    float saldo;
} Conta;

Cliente clientes[MAX_CLIENTES];
Conta contas[MAX_CONTAS];
int num_clientes = 0;
int num_contas = 0;

void cadastrar_cliente() {
    Cliente cliente;
    printf("Digite o número do cliente: ");
    scanf("%d", &cliente.numero_cliente);

    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].numero_cliente == cliente.numero_cliente) {
            printf("Cliente já cadastrado.\n");
            return;
        }
    }

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", cliente.nome);
    printf("Digite o telefone do cliente: ");
    scanf(" %[^\n]", cliente.telefone);
    printf("Digite o endereço do cliente: ");
    scanf(" %[^\n]", cliente.endereco);

    clientes[num_clientes++] = cliente;
    printf("Cliente cadastrado com sucesso.\n");
}

void cadastrar_conta() {
    Conta conta;
    printf("Digite o número da conta: ");
    scanf("%d", &conta.numero_conta);

    for (int i = 0; i < num_contas; i++) {
        if (contas[i].numero_conta == conta.numero_conta) {
            printf("Conta já cadastrada.\n");
            return;
        }
    }

    printf("Digite o número do cliente para a conta: ");
    scanf("%d", &conta.numero_cliente);

    int cliente_existente = 0;
    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].numero_cliente == conta.numero_cliente) {
            cliente_existente = 1;
            break;
        }
    }

    if (!cliente_existente) {
        printf("Cliente não cadastrado.\n");
        return;
    }

    conta.saldo = 0; // Saldo inicial é 0
    contas[num_contas++] = conta;
    printf("Conta cadastrada com sucesso.\n");
}

void consultar_cliente() {
    int numero_cliente;
    printf("Digite o número do cliente para consultar: ");
    scanf("%d", &numero_cliente);

    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].numero_cliente == numero_cliente) {
            printf("Número: %d\n", clientes[i].numero_cliente);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Telefone: %s\n", clientes[i].telefone);
            printf("Endereço: %s\n", clientes[i].endereco);
            return;
        }
    }

    printf("Cliente não encontrado.\n");
}

void consultar_conta() {
    int numero_conta;
    printf("Digite o número da conta para consultar: ");
    scanf("%d", &numero_conta);

    for (int i = 0; i < num_contas; i++) {
        if (contas[i].numero_conta == numero_conta) {
            printf("Número da Conta: %d\n", contas[i].numero_conta);
            printf("Número do Cliente: %d\n", contas[i].numero_cliente);
            printf("Saldo: %.2f\n", contas[i].saldo);
            return;
        }
    }

    printf("Conta não encontrada.\n");
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar cliente\n");
        printf("2. Cadastrar conta\n");
        printf("3. Consultar cliente\n");
        printf("4. Consultar conta\n");
        printf("5. Finalizar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_cliente(); break;
            case 2: cadastrar_conta(); break;
            case 3: consultar_cliente(); break;
            case 4: consultar_conta(); break;
            case 5: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 5);

    return 0;
}
