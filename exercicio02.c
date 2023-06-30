#include <stdio.h>

/*
    Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis, compare seus endereços e exiba o conteúdo do maior endereço.
*/

int main ()
{
    int a, b;
    int *x = &a, *y = &b;

    printf("Digite o valor das variaveis a e b: \n");
    scanf("%d %d", &a, &b);

    if(x > y) printf("Conteudo do maior endereco:\t %d \n", *x);
    else printf("Conteudo do maior endereco:\t %d \n", *y);

    return 0;
}