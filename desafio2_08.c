// 8. (desafio2_08.c (função + ponteiros)) Ler um vetor M de 10 elementos e imprimi-lo.
// Troque a seguir o 1º elemento com o 6º, o 2º com o 7º, e assim por diante até o 5º com
// 10º, e escreva o vetor M modificado (Dica: Criar função que receba como parâmetros o
// vetor M + o tamanho do vetor + a distância entre os elementos a serem invertidos (um
// int) e que faça a inversão dos valores no vetor original).
#include "./util/desafio2_08.h"
#include "./util/common.h"

int main(void){
    
    int interval = 5;
    int length = 10;
    int *vetorM;

    vetorM = createIntArray(length);
    fillArrayWithRandomValue(vetorM, length);

    printArray(vetorM, length);

    modifyArrayM(vetorM, &length, &interval);

    printArray(vetorM, length);
}