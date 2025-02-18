#include <stdio.h>

#define SALARIO_LIMITE 700.0

typedef struct {
    int idade;
    float salario;
    char sexo;
    int numero_filhos;
} Habitante;

int main() {
    Habitante habitantes[1000]; // Supondo um número máximo de habitantes
    int totalHabitantes = 0;
    
    float somaIdadeMulheresSalarioBaixo = 0.0;
    int contMulheresSalarioBaixo = 0;
    float somaSalario = 0.0;
    float somaFilhos = 0.0;
    float maiorSalario = 0.0;
    int menorIdade = 100; // Inicialmente alto o suficiente para qualquer idade
    
    while (1) {
        Habitante h;
        
        printf("Digite a idade (0 para encerrar): ");
        scanf("%d", &h.idade);
        if (h.idade == 0) {
            break;
        }
        
        printf("Digite o salário: ");
        scanf("%f", &h.salario);
        
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &h.sexo);
        
        printf("Digite o número de filhos: ");
        scanf("%d", &h.numero_filhos);
        
        // Armazenar os dados
        habitantes[totalHabitantes++] = h;
        
        // Atualizar estatísticas
        if (h.sexo == 'F' && h.salario < SALARIO_LIMITE) {
            somaIdadeMulheresSalarioBaixo += h.idade;
            contMulheresSalarioBaixo++;
        }
        
        somaSalario += h.salario;
        somaFilhos += h.numero_filhos;
        
        if (h.salario > maiorSalario) {
            maiorSalario = h.salario;
        }
        
        if (h.idade < menorIdade) {
            menorIdade = h.idade;
        }
    }
    
    // Calcular médias
    float mediaIdadeMulheresSalarioBaixo = contMulheresSalarioBaixo > 0 ? somaIdadeMulheresSalarioBaixo / contMulheresSalarioBaixo : 0;
    float mediaSalario = totalHabitantes > 0 ? somaSalario / totalHabitantes : 0;
    float mediaFilhos = totalHabitantes > 0 ? somaFilhos / totalHabitantes : 0;
    
    // Exibir resultados
    printf("Média de idade das mulheres com salário inferior a R$ %.2f: %.2f\n", SALARIO_LIMITE, mediaIdadeMulheresSalarioBaixo);
    printf("Média de salário da população: %.2f\n", mediaSalario);
    printf("Média do número de filhos: %.2f\n", mediaFilhos);
    printf("Maior salário: %.2f\n", maiorSalario);
    printf("Menor idade: %d\n", menorIdade);
    
    return 0;
}
