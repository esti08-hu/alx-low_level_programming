#include <stdarg.h>
#include <stdio.h>
int max(int num_arg, ...)
{
    va_list list;
    va_start(list, num_arg);
    int max =0, i;
    for (i = 0; i < num_arg; i++)
    {
        int y=va_arg(list, int);
        if (max < y)
        {
            max=y;
        }
    }
    
    return (max);
    va_end(list);
}

int main(void)
{
    int x=max(2, 10,4);
    printf("The maximum number is: %d", x);
    return (0);
}
