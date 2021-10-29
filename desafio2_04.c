// 4. (desafio2_04.c (função + ponteiros)) Escreva um programa que leia e mostre um vetor de
// 20 elementos inteiros (inicializado em tempo de compilação). A seguir, conte e diga
// quantos valores pares existem no vetor (Dica: Criar função que receba como parâmetro
// o vetor e retorne o número de valores pares existentes no vetor).
#include "./util/common.h"
#include "./util/desafio2_04.h"

int main(void){
    
    int length = 20;
    int *vetor = createIntArray(length);

    fillArrayWithRandomValue(vetor, length);

    printf("O vetor contem %d valores pares.", getTotalOfEvenvalues(vetor, length));
}
