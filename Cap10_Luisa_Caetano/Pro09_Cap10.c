#include <stdio.h>

int main() {
    float salario, valor_vendas, comissao, salario_final;

    printf("Digite o salário fixo do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valor_vendas);

    comissao = valor_vendas * 0.06; // 6% de comissão
    salario_final = salario + comissao;

    printf("Salário Fixo: %.2f\n", salario);
    printf("Valor das Vendas: %.2f\n", valor_vendas);
    printf("Comissão: %.2f\n", comissao);
    printf("Salário Final: %.2f\n", salario_final);

    return 0;
}
