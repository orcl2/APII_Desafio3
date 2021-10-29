// 12. (desafio2_12.c (função + ponteiros)) Faça um programa que leia dois vetores (A e B) de
// 50 posições e crie um terceiro (C) com a intersecção dos dois primeiros, isto é, coloque em
// C apenas os elementos que existem em A e que também existem em B. Mostre C (Dica:
// Criar função que receba como parâmetros os dois vetores A e B + o terceiro vetor, e que
// abasteça o terceiro vetor conforme a regra acima).
#include "./util/desafio2_12.h"
#include <stdio.h>

void intersectOfTwoArrays(int *vetorA, int *vetorB, int *vetorC, int *idxVetorC);

int main(void){
    int vetorA[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 ,48, 49, 50};
    int vetorB[50] = {11, 12, 13, 4, 5, 6, 7, 8, 9, 10, 111, 12, 13, 14, 15, 16, 117, 118, 119, 20, 121, 22, 123, 124, 125, 126, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 143, 144, 145, 146, 147 ,148, 149, 150};
    int vetorC[50];
    int idxVetorC;

    intersectOfTwoArrays(vetorA, vetorB, vetorC, &idxVetorC);
    
    for(int i = 0; i < idxVetorC; i++)
    {
        printf("VetorC[%d]: %d\n", i, vetorC[i]);
    }

}

void intersectOfTwoArrays(int *vetorA, int *vetorB, int *vetorC, int *idxVetorC){
    *idxVetorC = 0;
    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 50; j++)
        {
            if(vetorA[i] == vetorB[j])
            {
                vetorC[*idxVetorC] = vetorA[i];
                *idxVetorC = *idxVetorC + 1;
            }
        }
    }
    
};
