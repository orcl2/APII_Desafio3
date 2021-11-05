// 12. (desafio2_12.c (função + ponteiros)) Faça um programa que leia dois vetores (A e B) de
// 50 posições e crie um terceiro (C) com a intersecção dos dois primeiros, isto é, coloque em
// C apenas os elementos que existem em A e que também existem em B. Mostre C (Dica:
// Criar função que receba como parâmetros os dois vetores A e B + o terceiro vetor, e que
// abasteça o terceiro vetor conforme a regra acima).
#include "./util/common.h"

int main(void){
    int *vetorA;
    int *vetorB;
    int *vetorC;
    int length = 50;
    int idxVetorC = 1;

    vetorA = createIntArray(length);
    vetorB = createIntArray(length);
    vetorC= createIntArray(length);
    
    fillArrayWithRandomValue(vetorA, length);
    fillArrayWithRandomValue(vetorB, length);

    intersectOfTwoArrays(vetorA, vetorB, vetorC, &idxVetorC, length);

    printArray(vetorC, idxVetorC);
}