#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int
main(ac, av)
        int ac;
        char **av;
{
    char *s = "test.cpp";
    unlink(s);
}