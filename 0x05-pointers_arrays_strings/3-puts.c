#include "main.h"

/**
* _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
#include <stdio.h>

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
