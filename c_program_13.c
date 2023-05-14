#include <stdio.h>

void main()
{
    int i, j;
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            if(j == 3 || j == 5)
                continue;
            printf("%d x %d = %d \t", j, i, j*i);
        }
        printf("\n");
    }
}
