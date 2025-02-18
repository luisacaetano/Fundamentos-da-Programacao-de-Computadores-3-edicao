/* Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
da série a seguir:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int termos, x, expoente = 2, numFat = 1, fatorial;
    float resp;

    printf("Insira a quantidade de termos a ser calculado: ");
    scanf("%d", &termos);
    //Recebe a quantidade de termos
   
    printf("Insira o valor de x: ");
    scanf("%d", &x);
    //Recebe o valor de x
   
    for(int i = 0; i < termos; i++){
        if(numFat == 4){
            while(1==1){
                 if(expoente % 2 == 0){ //se o expoente for par, x é negativo...
                  x = -x;
                  }

                fatorial = calcFat(numFat); //calcula o fatorial do numero...
                resp = resp +((float) powf(x, expoente) / fatorial);
                numFat--;
                expoente++;
                if(i == termos){
                    break;
                }
                i++;
                if(numFat == 1)
                    break;
            }
        }else if(numFat == 1){
            while(1 ==1){

                if(expoente % 2 == 0){//se o expoente for par, x é negativo...
                     x = -x;
                }else if(expoente % 2 != 0){
                    x = fabs(x);
                }

                fatorial = calcFat(numFat);
                resp = resp + ((float)powf(x, expoente) / fatorial);
                numFat++;
                expoente++;
                if(i == termos){
                    break;
                }
                i++;
                if(numFat == 4)
                    break;
            }
        }
    }

    printf("Valor da sequencia: %.2f", resp);
}

int calcFat(int num){//calcula o fatorial e retorna seu valor...
    int resultado = num;
    for(int i = (num-1); i > 1; i--){
        resultado  = resultado * i;
    }
    return resultado;
}

