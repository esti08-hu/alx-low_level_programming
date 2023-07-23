#include <stdio.h>
#include <stdarg.h>

/**
* main - check the code
* sum_them_all - returns the sum of all its parameters.
*@n: number of arguments passed to the function
*
* Return: Always 0.
*/ 

int sum_them_all(const unsigned int n, ...)
{
int sum = 0, i, x;
va_list list;
va_start(list, n);
for (i = 0; i < n; ++i)
{
x = va_arg(list, int);
sum+=x;
}
va_end(list);
return (sum);
}
