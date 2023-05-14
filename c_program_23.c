#include <stdio.h>

void main()
{

    int i, j, arr[2][2];
    printf("Enter Elements in matrix of order 2: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of Matrix is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
