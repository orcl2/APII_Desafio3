// 6. (desafio2_06.c) Escreva um programa que leia um vetor de 50 posições de números
// inteiros (inicializado em tempo de compilação) e mostre somente os positivos com suas
// respectivas posições.
#include "./util/desafio2_06.h"
#include <stdio.h>

int main(void){
    
    int vetor[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 ,48, 49, 50};

    printf("Resultado da multiplicacao de vetores: \n");
    for(int i = 0; i < 50; i++)
    {
        if(vetor[i]%2 == 0)
            printf("valor -> %d - indice -> %d\n", vetor[i], i);
    }
}
