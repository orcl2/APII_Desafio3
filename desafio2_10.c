// 10. (desafio2_10.c (função + ponteiros)) Escreva um programa que leia diversos números
// inteiros fornecidos pelo usuário e distribua esses valores entre dois vetores: o vetor dos
// ímpares e o vetor dos pares. Cada um terá tamanho de 10 elementos. O término do
// algoritmo se dará quando o usuário digitar zero ou um dos vetores tiver sido totalmente
// preenchido. Mostre o conteúdo dos dois vetores no final. (Dica: Criar uma função que
// receba como parâmetros o número lido, os dois vetores e os índices de cada vetor que
// devem ser usados como condição de parada no método main()).
#include "./util/desafio2_10.h"
#include <stdio.h>

void fillArray(int num, int *vetorA, int *vetorB, int *idxVetorA, int *idxVetorB);

int main(void){
    
    int vetorA[10];
    int vetorB[10];
    int idxVetorA = 0;
    int idxVetorB = 0;
    int num = 1;

    printf("O programa sera encerrado caso digite o numero '0' ou algum dos vetores seja completado.\n");
    
    do{ 
        printf("Informe um valor: ");
        scanf("%d", &num);
        fillArray(num, vetorA, vetorB, &idxVetorA, &idxVetorB);        
    }
    while(num != 0 && idxVetorA < 10 && idxVetorB < 10);

    printf("_________________________\n");
    if(idxVetorA != 0)
    {
        printf("Vetor de numeros pares: \n");
        for(int i = 0; i < idxVetorA; i++)
            printf("VetorDePares[%d] =  %d\n",  i, vetorA[i]);
    }
    else
        printf("Vetor de numeros pares vazio!\n");

    printf("_________________________\n");
    if(idxVetorB != 0)
    {
        printf("Vetor de numeros impares: \n");
        for(int i = 0; i < idxVetorB; i++)
            printf("VetorDeImpares[%d] =  %d\n", i, vetorB[i]);
    }
    else
        printf("Vetor de numeros impares vazio!\n");
    
}

void fillArray(int num, int *vetorA, int *vetorB, int *idxVetorA, int *idxVetorB){
    if(num%2 == 0){
        vetorA[*idxVetorA] = num;
        *idxVetorA = *idxVetorA + 1;
    }
    else {
        vetorB[*idxVetorB] = num;
        *idxVetorB = *idxVetorB + 1;
    }  
};
