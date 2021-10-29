// 11. (desafio2_11.c (função + ponteiros)) Elabore um programa que leia um vetor de 6
// posições e após sua leitura leia outra variável identificadora que calcule a operação
// conforme a informação contida nesta variável:
//   1- Soma dos elementos
//   2- Produto dos elementos
//   3- Média dos elementos
//   4- Mostre o vetor
// (Dica: Criar uma única função que calcule todas as opções desejadas. Recebe “opcao”,
// “tamanho do vetor”, “vetor”).
#include "./util/desafio2_11.h"
#include <stdio.h>

void doSomethingWithArray(int op, int arrayLength, int *vetor);

int main(void){
    int arrayLength = 6;
    int op = 0;
    int vetor[6];
    int num;

    printf("Informe os valores para o vetor de 6 posicoes!.\n");
    
    for(int i = 0; i < 6; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &num);  
        vetor[i] = num;
    }

    printf("Escolha alguma das alternativas abaixo: \n");
    printf("1 - Soma dos elementos\n");
    printf("2 - Produto dos elementos\n");
    printf("3 - Media dos elementos\n");
    printf("4 - Mostre o vetor\n");
    scanf("%d", &op);  

    doSomethingWithArray(op, arrayLength, vetor);    
}

void doSomethingWithArray(int op, int arrayLength, int *vetor){
    float aux;
    switch(op){
        case 1:
            aux = 0;
            for(int i = 0; i < arrayLength; i++)
                aux = aux + vetor[i];
            printf("Resultado da operacao = %.0f", aux);
            break;
        case 2:
            aux = 1;
            for(int i = 0; i < arrayLength; i++)
                aux = aux * vetor[i];
            printf("Resultado da operacao = %.0f", aux);
            break;
        case 3: 
            aux = 0;
            for(int i = 0; i < arrayLength; i++)
                aux = (aux + vetor[i]) / (i + 1);
            printf("Resultado da operacao = %.2f", aux);
            break;
        case 4:
            for(int i = 0; i < arrayLength; i++)
                printf("Vetor[%d] = %d\n", i, vetor[i]);
            break;
    }
};
