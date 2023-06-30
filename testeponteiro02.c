#include <stdio.h>

int main ()
{
    int a = 2, b = 2;
    int *p = &a, *q = &b;

    if(p == q) printf("Mesma posicao\n"); // comparando posicoes de memoria
    else printf("Posicoes diferentes\n");

    if(*p == *q) printf("Mesmo conteudo\n"); // comparando conteudo
    else printf("Conteudos diferentes\n");




    return 0;
}