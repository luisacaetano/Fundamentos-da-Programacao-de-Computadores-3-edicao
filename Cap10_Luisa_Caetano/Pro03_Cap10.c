#include <stdio.h>

#define NUM_HABITANTES 50

typedef struct {
    char sexo;  // 'M' para masculino, 'F' para feminino
    float altura;
    int idade;
    char cor_olhos;  // 'A' para azuis, 'V' para verdes, 'C' para castanhos
} Habitante;

int main() {
    Habitante habitantes[NUM_HABITANTES];
    float soma_idade_castanhos_acima_160 = 0;
    int count_castanhos_acima_160 = 0;
    int maior_idade = 0;
    int count_feminino_entre_20_e_45_ou_verde_inferior_170 = 0;
    int total_homens = 0;

    for (int i = 0; i < NUM_HABITANTES; i++) {
        printf("Habitante %d\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo
        printf("Altura: ");
        scanf("%f", &habitantes[i].altura);
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);
        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf(" %c", &habitantes[i].cor_olhos);

        // Maior idade
        if (habitantes[i].idade > maior_idade) {
            maior_idade = habitantes[i].idade;
        }

        // Média de idade de pessoas com olhos castanhos e altura > 1.60
        if (habitantes[i].cor_olhos == 'C' && habitantes[i].altura > 1.60) {
            soma_idade_castanhos_acima_160 += habitantes[i].idade;
            count_castanhos_acima_160++;
        }

        // Mulheres com idade entre 20 e 45 anos ou olhos verdes e altura < 1.70
        if (habitantes[i].sexo == 'F' && (habitantes[i].idade >= 20 && habitantes[i].idade <= 45 ||
            (habitantes[i].cor_olhos == 'V' && habitantes[i].altura < 1.70))) {
            count_feminino_entre_20_e_45_ou_verde_inferior_170++;
        }

        // Percentual de homens
        if (habitantes[i].sexo == 'M') {
            total_homens++;
        }
    }

    printf("Média de idade das pessoas com olhos castanhos e altura > 1.60: %.2f\n",
           count_castanhos_acima_160 > 0 ? soma_idade_castanhos_acima_160 / count_castanhos_acima_160 : 0);
    printf("Maior idade: %d\n", maior_idade);
    printf("Quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos ou olhos verdes e altura < 1.70: %d\n",
           count_feminino_entre_20_e_45_ou_verde_inferior_170);
    printf("Percentual de homens: %.2f%%\n", (float)total_homens / NUM_HABITANTES * 100);

    return 0;
}
