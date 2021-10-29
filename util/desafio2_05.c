
void printResult(int *vetorA, int *vetorB, int *vetorC, int length)
{
    printf("Resultado da multiplicacao de vetores: \n");
    for(int i = 0; i < length; i++)
    {
        printf("%d * %d = %d\n", vetorA[i], vetorB[i], vetorC[i]);
    }
}
