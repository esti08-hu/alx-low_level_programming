#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of the program.
 *@ac: argument count.
 *@av: pointer to array of size ac.
 *Return: NULL if ac == 0 or av == null, Pointer to new string.
 *NULL on fail.
 */
char *argstostr(int ac, const char **av)
{
    size_t i, j, k, size;
    char *arg;

    size = 0;

    for (i = 0; i < (size_t)ac; i++)
    {
        size += strlen(av[i]) + 1; /* Add length of string plus newline */
    }

    arg = calloc(size, sizeof(*arg));
    if (arg == NULL)
    {
        return (NULL);
    }

    k = 0;
    for (i = 0; i < (size_t)ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            arg[k++] = av[i][j];
        }
        arg[k++] = '\n';
    }

    arg[k] = '\0';

    return (arg);
}
