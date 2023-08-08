#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
     Usando apenas ponteiros, escreva um programa que leia uma frase de até 80 caracteres e a imprima em
ordem reversa convertendo todos os caracteres minúsculos para maiúsculos.
*/


int main ()
{
    char *frase = NULL;
    int i, j;

    frase = (char *)malloc(81 * sizeof(char)); // alocando vetor de ate 80 posicoes

    if(!frase)
    {
        printf("Falha na alocacao...\n");
        exit(1); // encerra o programa caso falhe a alocacao
    }

    //lendo o vetor de ate 80 posicoes


    for(i = 0; i < 81; i++)
    {
        scanf(" %[^\n]", frase[i]);
    }

    printf("%s\n", *frase);

    //imprimir em ordem reversa convertendo todos os caracteres minusculos para maiusculos

    for(j = strlen(frase) - 1; j >= 0; j--)
    {
        if(islower(frase[j]))
        {
            frase[j] = toupper(frase[j]);
        }
        printf("%c", frase[j]);
    }

    free(frase); // liberar memoria

    return 0;
}