

// 9. (desafio2_09.c (função + ponteiros)) Escreva um programa que leia 2 vetores de 10
// elementos inteiros. Crie um terceiro vetor que seja a união dos dois primeiros (10 + 10).
// Mostre o vetor resultante (Dica: Criar função que receba como parâmetro os dois vetores
// de 10 elementos + o terceiro vetor, e que abasteça o terceiro vetor conforme a regra
// acima). *** (arrumar especiaficação)
#include "./util/common.h"
#include "./util/desafio2_09.h"

int main(void){
    
    int *vetorA;
    int *vetorB;
    int *vetorC;
    int length = 10;

    vetorA = createIntArray(length);
    vetorB = createIntArray(length);
    vetorC = createIntArray(length);

    fillArrayWithRandomValue(vetorA, length);
    fillArrayWithRandomValue(vetorB, length);
    fillArrayWithRandomValue(vetorC, length);
    
    sumOfArray(vetorA, vetorB, vetorC);

    printArray(vetorC, length);
}