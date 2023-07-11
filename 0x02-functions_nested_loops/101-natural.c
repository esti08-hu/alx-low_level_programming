#include <stdio.h>

int multiples()
{
    int i, j;
    int sum = 0;
    for (i = 1; i <= 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return sum;
}
int main()
{
    multiples();
}