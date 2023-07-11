#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
    int len = 0, i, len1, j = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    len1 = len - 1;
    char s1[len1];
    for (i = len1; i >= 0; i--)
    {
        s1[j] = s[i];
        j++;
    }
    return (s1);
}
