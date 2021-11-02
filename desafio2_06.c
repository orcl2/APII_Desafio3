// 6. (desafio2_06.c) Escreva um programa que leia um vetor de 50 posições de números
// inteiros (inicializado em tempo de compilação) e mostre somente os positivos com suas
// respectivas posições.
#include "./util/common.h"
#include "./util/desafio2_06.h"

void main(){
    
    int *vetor;
    int length = 50;

    vetor = createIntArray(length);

    fillArrayWithRandomValue(vetor, length);

    printArray(vetor, length);
}
