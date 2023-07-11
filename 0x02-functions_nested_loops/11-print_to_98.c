#include "main.h"
void print_to_98(int n)
{
    int i;
    if (n <= 98)
    {

        for (i = n; i <= 98; i++)
        {
            if (n != 98)
                printf("%d, ", i);
            else
                printf("%d\n", i);
        }
    }

    else if (n > 98)
    {
        for (i = n; i >= 98; i--)
        {
           if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
        }
    }
}
