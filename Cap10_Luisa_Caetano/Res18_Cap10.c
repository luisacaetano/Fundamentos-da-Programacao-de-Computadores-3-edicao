#include <stdio.h>

#define MAX_PACIENTES 20

typedef struct {
    char nome[100];
    int idade;
    char sexo;
    float altura;
    float peso;
} Paciente;

void calcularPesoIdeal(Paciente p, float *pesoIdeal) {
    if (p.sexo == 'M' || p.sexo == 'm') {
        *pesoIdeal = (72.7 * p.altura) - 58;
    } else if (p.sexo == 'F' || p.sexo == 'f') {
        *pesoIdeal = (62.1 * p.altura) - 44.7;
    }
}

void encontrarMaisPesado(Paciente pacientes[], int n) {
    if (n == 0) return;

    Paciente maisPesado = pacientes[0];
    for (int i = 1; i < n; i++) {
        if (pacientes[i].peso > maisPesado.peso) {
            maisPesado = pacientes[i];
        }
    }
    printf("A pessoa mais pesada é: %s\n", maisPesado.nome);
}

void listarAcimaPesoIdeal(Paciente pacientes[], int n) {
    printf("Pessoas acima do peso ideal:\n");
    for (int i = 0; i < n; i++) {
        float pesoIdeal;
        calcularPesoIdeal(pacientes[i], &pesoIdeal);
        if (pacientes[i].peso > pesoIdeal) {
            printf("Nome: %s, Idade: %d\n", pacientes[i].nome, pacientes[i].idade);
        }
    }
}

void listarAbaixoPesoIdeal(Paciente pacientes[], int n) {
    printf("Pessoas abaixo do peso ideal:\n");
    for (int i = 0; i < n; i++) {
        float pesoIdeal;
        calcularPesoIdeal(pacientes[i], &pesoIdeal);
        if (pacientes[i].peso < pesoIdeal) {
            float pesoNecessario = pesoIdeal - pacientes[i].peso;
            printf("Nome: %s, Peso atual: %.2f, Peso ideal: %.2f, Necessário: %.2f\n",
                   pacientes[i].nome, pacientes[i].peso, pesoIdeal, pesoNecessario);
        }
    }
}

int main() {
    Paciente pacientes[MAX_PACIENTES];
    int totalPacientes = 0;

    while (totalPacientes < MAX_PACIENTES) {
        printf("Digite o nome do paciente: ");
        fgets(pacientes[totalPacientes].nome, 100, stdin);
        pacientes[totalPacientes].nome[strcspn(pacientes[totalPacientes].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Digite a idade do paciente: ");
        scanf("%d", &pacientes[totalPacientes].idade);
        
        printf("Digite o sexo do paciente (M/F): ");
        scanf(" %c", &pacientes[totalPacientes].sexo);
        
        printf("Digite a altura do paciente (em metros): ");
        scanf("%f", &pacientes[totalPacientes].altura);
        
        printf("Digite o peso do paciente (em kg): ");
        scanf("%f", &pacientes[totalPacientes].peso);
        
        getchar(); // Consumir o caractere de nova linha
        totalPacientes++;

        if (totalPacientes >= MAX_PACIENTES) {
            printf("Número máximo de pacientes atingido.\n");
            break;
        }
        
        char continuar;
        printf("Deseja adicionar outro paciente? (s/n): ");
        scanf(" %c", &continuar);
        getchar(); // Consumir o caractere de nova linha
        if (continuar == 'n' || continuar == 'N') {
            break;
        }
    }

    encontrarMaisPesado(pacientes, totalPacientes);
    listarAcimaPesoIdeal(pacientes, totalPacientes);
    listarAbaixoPesoIdeal(pacientes, totalPacientes);

    return 0;
}
