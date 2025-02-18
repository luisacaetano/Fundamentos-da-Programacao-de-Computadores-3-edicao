#include <stdio.h>

#define NUM_PESSOAS 20

typedef struct {
    float salario;
    int idade;
    int filhos;
    char sexo;  // 'M' para masculino e 'F' para feminino
} Pessoa;

int main() {
    Pessoa pessoas[NUM_PESSOAS];
    float soma_salario = 0;
    int soma_filhos = 0;
    float maior_salario = 0;
    int mulheres_acima_1000 = 0;
    int total_mulheres = 0;

    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Salário: ");
        scanf("%f", &pessoas[i].salario);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Número de filhos: ");
        scanf("%d", &pessoas[i].filhos);
        printf("Sexo (M/F): ");
        scanf(" %c", &pessoas[i].sexo);

        soma_salario += pessoas[i].salario;
        soma_filhos += pessoas[i].filhos;

        if (pessoas[i].salario > maior_salario) {
            maior_salario = pessoas[i].salario;
        }

        if (pessoas[i].sexo == 'F') {
            total_mulheres++;
            if (pessoas[i].salario > 1000) {
                mulheres_acima_1000++;
            }
        }
    }

    printf("Média de salário: %.2f\n", soma_salario / NUM_PESSOAS);
    printf("Média do número de filhos: %.2f\n", (float)soma_filhos / NUM_PESSOAS);
    printf("Maior salário: %.2f\n", maior_salario);
    printf("Percentual de mulheres com salário acima de R$ 1.000,00: %.2f%%\n", (float)mulheres_acima_1000 / total_mulheres * 100);

    return 0;
}
