#include <stdio.h>

/*
    Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir,
    utilizando um ponteiro de int, some uma unidade a cada posição do vetor. Imprima o vetor antes e após a
    modificação
*/

int main ()
{
    int vet[10], i;
    int *p = vet; 

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Imprimir o vetor antes
    printf("Vetor antes da modificacao:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Adicionar uma unidade a cada posição do vetor
    for (i = 0; i < 10; i++)
    {
        (*p)++;  // incrementa o valor apontado 
        p++;    
    }

    // Imprimir o vetor após a modificação
    printf("Vetor apos a modificacao:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }




    return 0;
}