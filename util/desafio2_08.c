// 8. (desafio2_08.c (função + ponteiros)) Ler um vetor M de 10 elementos e imprimi-lo.
// Troque a seguir o 1º elemento com o 6º, o 2º com o 7º, e assim por diante até o 5º com
// 10º, e escreva o vetor M modificado (Dica: Criar função que receba como parâmetros o
// vetor M + o tamanho do vetor + a distância entre os elementos a serem invertidos (um
// int) e que faça a inversão dos valores no vetor original).

#include <stdio.h>

void modifyArrayM(int *vetorM, int *arrayLength, int *interval);

int main(void){
    
    int interval = 5;
    int arrayLength = 10;
    int vetorM[10] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    
    printf("Vetor M original: \n");
    for(int i = 0; i < arrayLength; i++)
    {
        printf("Vetor[%d] =  %d\n",  i, vetorM[i]);
    }

    modifyArrayM(vetorM, &arrayLength, &interval);

    printf("Vetor M modificado: \n");
    for(int i = 0; i < arrayLength; i++)
    {
        printf("Vetor[%d] =  %d\n",  i, vetorM[i]);
    }
}

void modifyArrayM(int *vetorM, int *arrayLength, int *interval){

    for(int i = 0; i < (*arrayLength / 2); i++)
    {
        int aux = vetorM[i + *interval];
        vetorM[i + *interval] = vetorM[i];
        vetorM[i] = aux;
    }
};
