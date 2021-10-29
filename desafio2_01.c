//1. (desafio2_01.c) Preencher um vetor X de 10 elementos (índices de 0 a 9) “em tempo de
//execução” com o valor inteiro 30. Escrever o vetor X após seu total preenchimento.
#include "./util/common.h"

int main(void){
    
    int *X = NULL;
    int length = 10;
    int value = 30;

    X = createIntArray(length);      
    fillArrayWithValue(X, value, length);
    printArray(X, length);
}
