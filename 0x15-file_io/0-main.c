#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int md, char **ro)
{
    ssize_t n;

    if (md != 2)
    {
        dprintf(2, "Usage: %s filename\n", ro[0]);
        exit(1);
    }
    n = read_textfile(ro[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(ro[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
