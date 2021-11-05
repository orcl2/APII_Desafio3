// 11. (desafio2_11.c (função + ponteiros)) Elabore um programa que leia um vetor de 6
// posições e após sua leitura leia outra variável identificadora que calcule a operação
// conforme a informação contida nesta variável:
//   1- Soma dos elementos
//   2- Produto dos elementos
//   3- Média dos elementos
//   4- Mostre o vetor
// (Dica: Criar uma única função que calcule todas as opções desejadas. Recebe “opcao”,
// “tamanho do vetor”, “vetor”).

#include "desafio2_11.c"

void doSomethingWithArray(int *op, int arrayLength, int *vetor);
void showMenu(int *op);