// 7. (desafio2_07.c) (função + ponteiros)) Ler um vetor X de 10 elementos. Crie um vetor Y da
// seguinte forma. Os elementos de ordem par de Y (elementos com índice 0, 2, 4, 6, 8)
// receberão os respectivos elementos de X multiplicados por 2. Os elementos de ordem
// ímpar de Y (elementos com índices 1, 3, 5, 7, 9) receberão os respectivos elementos de X
// multiplicados por 3. Escrever o vetor Y (Dica: Criar função que receba como parâmetro os
// vetores x e y e que abasteça o vetor y conforme a regra acima).
#include "./util/desafio2_07.h"
#include <stdio.h>

void fillArrayY(int *vetorX, int *vetorY);

int main(void){
    
    int vetorX[10] = {40, 41, 42, 43, 44, 45, 46, 47 ,48, 49};
    int vetorY[10];

    fillArrayY(vetorX, vetorY);

    printf("Vetor Y preenchido: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("Vetor[%d] =  %d\n",  i, vetorY[i]);
    }
}

void fillArrayY(int *vetorX, int *vetorY){

    for(int i = 0; i < 10; i++)
    {
        if(i%2 == 0)
            vetorY[i] = vetorX[i] * 2;
        else    
            vetorY[i] = vetorX[i] * 3;
    }
};
