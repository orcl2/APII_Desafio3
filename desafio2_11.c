// 11. (desafio2_11.c (função + ponteiros)) Elabore um programa que leia um vetor de 6
// posições e após sua leitura leia outra variável identificadora que calcule a operação
// conforme a informação contida nesta variável:
//   1- Soma dos elementos
//   2- Produto dos elementos
//   3- Média dos elementos
//   4- Mostre o vetor
// (Dica: Criar uma única função que calcule todas as opções desejadas. Recebe “opcao”,
// “tamanho do vetor”, “vetor”).
#include "./util/common.h"
#include "./util/desafio2_11.h"

int main(void){
    int arrayLength = 6;
    int *op = (int*) malloc(1 * sizeof(int));
    int *vetor = createIntArray(arrayLength);;
    int num;

    printf("Informe os valores para o vetor de 6 posicoes!.\n");
    
    for(int i = 0; i < 6; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &num);  
        vetor[i] = num;
    }

    showMenu(op); 

    doSomethingWithArray(op, arrayLength, vetor);    
}