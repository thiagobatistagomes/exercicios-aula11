#include <stdio.h>

/*
    Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada posição. A seguir, utilizando um ponteiro de int, mostre o endereço e o conteúdo de cada posição do vetor
*/

int main ()
{
    int vet[10];
    int i;
    int *p = vet;

    printf("Digite 10 numeros inteiros.\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    //mostrar o endereco e conteudo

    for(i = 0; i < 10; i++)
    {
        printf("Endereco: %p\n", &vet[i] );
        printf("Conteudo: %d\n", vet[i]);
    }





    return 0;
}