#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 5
#define MAX_PIZZAS 3
#define MAX_PEDIDOS 6

typedef struct {
    char telefone[15];
    char nome[50];
    char endereco[100];
    char complemento[50];
    char cep[10];
} Cliente;

typedef struct {
    int codigo;
    char nome[50];
    float valor;
} Pizza;

typedef struct {
    int numeroPedido;
    char telefoneCliente[15];
    int codigoPizza;
    int codigoMotoqueiro;
    int situacao; // 1 - em preparo, 2 - a caminho, 3 - entregue
} Pedido;

Cliente clientes[MAX_CLIENTES];
Pizza pizzas[MAX_PIZZAS];
Pedido pedidos[MAX_PEDIDOS];

int totalClientes = 0;
int totalPizzas = 0;
int totalPedidos = 0;

void cadastrarCliente() {
    if (totalClientes >= MAX_CLIENTES) {
        printf("Número máximo de clientes cadastrados.\n");
        return;
    }

    char telefone[15];
    printf("Digite o telefone do cliente: ");
    scanf(" %[^\n]", telefone);

    for (int i = 0; i < totalClientes; i++) {
        if (strcmp(clientes[i].telefone, telefone) == 0) {
            printf("Cliente com esse telefone já cadastrado.\n");
            return;
        }
    }

    strcpy(clientes[totalClientes].telefone, telefone);
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", clientes[totalClientes].nome);
    printf("Digite o endereço: ");
    scanf(" %[^\n]", clientes[totalClientes].endereco);
    printf("Digite o complemento: ");
    scanf(" %[^\n]", clientes[totalClientes].complemento);
    printf("Digite o CEP: ");
    scanf(" %[^\n]", clientes[totalClientes].cep);

    totalClientes++;
}

void cadastrarPizza() {
    if (totalPizzas >= MAX_PIZZAS) {
        printf("Número máximo de pizzas cadastradas.\n");
        return;
    }

    int codigo;
    printf("Digite o código da pizza: ");
    scanf("%d", &codigo);

    for (int i = 0; i < totalPizzas; i++) {
        if (pizzas[i].codigo == codigo) {
            printf("Pizza com esse código já cadastrada.\n");
            return;
        }
    }

    pizzas[totalPizzas].codigo = codigo;
    printf("Digite o nome da pizza: ");
    scanf(" %[^\n]", pizzas[totalPizzas].nome);
    printf("Digite o valor da pizza: ");
    scanf("%f", &pizzas[totalPizzas].valor);

    totalPizzas++;
}

void cadastrarPedido() {
    if (totalPedidos >= MAX_PEDIDOS) {
        printf("Número máximo de pedidos cadastrados.\n");
        return;
    }

    int numeroPedido;
    char telefone[15];
    int codigoPizza;

    printf("Digite o número do pedido: ");
    scanf("%d", &numeroPedido);

    for (int i = 0; i < totalPedidos; i++) {
        if (pedidos[i].numeroPedido == numeroPedido) {
            printf("Pedido com esse número já cadastrado.\n");
            return;
        }
    }

    printf("Digite o telefone do cliente: ");
    scanf(" %[^\n]", telefone);

    int clienteExiste = 0;
    for (int i = 0; i < totalClientes; i++) {
        if (strcmp(clientes[i].telefone, telefone) == 0) {
            clienteExiste = 1;
            break;
        }
    }

    if (!clienteExiste) {
        printf("Cliente não encontrado.\n");
        return;
    }

    printf("Digite o código da pizza: ");
    scanf("%d", &codigoPizza);

    int pizzaExiste = 0;
    for (int i = 0; i < totalPizzas; i++) {
        if (pizzas[i].codigo == codigoPizza) {
            pizzaExiste = 1;
            break;
        }
    }

    if (!pizzaExiste) {
        printf("Pizza não encontrada.\n");
        return;
    }

    pedidos[totalPedidos].numeroPedido = numeroPedido;
    strcpy(pedidos[totalPedidos].telefoneCliente, telefone);
    pedidos[totalPedidos].codigoPizza = codigoPizza;
    pedidos[totalPedidos].codigoMotoqueiro = 0;
    pedidos[totalPedidos].situacao = 1;

    totalPedidos++;
}

void despacharPizza() {
    int numeroPedido, codigoMotoqueiro;
    printf("Digite o número do pedido: ");
    scanf("%d", &numeroPedido);

    int pedidoIndex = -1;
    for (int i = 0; i < totalPedidos; i++) {
        if (pedidos[i].numeroPedido == numeroPedido) {
            pedidoIndex = i;
            break;
        }
    }

    if (pedidoIndex == -1) {
        printf("Pedido não encontrado.\n");
        return;
    }

    if (pedidos[pedidoIndex].situacao != 1) {
        printf("Esse pedido não está em preparo e não pode ser despachado.\n");
        return;
    }

    printf("Digite o código do motoqueiro (1 a 5): ");
    scanf("%d", &codigoMotoqueiro);

    if (codigoMotoqueiro < 1 || codigoMotoqueiro > 5) {
        printf("Código do motoqueiro inválido.\n");
        return;
    }

    pedidos[pedidoIndex].codigoMotoqueiro = codigoMotoqueiro;
    pedidos[pedidoIndex].situacao = 2;

    printf("Pedido despachado com sucesso!\n");
}

void receberPizza() {
    int numeroPedido;
    printf("Digite o número do pedido: ");
    scanf("%d", &numeroPedido);

    int pedidoIndex = -1;
    for (int i = 0; i < totalPedidos; i++) {
        if (pedidos[i].numeroPedido == numeroPedido) {
            pedidoIndex = i;
            break;
        }
    }

    if (pedidoIndex == -1) {
        printf("Pedido não encontrado.\n");
        return;
    }

    if (pedidos[pedidoIndex].situacao != 2) {
        printf("Esse pedido não está a caminho e não pode ser recebido.\n");
        return;
    }

    pedidos[pedidoIndex].situacao = 3;

    printf("Pedido recebido com sucesso!\n");
}

void mostrarTotalGastoPorCliente() {
    for (int i = 0; i < totalClientes; i++) {
        float totalGasto = 0;
        for (int j = 0; j < totalPedidos; j++) {
            if (strcmp(pedidos[j].telefoneCliente, clientes[i].telefone) == 0) {
                for (int k = 0; k < totalPizzas; k++) {
                    if (pizzas[k].codigo == pedidos[j].codigoPizza) {
                        totalGasto += pizzas[k].valor;
                    }
                }
            }
        }
        printf("Cliente: %s, Total Gasto: R$ %.2f\n", clientes[i].nome, totalGasto);
    }
}

void mostrarPizzasPorSituacao() {
    int situacao;
    printf("Digite a situação das pizzas que deseja visualizar (1 - em preparo, 2 - a caminho, 3 - entregue): ");
    scanf("%d", &situacao);

    for (int i = 0; i < totalPedidos; i++) {
        if (pedidos[i].situacao == situacao) {
            for (int j = 0; j < totalPizzas; j++) {
                if (pizzas[j].codigo == pedidos[i].codigoPizza) {
                    printf("Pedido: %d, Pizza: %s, Situação: %d\n", pedidos[i].numeroPedido, pizzas[j].nome, pedidos[i].situacao);
                }
            }
        }
    }
}

void mostrarMotoqueiroComMaisEntregas() {
    int entregasPorMotoqueiro[6] = {0};

    for (int i = 0; i < totalPedidos; i++) {
        if (pedidos[i].situacao == 3) {
            entregasPorMotoqueiro[pedidos[i].codigoMotoqueiro]++;
        }
    }

    int motoqueiroMaisEntregas = 0;
    int maxEntregas = 0;

    for (int i = 1; i <= 5; i++) {
        if (entregasPorMotoqueiro[i] > maxEntregas) {
            maxEntregas = entregasPorMotoqueiro[i];
            motoqueiroMaisEntregas = i;
        }
    }

    printf("Motoqueiro com mais entregas: %d, Número de entregas: %d\n", motoqueiroMaisEntregas, maxEntregas);
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Cadastrar Pizza\n");
        printf("3. Cadastrar Pedido\n");
        printf("4. Despachar Pizza\n");
        printf("5. Receber Pizza\n");
        printf("6. Mostrar Total Gasto por Cliente\n");
        printf("7. Mostrar Pizzas por Situação\n");
        printf("8. Mostrar Motoqueiro com Mais Entregas\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarCliente(); break;
            case 2: cadastrarPizza(); break;
            case 3: cadastrarPedido(); break;
            case 4: despacharPizza(); break;
            case 5: receberPizza(); break;
            case 6: mostrarTotalGastoPorCliente(); break;
            case 7: mostrarPizzasPorSituacao(); break;
            case 8: mostrarMotoqueiroComMaisEntregas(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while(opcao != 0);

    return 0;
}
