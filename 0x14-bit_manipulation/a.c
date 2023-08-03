#include <stdio.h>

int main(void)
{
    char *b;
    int num=1;
    int sum=0;
    b = "10101010";
    for (int i = 0; i < 8; i++)
    {
        if(b[i]!='0'){
            sum+=num;
        }
        num*=2;
        
    }
    printf("%d\n", sum);
}
