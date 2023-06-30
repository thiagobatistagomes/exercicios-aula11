#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Para alocar uma unica struct:
    Um ponteiro para struct recebera a funcao malloc()
    O operador seta "->" é empregado para acessar os membros da struct
    A funcao free() libera a memoria
*/

typedef struct cadastro
{
    char nome[50];
    int idade;
} cadastro;


int main ()
{
    cadastro *c = (cadastro*)malloc(sizeof(cadastro));
    strcpy(c->nome, "Maria");
    c->idade = 25;
    printf("%s tem %d anos.\n", c->nome, c->idade);
    free(c);

    return 0;
}