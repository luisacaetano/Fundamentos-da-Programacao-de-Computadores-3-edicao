/*
Em um campeonato de futebol existem cinco times e cada um possui onze jogadores. Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
■■ a quantidade de jogadores com idade inferior a 18 anos;
■■ a média das idades dos jogadores de cada time;
■■ a média das alturas de todos os jogadores do campeonato;
■■ a porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int idade, cont_idade = 0, soma_idade = 0, soma_altura = 0, cont_peso = 0; 
    float peso, altura, media_idade, media_altura, media_peso; 
    
    for (int t = 1; t <= 5; t++){ //t por que são cinco times
        printf("TIME %d \n", t); 
        
        for (int j = 1; j <= 11; j++) { //j por que são onze jogadores
            printf("JOGADOR %d \n", j); 
            printf("Insira sua idade: "); 
            scanf("%d", &idade); 
            printf("Insira seu peso: ");
            scanf("%f", &peso); 
            printf("Insira sua altura: "); 
            scanf("%f", &altura); 
            printf("\n"); 
            
            soma_idade = soma_idade + idade; 
            soma_altura = soma_altura + altura; 
            
            if (idade < 18) {
                cont_idade++; //contador para verificar quantos jogadores tem menos de 18 anos 
            }
            
            if (peso > 80) {
             cont_peso++;  //contador para verificar quantos jogadores pesam mais de 80 kilos 
            }
        }
        media_idade = soma_idade/11; 
        media_peso = cont_peso * 0.55;
        
        printf("\nMedia de idade do time é de %.2f anos. ", media_idade);
    }
    media_altura = soma_altura/5;  
    
    printf("A media de altura do campeonato é de %.2f metros. \n",media_altura);
    printf("Quantidade de jogadores com menos de 18 anos: %d \n",  cont_idade);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f %% \n", media_peso);
 
    return (EXIT_SUCCESS);
}

