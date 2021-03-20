#include <stdio.h>
#include <stdlib.h>
#include "contref.h"
#include "contref.c"
#include <assert.h>


int main(int argc, char const *argv[])
{

    int i, **p, *q;
    const int tamanho = 10000000;


    for (i = 0; i < tamanho; i++)
    {
        p = malloc2(sizeof(int));
        q = malloc2(sizeof(int));

        if(*p=0)
        *p = realloc(q, 2*sizeof(p));
        if(i == tamanho-1)
        print();

    }
    dump();

    return 0;
}
