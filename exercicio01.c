#include <stdio.h>

/*
    Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior 
deles
*/

int main ()
{
    int a, b;
    int *x = NULL, *y = NULL;

    x = &a;
    y = &b;

    printf("Endereco de A:\t %p \n", &a);
    printf("Endereco de B:\t %p \n", &b);
    printf("X aponta para:\t %p \n", x);
    printf("Y aponta para:\t %p \n", y);

    if(x > y)
    {
        printf("O maior valor de endereco eh: %p", x );
    }
    else
    {
        printf("O maior valor de endereco eh: %p", y);
    }




    return 0;
}