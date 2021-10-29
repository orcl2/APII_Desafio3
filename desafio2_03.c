// 3. (desafio2_03.c (função)) Preencher um vetor B de 10 elementos “em tempo de execução”
// com o número 10 se o índice do elemento for ímpar, e com o número 20 se for par.
// Escrever o vetor B após o seu total preenchimento (Dica: Criar função que receba como
// parâmetro o índice do vetor e retorne 10 ou 20, conforme for par ou ímpar).
#include "./util/common.h"
#include "./util/desafio2_03.h"

int getValidValueByIndex(int index);

int main(void){
    
    int *B;
    int startIndex = 0;
    int step = 1;
    int endIndex = 9;
    int length = 10;

    B = createIntArray(length);

    fillArrayWithValidValueByIndex(B, startIndex, step, endIndex);

    printArray(B, length);
}
