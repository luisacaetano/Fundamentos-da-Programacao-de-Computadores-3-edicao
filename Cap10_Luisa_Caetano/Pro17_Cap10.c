#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_CLIENTES 15000

typedef struct {
    int registro;
    char nome[50];
    char cpf[20];
    char rg[20];
    char endereco[100];
    float total_gasto;
    int vip;
    char data_primeira_compra[11]; // formato dd/mm/aaaa
} Cliente;

Cliente clientes[MAX_CLIENTES];
int num_clientes = 0;

void cadastrar_cliente() {
    Cliente c;
    printf("Digite o número de registro do cliente: ");
    scanf("%d", &c.registro);
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", c.nome);
    printf("Digite o CPF do cliente: ");
    scanf(" %[^\n]", c.cpf);
    printf("Digite o RG do cliente: ");
    scanf(" %[^\n]", c.rg);
    printf("Digite o endereço do cliente: ");
    scanf(" %[^\n]", c.endereco);
    printf("Digite a data da primeira compra (dd/mm/aaaa): ");
    scanf(" %[^\n]", c.data_primeira_compra);
    c.total_gasto = 0.0;
    c.vip = 0;

    clientes[num_clientes++] = c;
    printf("Cliente cadastrado com sucesso.\n");
}

void atualizar_total_gasto() {
    int rg;
    printf("Digite o RG do cliente: ");
    scanf(" %[^\n]", rg);

    for (int i = 0; i < num_clientes; i++) {
        if (strcmp(clientes[i].rg, rg) == 0) {
            float novo_gasto;
            printf("Digite o novo valor gasto: ");
            scanf("%f", &novo_gasto);
            clientes[i].total_gasto += novo_gasto;

            if (clientes[i].total_gasto >= 5000 && clientes[i].vip == 0) {
                clientes[i].vip = 1;
                printf("Cliente agora é VIP.\n");
            }
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void zerar_total_gasto() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);
    int ano_atual = tm_info->tm_year + 1900;
    int mes_atual = tm_info->tm_mon + 1;
    int dia_atual = tm_info->tm_mday;

    for (int i = 0; i < num_clientes; i++) {
        int dia, mes, ano;
        sscanf(clientes[i].data_primeira_compra, "%d/%d/%d", &dia, &mes, &ano);

        if (ano_atual - ano > 0 || (ano_atual - ano == 0 && mes_atual - mes > 6) || (ano_atual - ano == 0 && mes_atual - mes == 6 && dia_atual - dia > 0)) {
            if (clientes[i].vip == 0) {
                clientes[i].total_gasto = 0;
                printf("Total gasto zerado para cliente com RG %s.\n", clientes[i].rg);
            }
        }
    }
}

void sorteio_ferrari() {
    int participantes[MAX_CLIENTES];
    int num_participantes = 0;

    for (int i = 0; i < num_clientes; i++) {
        if (clientes[i].total_gasto > 5) {
            participantes[num_participantes++] = clientes[i].registro;
        }
    }

    if (num_participantes > 0) {
        srand(time(NULL));
        int vencedor = participantes[rand() % num_participantes];
        printf("O vencedor do sorteio é o cliente com registro: %d\n", vencedor);
    } else {
        printf("Nenhum cliente qualificado para o sorteio.\n");
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Cliente\n");
        printf("2. Atualizar Total Gasto\n");
        printf("3. Zerara Total Gasto de Clientes Não VIP\n");
        printf("4. Sorteio da Ferrari\n");
        printf("5. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_cliente(); break;
            case 2: atualizar_total_gasto(); break;
            case 3: zerar_total_gasto(); break;
            case 4: sorteio_ferrari(); break;
            case 5: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 5);

    return 0;
}
