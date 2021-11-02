// 7. (desafio2_07.c) (função + ponteiros)) Ler um vetor X de 10 elementos. Crie um vetor Y da
// seguinte forma. Os elementos de ordem par de Y (elementos com índice 0, 2, 4, 6, 8)
// receberão os respectivos elementos de X multiplicados por 2. Os elementos de ordem
// ímpar de Y (elementos com índices 1, 3, 5, 7, 9) receberão os respectivos elementos de X
// multiplicados por 3. Escrever o vetor Y (Dica: Criar função que receba como parâmetro os
// vetores x e y e que abasteça o vetor y conforme a regra acima).
#include "./util/common.h"
#include "./util/desafio2_07.h"

int main(void){
    int *vetorX;
    int *vetorY;
    int length = 10;

    vetorX = createIntArray(length);
    fillArrayWithRandomValue(vetorX, length);

    vetorY = createIntArray(length);
    fillArrayY(vetorX, vetorY);

    printArray(vetorY,length);
}