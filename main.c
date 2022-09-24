#include <stdio.h>
#include <stdlib.h>


char **fun(void)
{
    char **s = malloc(sizeof(char *));
    printf ("%p\n", *s);
    return s;
}

int
main(ac, av)
        int ac;
        char **av;
{
    char *s;

    s = *fun();
    printf ("%p\n", s);
}