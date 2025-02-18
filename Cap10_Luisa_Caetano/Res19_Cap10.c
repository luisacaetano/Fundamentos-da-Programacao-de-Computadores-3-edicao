#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 40

// Estrutura para armazenar informações do produto
typedef struct {
    int codigo;
    char descricao[100];
    float preco_compra;
    float preco_venda;
    int quantidade_estoque;
    int estoque_minimo;
} Produto;

// Funções
void cadastrarProduto(Produto produtos[], int *numProdutos);
void mostrarLucro(Produto produtos[], int numProdutos, int codigoProduto);
void mostrarProdutosAbaixoEstoqueMinimo(Produto produtos[], int numProdutos);

int main() {
    Produto produtos[MAX_PRODUTOS];
    int numProdutos = 0;
    int escolha, codigoProduto;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Mostrar lucro de um produto\n");
        printf("3. Mostrar produtos abaixo do estoque mínimo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        getchar();  // Limpar o buffer de entrada

        switch (escolha) {
            case 1:
                cadastrarProduto(produtos, &numProdutos);
                break;
            case 2:
                printf("Digite o código do produto: ");
                scanf("%d", &codigoProduto);
                mostrarLucro(produtos, numProdutos, codigoProduto);
                break;
            case 3:
                mostrarProdutosAbaixoEstoqueMinimo(produtos, numProdutos);
                break;
            case 4:
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

void cadastrarProduto(Produto produtos[], int *numProdutos) {
    if (*numProdutos >= MAX_PRODUTOS) {
        printf("O estoque está cheio. Não é possível cadastrar mais produtos.\n");
        return;
    }

    Produto novoProduto;
    printf("Digite o código do produto: ");
    scanf("%d", &novoProduto.codigo);
    getchar();  // Limpar o buffer de entrada
    printf("Digite a descrição do produto: ");
    fgets(novoProduto.descricao, 100, stdin);
    novoProduto.descricao[strcspn(novoProduto.descricao, "\n")] = '\0';  // Remover newline
    printf("Digite o preço de compra: ");
    scanf("%f", &novoProduto.preco_compra);
    printf("Digite o preço de venda: ");
    scanf("%f", &novoProduto.preco_venda);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &novoProduto.quantidade_estoque);
    printf("Digite o estoque mínimo: ");
    scanf("%d", &novoProduto.estoque_minimo);

    produtos[*numProdutos] = novoProduto;
    (*numProdutos)++;
    printf("Produto cadastrado com sucesso!\n");
}

void mostrarLucro(Produto produtos[], int numProdutos, int codigoProduto) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigoProduto) {
            float lucro = produtos[i].preco_venda - produtos[i].preco_compra;
            float percentualLucro = (lucro / produtos[i].preco_compra) * 100;
            printf("Produto: %s\n", produtos[i].descricao);
            printf("Lucro por unidade: R$ %.2f\n", lucro);
            printf("Percentual de lucro: %.2f%%\n", percentualLucro);
            return;
        }
    }
    printf("Produto com código %d não encontrado.\n", codigoProduto);
}

void mostrarProdutosAbaixoEstoqueMinimo(Produto produtos[], int numProdutos) {
    int encontrado = 0;
    printf("Produtos com quantidade em estoque abaixo do mínimo:\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].quantidade_estoque < produtos[i].estoque_minimo) {
            printf("Código: %d\n", produtos[i].codigo);
            printf("Descrição: %s\n", produtos[i].descricao);
            printf("Quantidade em estoque: %d\n", produtos[i].quantidade_estoque);
            printf("Estoque mínimo: %d\n", produtos[i].estoque_minimo);
            printf("-------------------------\n");
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Todos os produtos estão com estoque adequado.\n");
    }
}
