#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_Strings(const char *separator, const unsigned int n, ...)
{
int i;
va_list list;
va_start(list, n);
if (separator == NULL)
{
return;
}
for (i = 0; i < n; i++)
{
const char *args = va_arg(list, const char *);
if (args == NULL)
{
printf("nil");
}
else
printf("%s", args);
if (i < n - 1)
{
printf("%s", separator);
}
}
 printf("\n");
va_end(list);
}
