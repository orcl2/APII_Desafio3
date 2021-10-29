// 2. (desafio2_02.c) Preencher um vetor A de 10 elementos (índices de 0 a 9) “em tempo de
// execução” com os números inteiros 10, 20, 30, 40, 50, ..., 100. Escrever o vetor A após o
// seu total preenchimento.
#include "./util/common.h"

int main(void){

    int length = 10;
    int startValue = 10;
    int step = 10;

    int *A = createIntArray(10);
    fillArrayWithIncrementValue(A, startValue, step, length);

    printArray(A, length);
}