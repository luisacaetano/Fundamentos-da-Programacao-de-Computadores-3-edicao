#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 50

typedef struct {
    int codigo;
    char descricao[50];
    float valor_unitario;
    int quantidade;
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

void cadastrar_produto() {
    if (num_produtos >= MAX_PRODUTOS) {
        printf("Número máximo de produtos alcançado.\n");
        return;
    }

    Produto produto;
    printf("Digite o código do produto: ");
    scanf("%d", &produto.codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]", produto.descricao);
    printf("Digite o valor unitário: ");
    scanf("%f", &produto.valor_unitario);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);

    produtos[num_produtos++] = produto;
    printf("Produto cadastrado com sucesso.\n");
}

void alterar_produto() {
    int codigo;
    printf("Digite o código do produto para alterar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Digite a nova descrição do produto: ");
            scanf(" %[^\n]", produtos[i].descricao);
            printf("Digite o novo valor unitário: ");
            scanf("%f", &produtos[i].valor_unitario);
            printf("Digite a nova quantidade em estoque: ");
            scanf("%d", &produtos[i].quantidade);
            printf("Produto alterado com sucesso.\n");
            return;
        }
    }

    printf("Produto não encontrado.\n");
}

void mostrar_produtos_por_letra() {
    char letra;
    printf("Digite a letra inicial da descrição: ");
    scanf(" %c", &letra);

    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].descricao[0] == letra) {
            printf("Código: %d, Descrição: %s, Valor Unitário: %.2f, Quantidade: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario, produtos[i].quantidade);
        }
    }
}

void mostrar_produtos_estoque_inferior_5() {
    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].quantidade < 5) {
            printf("Código: %d, Descrição: %s, Valor Unitário: %.2f, Quantidade: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario, produtos[i].quantidade);
        }
    }
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar produto\n");
        printf("2. Alterar produto\n");
        printf("3. Mostrar produtos cuja descrição comece com determinada letra\n");
        printf("4. Mostrar produtos com quantidade em estoque inferior a cinco unidades\n");
        printf("5. Finalizar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_produto(); break;
            case 2: alterar_produto(); break;
            case 3: mostrar_produtos_por_letra(); break;
            case 4: mostrar_produtos_estoque_inferior_5(); break;
            case 5: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 5);

    return 0;
}
