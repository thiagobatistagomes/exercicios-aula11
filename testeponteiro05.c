#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p = (int *)malloc( 5 * sizeof(int));
    int *q = (int *)calloc( 5, sizeof(int));
    int i;

    if( !p || !q)
    {
        exit(1);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d: %d \t %d \n", i, p[i], q[i]);
    }

    free(p);
    free(q);

    return 0;
}