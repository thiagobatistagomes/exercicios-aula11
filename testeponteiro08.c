#include <stdio.h>
#include <stdlib.h>
#define L 4 // Linhas
#define C 5 // Colunas

/*
    Uso Ineficaz!
*/

int main ()
{
    int i;
    int **p = (int **)malloc(L * sizeof(int *));
    for(i = 0; i < L; i++)
    {
        p[i] = (int *)malloc(C * sizeof(int));
    }

    //utilizacao de p como matriz
    //referenciado como p[x][y]

    for(i = 0; i < L; i++)
    {
        free(p[i]); //desaloca colunas
    }

    free(p); //desaloca linhas

    return 0;
}