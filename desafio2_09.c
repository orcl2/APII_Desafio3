// 9. (desafio2_09.c (função + ponteiros)) Escreva um programa que leia 2 vetores de 10
// elementos inteiros. Crie um terceiro vetor que seja a união dos dois primeiros (10 + 10).
// Mostre o vetor resultante (Dica: Criar função que receba como parâmetro os dois vetores
// de 10 elementos + o terceiro vetor, e que abasteça o terceiro vetor conforme a regra
// acima). *** (arrumar especiaficação)
#include "./util/desafio2_09.h"
#include <stdio.h>

void sumOfArray(int *vetorA, int *vetorB, int *vetorC);

int main(void){
    
    int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int vetorC[10];

    sumOfArray(vetorA, vetorB, vetorC);

    printf("Resultado da soma de vetores: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("Vetor[%d] =  %d\n",  i, vetorC[i]);
    }
}

void sumOfArray(int *vetorA, int *vetorB, int *vetorC){
    for(int i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
};
