/*
Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   
    //dados das cidades
    int codigo1, codigo2, codigo3, codigo4, codigo5;
    int numveiculos1, numveiculos2, numveiculos3, numveiculos4, numveiculos5;
    int numacidentes1, numacidentes2, numacidentes3, numacidentes4, numacidentes5;
   
    //indice de acidentes e médias
    float indice1, indice2, indice3, indice4, indice5;
    float mediatotal, mediaacidentes;
   
    //recebendo os dados das cidades
    printf("CIDADE 1 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo1);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &numveiculos1);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &numacidentes1);
    printf("------------------------------- \n \n");
   
    printf("CIDADE 2 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo2);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &numveiculos2);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &numacidentes2);
    printf("------------------------------- \n \n");
   
    printf("CIDADE 3 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo3);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &numveiculos3);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &numacidentes3);
    printf("------------------------------- \n \n");
   
    printf("CIDADE 4 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo4);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &numveiculos4);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &numacidentes4);
    printf("------------------------------- \n \n");
   
    printf("CIDADE 5 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo5);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &numveiculos5);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &numacidentes5);
    printf("------------------------------- \n \n");
   
    //calculo dos indices dos acidentes
    indice1 = numveiculos1/numacidentes1;
    indice2 = numveiculos2/numacidentes2;
    indice3 = numveiculos3/numacidentes3;
    indice4 = numveiculos4/numacidentes4;
    indice5 = numveiculos5/numacidentes5;
   
    //verificando qual cidade tem o maior indice de acidentes
    if ((indice1 > indice2) && (indice1 > indice3) && (indice1 > indice4) && (indice1 > indice5)) {
        printf("A cidade 1 tem o maior indice de acidentes. \n");  
    } else if ((indice2 > indice1) && (indice2 > indice3) && (indice2 > indice4) && (indice2 > indice5)) {
        printf("A cidade 2 tem o maior indice de acidentes. \n");  
    } else if ((indice3 > indice1) && (indice3 > indice2) && (indice3 > indice4) && (indice3 > indice5)) {
        printf("A cidade 3 tem o maior indice de acidentes. \n");  
    } else if ((indice4 > indice1) && (indice4 > indice2) && (indice4 > indice3) && (indice4 > indice5)) {
        printf("A cidade 4 tem o maior indice de acidentes. \n");  
    } else if ((indice5 > indice1) && (indice5 > indice2) && (indice5 > indice3) && (indice5 > indice4)) {
        printf("A cidade 5 tem o maior indice de acidentes. \n");  
    }
   
    //calulando a media total de veiculos nas cinco cidades
    mediatotal = (numveiculos1 + numveiculos2 + numveiculos3 + numveiculos4 + numveiculos5)/5;
    printf("A média de veículos das 5 cidades é de: %.2f \n", mediatotal);
   
    //verificando qual cidade tem menos de 2000 veiculos
    if (numveiculos1 < 2000) {
        printf("A media de acidentes da Cidade 1 é %.2f \n", mediaacidentes = numveiculos1 / numacidentes1);
    }
    if (numveiculos2 < 2000) {
        printf("A media de acidentes da Cidade 2 é %.2f \n", mediaacidentes = numveiculos2 / numacidentes2);
    }
    if (numveiculos3 < 2000) {
        printf("A media de acidentes da Cidade 3 é %.2f \n", mediaacidentes = numveiculos3 / numacidentes3);
    }
    if (numveiculos4 < 2000) {
        printf("A media de acidentes da Cidade 4 é %.2f \n", mediaacidentes = numveiculos4 / numacidentes4);
    }
    if (numveiculos5 < 2000) {
        printf("A media de acidentes da Cidade 5 é %.2f \n", mediaacidentes = numveiculos5 / numacidentes5);
    }
    return (EXIT_SUCCESS);
}