#include <stdio.h>

void main()
{
    int x, n, i, num, sum = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the ratio: ");
    scanf("%d", &x);
    printf("The geometric Progression is: ");
    for (i = 0; i < n; i++)
    {
        if(i < 1)
            printf("%d ", 1);
        else{
            printf("%d ", x*i);
        }
        sum = sum + x*i;
    }
    printf("\nThe sum of the Geometric Progression is: %d", sum);
}
