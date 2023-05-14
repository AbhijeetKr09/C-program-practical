#include <stdio.h>

void main()
{
    int i, j = 1, n = 1;
    for(i=1; i < 5; i++)
    {
        printf("\n");
        while(j<=n)
        {
            printf("%d ", j);
            j += 1;
        }
        j = 1;
        printf("  ");
        while(j <= n)
        {
            printf("* ");
            j += 1;
        }
        n+=1;
        j = 1;
    }
}
