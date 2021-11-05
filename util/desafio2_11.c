void showMenu(int *op){
    printf("Escolha alguma das alternativas abaixo: \n");
    printf("1 - Soma dos elementos\n");
    printf("2 - Produto dos elementos\n");
    printf("3 - Media dos elementos\n");
    printf("4 - Mostre o vetor\n");
    scanf("%d", op); 
}

void doSomethingWithArray(int *op, int arrayLength, int *vetor){
    float aux;
    switch(*op){
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
