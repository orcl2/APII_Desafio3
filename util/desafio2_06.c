void printPositivevaluesOfArray(int *array, int lenght){
    printf("Vetor preenchido: \n");
    for(int i = 0; i < lenght; i++)
    {
        if(array[i] >= 0){
            printf("Posicao %d = %d\n", i, array[i]);
        }
    }
}

