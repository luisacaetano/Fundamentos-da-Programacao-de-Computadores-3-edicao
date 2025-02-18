#include <stdio.h>
#include <time.h>

#define MAX_DOCUMENTOS 15

typedef struct {
    int numero_doc;
    int codigo_cliente;
    struct tm data_vencimento;
    struct tm data_pagamento;
    float valor;
    float juros;
} Documento;

Documento documentos[MAX_DOCUMENTOS];
int num_documentos = 0;

void cadastrar_documento() {
    Documento doc;
    printf("Digite o número do documento: ");
    scanf("%d", &doc.numero_doc);
    printf("Digite o código do cliente: ");
    scanf("%d", &doc.codigo_cliente);

    printf("Digite a data de vencimento (dd mm aaaa): ");
    scanf("%d %d %d", &doc.data_vencimento.tm_mday, &doc.data_vencimento.tm_mon, &doc.data_vencimento.tm_year);
    doc.data_vencimento.tm_mon -= 1; // Ajustar para zero-base
    doc.data_vencimento.tm_year -= 1900; // Ajustar para ano desde 1900

    printf("Digite a data de pagamento (dd mm aaaa): ");
    scanf("%d %d %d", &doc.data_pagamento.tm_mday, &doc.data_pagamento.tm_mon, &doc.data_pagamento.tm_year);
    doc.data_pagamento.tm_mon -= 1; // Ajustar para zero-base
    doc.data_pagamento.tm_year -= 1900; // Ajustar para ano desde 1900

    printf("Digite o valor da conta: ");
    scanf("%f", &doc.valor);

    double atraso = difftime(mktime(&doc.data_pagamento), mktime(&doc.data_vencimento)) / (60 * 60 * 24);
    if (atraso > 0) {
        doc.juros = doc.valor * 0.0002 * atraso; // 0.02% por dia
    } else {
        doc.juros = 0;
    }

    documentos[num_documentos++] = doc;
}

void mostrar_documentos() {
    float total_a_receber = 0;
    float total_juros = 0;

    for (int i = 0; i < num_documentos; i++) {
        float total = documentos[i].valor + documentos[i].juros;
        total_a_receber += total;
        total_juros += documentos[i].juros;

        printf("Número do Documento: %d\n", documentos[i].numero_doc);
        printf("Código do Cliente: %d\n", documentos[i].codigo_cliente);
        printf("Data de Vencimento: %d/%d/%d\n", documentos[i].data_vencimento.tm_mday, documentos[i].data_vencimento.tm_mon + 1, documentos[i].data_vencimento.tm_year + 1900);
        printf("Data de Pagamento: %d/%d/%d\n", documentos[i].data_pagamento.tm_mday, documentos[i].data_pagamento.tm_mon + 1, documentos[i].data_pagamento.tm_year + 1900);
        printf("Valor: %.2f\n", documentos[i].valor);
        printf("Juros: %.2f\n", documentos[i].juros);
        printf("Total a Receber: %.2f\n\n", total);
    }

    printf("Total Geral a Receber: %.2f\n", total_a_receber);
    printf("Média dos Juros: %.2f\n", total_juros / num_documentos);
}

int main() {
    int opcao;
    do {
        printf("1. Cadastrar Documento\n");
        printf("2. Mostrar Documentos\n");
        printf("3. Finalizar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrar_documento(); break;
            case 2: mostrar_documentos(); break;
            case 3: printf("Finalizando...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 3);

    return 0;
}
