#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Um ponteiro para struct recebera a funcao malloc()
    O operador ponto é empregado para acessar os membros da struct
    O operador colchetes é empregado para acessar as posicoes do array
    A funcao free() libera memoria
*/

typedef struct cadastro
{
    char nome[50];
    int idade;
}cadastro;


int main ()
{   
    int i;
    cadastro *c = (cadastro*)malloc(5 * sizeof(cadastro));
    strcpy(c[0].nome, "Maria");
    c[0].idade = 25;
    strcpy(c[1].nome, "Pedro");
    c[1].idade = 20;
    strcpy(c[2].nome, "Thiago");
    c[2].idade = 22;

    for(i = 0; i < 3; i++)
    {
        printf("%s tem %d anos.\n", c[i].nome, c[i].idade);
    }

    free(c);

    return 0;
}