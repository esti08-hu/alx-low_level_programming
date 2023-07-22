#include <stdio.h>
#include <stdarg.h>
int max(int num_args, ...);
int main(void)
{
    int max_num = max(4, 10, 12, 14, 16);
    printf("max_num:%d", max_num);
    return 0;
}

int max(int num_args, ...)
{
    va_list args;

    va_start(args, num_args);
    int max = 0;
    for (int i = 0; i < num_args; i++)
    {
        int x = va_arg(args, int);
        if (i == 0)
            max = x;
        else if (x > max)
            max = x;
    }
    va_end(args);
    return (max);
}
