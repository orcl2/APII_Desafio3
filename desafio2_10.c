// 10. (desafio2_10.c (função + ponteiros)) Escreva um programa que leia diversos números
// inteiros fornecidos pelo usuário e distribua esses valores entre dois vetores: o vetor dos
// ímpares e o vetor dos pares. Cada um terá tamanho de 10 elementos. O término do
// algoritmo se dará quando o usuário digitar zero ou um dos vetores tiver sido totalmente
// preenchido. Mostre o conteúdo dos dois vetores no final. (Dica: Criar uma função que
// receba como parâmetros o número lido, os dois vetores e os índices de cada vetor que
// devem ser usados como condição de parada no método main()).
#include "./util/common.h"
#include "./util/desafio2_10.h"

void fillArray(int num, int *vetorA, int *vetorB, int *idxVetorA, int *idxVetorB);

int main(void){
    
    int *vetorA;
    int *vetorB;
    int idxVetorA = 0;
    int idxVetorB = 0;
    int num = 1;

    vetorA = createIntArray(10);
    vetorB = createIntArray(10);

    printf("O programa sera encerrado caso digite o numero '0' ou algum dos vetores seja completado.\n");
    
    do{ 
        printf("Informe um valor: ");
        scanf("%d", &num);
        fillArray(num, vetorA, vetorB, &idxVetorA, &idxVetorB);
    }
    while(num != 0 && idxVetorA < 10 && idxVetorB < 10);

    printf("_________________________\nVetor de numeros pares\n");
    if(idxVetorA != 0)
        printArray(vetorA, idxVetorA);
    else
        printf("Vazio!\n");

    printf("_________________________\nVetor de numeros impares\n");
    if(idxVetorB != 0)
        printArray(vetorB, idxVetorB);
    else
        printf("Vazio!\n");    
}