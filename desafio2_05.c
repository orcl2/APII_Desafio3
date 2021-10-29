// 5. (desafio2_05.c (função + ponteiros)) Escreva um programa que leia dois vetores de 10
// posições e faça a multiplicação dos elementos de mesmo índice em ambos os vetores,
// colocando o resultado em um terceiro vetor. Mostre o vetor resultante (Dica: Criar função
// que receba como parâmetros os dois vetores a serem multiplicados + o terceiro vetor, e
// abasteça o terceiro vetor conforme a regra acima).
#include "./util/common.h"
#include "./util/desafio2_05.h"

int main(void){
    
    int length = 10;
    int *vetorA = createIntArray(length);
    int *vetorB = createIntArray(length);
    int *vetorC = createIntArray(length);

    fillArrayWithRandomValue(vetorA, length);
    fillArrayWithRandomValue(vetorB, length);
    fillArrayWithRandomValue(vetorC, length);

    multiplicationOfArray(vetorA, vetorB, vetorC, length);

    printResult(vetorA, vetorB, vetorC, length);
}
