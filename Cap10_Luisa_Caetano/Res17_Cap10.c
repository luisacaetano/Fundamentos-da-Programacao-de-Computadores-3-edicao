#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 10
#define MAX_NOME 100
#define MAX_ENDERECO 200
#define MAX_CIDADE 100
#define MAX_ESTADO 3

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    char sexo;
    char data_nascimento[11]; // "dd/mm/aaaa"
    char rg[20];
    char cpf[15];
    char endereco[MAX_ENDERECO];
    char cidade[MAX_CIDADE];
    char estado[MAX_ESTADO];
    int total_locacoes;
    int dvds_locados;
} Cliente;

Cliente clientes[MAX_CLIENTES];
int total_clientes = 0;

void incluirCliente() {
    if (total_clientes >= MAX_CLIENTES) {
        printf("Número máximo de clientes atingido.\n");
        return;
    }

    Cliente c;
    printf("Digite o código do cliente: ");
    scanf("%d", &c.codigo);
    getchar(); // Consumir o caractere de nova linha

    printf("Digite o nome do cliente: ");
    fgets(c.nome, MAX_NOME, stdin);
    c.nome[strcspn(c.nome, "\n")] = '\0'; // Remove o '\n' da string

    printf("Digite o sexo do cliente (M/F): ");
    scanf(" %c", &c.sexo);
    getchar(); // Consumir o caractere de nova linha

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    fgets(c.data_nascimento, 11, stdin);
    c.data_nascimento[strcspn(c.data_nascimento, "\n")] = '\0';

    printf("Digite o RG do cliente: ");
    fgets(c.rg, 20, stdin);
    c.rg[strcspn(c.rg, "\n")] = '\0';

    printf("Digite o CPF do cliente: ");
    fgets(c.cpf, 15, stdin);
    c.cpf[strcspn(c.cpf, "\n")] = '\0';

    printf("Digite o endereço do cliente: ");
    fgets(c.endereco, MAX_ENDERECO, stdin);
    c.endereco[strcspn(c.endereco, "\n")] = '\0';

    printf("Digite a cidade do cliente: ");
    fgets(c.cidade, MAX_CIDADE, stdin);
    c.cidade[strcspn(c.cidade, "\n")] = '\0';

    printf("Digite o estado do cliente (sigla): ");
    fgets(c.estado, MAX_ESTADO, stdin);
    c.estado[strcspn(c.estado, "\n")] = '\0';

    c.total_locacoes = 0;
    c.dvds_locados = 0;

    clientes[total_clientes++] = c;
    printf("Cliente adicionado com sucesso.\n");
}

void mostrarClientes() {
    if (total_clientes == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    for (int i = 0; i < total_clientes; i++) {
        Cliente c = clientes[i];
        printf("Código: %d\n", c.codigo);
        printf("Nome: %s\n", c.nome);
        printf("Sexo: %c\n", c.sexo);
        printf("Data de Nascimento: %s\n", c.data_nascimento);
        printf("RG: %s\n", c.rg);
        printf("CPF: %s\n", c.cpf);
        printf("Endereço: %s\n", c.endereco);
        printf("Cidade: %s\n", c.cidade);
        printf("Estado: %s\n", c.estado);
        printf("Total de Locações: %d\n", c.total_locacoes);
        printf("DVDs Locados Atualmente: %d\n", c.dvds_locados);
        printf("-----------------------\n");
    }
}

void removerCliente() {
    int codigo;
    printf("Digite o código do cliente para remover: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_clientes; i++) {
        if (clientes[i].codigo == codigo) {
            if (clientes[i].dvds_locados > 0) {
                printf("Não é possível remover o cliente enquanto ele estiver com DVDs locados.\n");
                return;
            }
            for (int j = i; j < total_clientes - 1; j++) {
                clientes[j] = clientes[j + 1];
            }
            total_clientes--;
            printf("Cliente removido com sucesso.\n");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void locarDVD() {
    int codigo;
    printf("Digite o código do cliente: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_clientes; i++) {
        if (clientes[i].codigo == codigo) {
            if (clientes[i].dvds_locados > 0) {
                printf("O cliente já tem DVDs locados.\n");
                return;
            }
            int dvd;
            printf("Digite o número do DVD a ser locado: ");
            scanf("%d", &dvd);
            clientes[i].dvds_locados++;
            clientes[i].total_locacoes++;
            printf("DVD locado com sucesso.\n");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void devolverDVD() {
    int codigo;
    printf("Digite o código do cliente: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_clientes; i++) {
        if (clientes[i].codigo == codigo) {
            if (clientes[i].dvds_locados == 0) {
                printf("O cliente não tem DVDs locados para devolver.\n");
                return;
            }
            int dvds;
            printf("Digite o número de DVDs a serem devolvidos: ");
            scanf("%d", &dvds);
            if (dvds > clientes[i].dvds_locados) {
                printf("O número de DVDs devolvidos não pode ser maior que o número de DVDs locados atualmente.\n");
                return;
            }
            clientes[i].dvds_locados -= dvds;
            clientes[i].total_locacoes += dvds;
            printf("DVDs devolvidos com sucesso.\n");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void mostrarClientesComDVDsLocados() {
    int encontrados = 0;
    for (int i = 0; i < total_clientes; i++) {
        if (clientes[i].dvds_locados > 0) {
            printf("Código: %d\n", clientes[i].codigo);
            printf("Nome: %s\n", clientes[i].nome);
            printf("DVDs Locados Atualmente: %d\n", clientes[i].dvds_locados);
            printf("-----------------------\n");
            encontrados = 1;
        }
    }
    if (!encontrados) {
        printf("Nenhum cliente com DVDs locados no momento.\n");
    }
}

int main() {
    int opcao;
    do {
        printf("1. Incluir Cliente\n");
        printf("2. Mostrar Clientes\n");
        printf("3. Remover Cliente\n");
        printf("4. Locar DVD\n");
        printf("5. Devolver DVD\n");
        printf("6. Mostrar Clientes com DVDs Locados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Consumir o caractere de nova linha

        switch (opcao) {
            case 1:
                incluirCliente();
                break;
            case 2:
                mostrarClientes();
                break;
            case 3:
                removerCliente();
                break;
            case 4:
                locarDVD();
                break;
            case 5:
                devolverDVD();
                break;
            case 6:
                mostrarClientesComDVDsLocados();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
