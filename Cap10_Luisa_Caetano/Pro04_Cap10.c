#include <stdio.h>

#define NUM_HABITANTES 20

typedef struct {
    int idade;
    char sexo;  // 'M' para masculino, 'F' para feminino
    float renda_familiar;
    int filhos;
} Habitante;

int main() {
    Habitante habitantes[NUM_HABITANTES];
    float soma_salario = 0;
    int menor_idade = 999, maior_idade = 0;
    int mulheres_mais_de_dois_filhos_menor_600 = 0;

    for (int i = 0; i < NUM_HABITANTES; i++) {
        printf("Habitante %d\n", i + 1);
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);
        printf("Renda familiar: ");
        scanf("%f", &habitantes[i].renda_familiar);
        printf("Número de filhos: ");
        scanf("%d", &habitantes[i].filhos);

        soma_salario += habitantes[i].renda_familiar;

        if (habitantes[i].idade < menor_idade) {
            menor_idade = habitantes[i].idade;
        }
        if (habitantes[i].idade > maior_idade) {
            maior_idade = habitantes[i].idade;
        }

        if (habitantes[i].sexo == 'F' && habitantes[i].filhos > 2 && habitantes[i].renda_familiar < 600) {
            mulheres_mais_de_dois_filhos_menor_600++;
        }
    }

    printf("Média de renda familiar: %.2f\n", soma_salario / NUM_HABITANTES);
    printf("Menor idade: %d\n", menor_idade);
    printf("Maior idade: %d\n", maior_idade);
    printf("Quantidade de mulheres com mais de dois filhos e renda inferior a R$ 600,00: %d\n",
           mulheres_mais_de_dois_filhos_menor_600);

    return 0;
}
