#include <stdio.h>

void calcularDuracao(int inicioHoras, int inicioMinutos, int terminoHoras, int terminoMinutos) {
    int inicioTotalMinutos, terminoTotalMinutos, duracaoMinutos;

    // Convertendo horas e minutos para minutos totais
    inicioTotalMinutos = inicioHoras * 60 + inicioMinutos;
    terminoTotalMinutos = terminoHoras * 60 + terminoMinutos;

    // Se o término for antes do início, significa que o jogo passou da meia-noite
    if (terminoTotalMinutos < inicioTotalMinutos) {
        terminoTotalMinutos += 24 * 60;
    }

    // Calculando a duração total em minutos
    duracaoMinutos = terminoTotalMinutos - inicioTotalMinutos;

    // Convertendo a duração para horas e minutos
    int duracaoHoras = duracaoMinutos / 60;
    int duracaoMinutosRestantes = duracaoMinutos % 60;

    // Convertendo para segundos
    int duracaoSegundos = duracaoMinutos * 60;

    // Exibindo os resultados
    printf("Duração do jogo:\n");
    printf("%d horas e %d minutos\n", duracaoHoras, duracaoMinutosRestantes);
    printf("%d minutos\n", duracaoMinutos);
    printf("%d segundos\n", duracaoSegundos);
}

int main() {
    int inicioHoras, inicioMinutos, terminoHoras, terminoMinutos;

    printf("Digite a hora de início (horas minutos): ");
    scanf("%d %d", &inicioHoras, &inicioMinutos);

    printf("Digite a hora de término (horas minutos): ");
    scanf("%d %d", &terminoHoras, &terminoMinutos);

    calcularDuracao(inicioHoras, inicioMinutos, terminoHoras, terminoMinutos);

    return 0;
}
