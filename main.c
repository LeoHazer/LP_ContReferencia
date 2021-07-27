#include "contref.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char const * argv[])
{
    printf("Cont 1\n\n");
    int *v = malloc2(sizeof(int));
    *v = 10;
    print();

    printf("Cont 2\n\n");
    int *w = malloc2(sizeof(int));
    print();
    *w = 20;

    printf("Cont 3\n\n");
    atrib2(&v, w);
    print();

    printf("Cont 4\n\n");
    char *c = malloc2(sizeof(char));
    *c = 'Z';
    print();
    atrib2(&w, NULL);

    printf("Cont 5\n\n");
    print();
    dump();
    return 0;
}
