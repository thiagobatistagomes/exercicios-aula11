#include <stdio.h>

/*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para essas variáveis. Associe as variáveis aos ponteiros. Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

int main ()
{
    int a = 3;
    int *x = &a;
    float b = 3.5;
    float *y = &b;
    char c = 'f';
    char *z = &c;

    printf("Valor de A: %d\n", a); // valor antes
    printf("Valor de B: %.2f\n", b);
    printf("Valor de C: %c\n", c);

    *x = 4;
    *y = 5.5;
    *z = 's';

    printf("Valor de A: %d\n", *x); // valor modificado pelo ponteiro
    printf("Valor de B: %.2f\n", b);
    printf("Valor de C: %c\n", c);
    

    return 0;
}