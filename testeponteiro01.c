#include <stdio.h>

int main ()
{
    int a = 2;
    int *p = &a; // ponteiro p aponta para o endereco da variavel a

    printf("Valor de A: %d \n", a); // valor de a atual eh 2

    *p = 3; // atribuicao de conteudo para o ponteiro muda o valor da variavel a

    printf("Valor de A: %d \n", a); // a recebera o valor 3 atribuido ao ponteiro


    return 0;
}