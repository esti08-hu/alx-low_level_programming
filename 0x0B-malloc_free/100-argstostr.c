#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
    int i, j, length, k ;
    char *result;
    length = 0;
    k = 0;
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < ac; i++)
    {
        length += strlen(av[i]) + 1;
    }

    result = malloc(length * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k++] = av[i][j];
        }
        result[k++] = '\n';
    }

    result[k] = '\0';

    return (result);
}
