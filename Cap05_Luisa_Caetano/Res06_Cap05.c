/*
Uma empresa possui dez funcionários com as seguintes características: código, número de horas trabalhadas no mês, turno de trabalho (M — matutino; V — vespertino; ou N — noturno), categoria (O —
operário; ou G — gerente), valor da hora trabalhada. Sabendo-se que essa empresa deseja informatizar
sua folha de pagamento, faça um programa que:
a) Leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que sejam informados turnos e nem categorias inexistentes. Trabalhe sempre com a digitação de letras maiúsculas. 
b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário mínimo.
Categoria Turno Valor da hora Tra balhada
G           N     18% do salário mínimo
G         M ou V  15% do salário mínimo
O           N     13% do salário mínimo
O         M ou V  10% do salário mínimo
c) Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número de horas trabalhadas. 
d) Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário inicial, conforme a tabela a seguir.  
salário inicial           auXílio alimen Tação
Até R$ 300,00            20% do salário inicial
Entre R$ 300,00 e R$ 600,00 15% do salário inicial
Acima de R$ 600,00       5% do salário inicia
e) Mostre o código, número de horas trabalhadas, valor da hora trabalhada, salário inicial, auxílio alimentação e salário final (salário inicial + auxílio alimentação).
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int codigo, quanthoras;
    float salariominimo = 450, valorhora, salarioinicial, auxilio, salariofinal; 
    char turno, categoria; 
    
     // Recebe os dados dos funcionários 
    for (int i = 1; i <= 10; i++) {
        printf("Funcionário %d \n", i);
        printf("Insira seu código: "); 
        scanf("%d", &codigo); 
        printf("Insira a quantidade de horas trabalhadas: "); 
        scanf("%d", &quanthoras);
       
        // verificando se a variável é válida
        do {
            printf("Turnos de trabalho: \n M - Matutino \n V - Vespertino \n N - Noturno \n");
            printf("Insira seu turno de trabalho: ");
            scanf(" %c", &turno); //espaço para repetir só uma vez
        } while (turno != 'M' && turno != 'V' && turno != 'N'); 
        
        // verificando se a variável é válida
        do {
            printf("Categorias de trabalho: \n O - Operário \n G - Gerente\n");
            printf("Insira sua categoria de trabalho: ");
            scanf(" %c", &categoria); 
        } while (categoria != 'O' && categoria != 'G'); 
        
        // se o funcionário for gerente
        if (categoria == 'G') {
            if (turno == 'N') {
                valorhora = salariominimo * 0.18; 
                salarioinicial = valorhora * quanthoras; 
            } else if (turno == 'M' || turno == 'G') {
                valorhora = salariominimo * 0.15; 
                salarioinicial = valorhora * quanthoras; 
            }
        }

        // se o funcionário for operário
        if (categoria == 'O') {
            if (turno == 'N') {
                valorhora = salariominimo * 0.13;
                salarioinicial = valorhora * quanthoras;
            } else if (turno == 'M' || turno == 'V') {
                valorhora = salariominimo * 0.10;
                salarioinicial = valorhora * quanthoras;
            }
        }
        
        //calculo do auxilio alimentacao
        if (salarioinicial <= 300) {
            auxilio = salarioinicial * 0.2;
            salariofinal = auxilio + salarioinicial;
        } else if (salarioinicial > 300 && salarioinicial < 600) {
            auxilio = salarioinicial * 0.15; 
            salariofinal = auxilio + salarioinicial;
        } else {
            auxilio = salarioinicial * 0.05; 
            salariofinal = auxilio + salarioinicial;
        }
        
        printf("\n _____________________________________________\n"); 
        printf("Folha de pagamento do funcionário %d \n", codigo);
        printf("Horas trabalhadas: %d horas \n", quanthoras);
        printf("Salario inicial: R$ %.2f \n", salarioinicial); 
        printf("Auxilio alimentação: R$ %.2f \n", auxilio);
        printf("Saário final: R$ %.2f \n", salariofinal); 
        
        /*Os valores devem ser zerados ao fim de cada loop para os novos valores serem calculados.*/
        auxilio = 0; 
        salarioinicial = 0; 
        salariofinal = 0; 
        
        printf("\n"); 
    } 
    return (EXIT_SUCCESS);
}

