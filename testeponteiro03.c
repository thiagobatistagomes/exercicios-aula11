#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p = NULL, i;

    p = (int *)malloc( 5 * sizeof(int) ); // alocando um vetor de 5 posicoes

    if (!p) // se a alocacao dinamica dememoria falhar, uma mensagem ao usuario sera impressa
    {
        printf("Memoria insuficiente...\n");
        exit(1); // comando para finalizar o programa caso falhe
    }

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p); // comando para desalocar(devolver) memoria para o sistema. obs: deve ser feito para cada ponteiro criado

    

    return 0;
}