#include <stdio.h>

void encontrar_maior_temp(float temperaturas[], char* meses[]);
void encontrar_menor_temp(float temperaturas[], char* meses[]);

int main() {
    float temperaturas[12];
    char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
                     "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    // Receber as temperaturas médias de cada mês
    for(int i = 0; i < 12; i++) {
        printf("Digite a temperatura média de %s: ", meses[i]);
        scanf("%f", &temperaturas[i]);
    }

    // Encontrar e mostrar a maior temperatura
    encontrar_maior_temp(temperaturas, meses);
    
    // Encontrar e mostrar a menor temperatura
    encontrar_menor_temp(temperaturas, meses);

    return 0;
}

void encontrar_maior_temp(float temperaturas[], char* meses[]) {
    int mes_maior = 0;
    float maior_temp = temperaturas[0];
    
    for(int i = 1; i < 12; i++) {
        if(temperaturas[i] > maior_temp) {
            maior_temp = temperaturas[i];
            mes_maior = i;
        }
    }
    
    printf("\nA maior temperatura do ano foi %.2f°C em %s.\n", maior_temp, meses[mes_maior]);
}

void encontrar_menor_temp(float temperaturas[], char* meses[]) {
    int mes_menor = 0;
    float menor_temp = temperaturas[0];
    
    for(int i = 1; i < 12; i++) {
        if(temperaturas[i] < menor_temp) {
            menor_temp = temperaturas[i];
            mes_menor = i;
        }
    }
    
    printf("A menor temperatura do ano foi %.2f°C em %s.\n", menor_temp, meses[mes_menor]);
}
