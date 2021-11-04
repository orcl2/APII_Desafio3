void exitProgram(){
    exit(1);
}

int *createIntArray(int length){
    return malloc(length * sizeof(int));
}

void *resizeIntArray(int *array, int value, int length){
    if(array == NULL){
        array = createIntArray(length);
        array[0] = value;
    } else {
        int *newArray = (int*) realloc(array, length * sizeof(int));

        if(newArray != NULL) {
            array = newArray;
            array[length - 1] = value;
        }
        else 
        {
            free(array);
            printf("\nErro ao alocar a memória!\n");
            exitProgram();
        }
    }
}

void printArray(int *array, int lenght){
    printf("Vetor preenchido: \n");
    for(int i = 0; i < lenght; i++)
    {
        printf("Posicao %d = %d\n", i, array[i]);
    }
}

void fillArrayWithValue(int *array, int value, int lenght){
    for(int i = 0; i < lenght; i++)
    {
        array[i] = value;
    }
} 

void fillArrayWithIncrementValue(int *array, int startValue, int step, int lenght){
    for(int i = 0; i < lenght; i++)
    {
        array[i] = startValue + (i * step);
    }
}

void fillArrayWithRandomValue(int *array, int lenght){
    srand((unsigned)time(NULL));

    for(int i = 0; i < lenght; i++)
    {
        array[i] = rand() % 200;
    }
}

void multiplicationOfArray(int *vetorA, int *vetorB, int *vetorC, int length){
    for(int i = 0; i < length; i++)
    {
        vetorC[i] = vetorA[i] * vetorB[i];
    }
};