#include <stdio.h>

void main()
{
    int arr_1[2][2], arr_2[2][2];
    int i, j, x = 1, size = 0;
    
    while(x<=4)
    {   if(x < 3)
        {
            printf("Enter the elements of arr_%d : \n", x);
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    if(size < 4)
                    {
                        scanf("%d", &arr_1[i][j]);
                        size += 1;
                    }
                    else
                        scanf("%d", &arr_2[i][j]);
                }
            }
        }
        else
        {
            if (x == 3)
                printf("The addition of arr_1 and arr_2 is : \n");
            else
                printf("The subtraction of arr_1 and arr_2 is : \n");
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {   
                    if (x == 3)
                        printf("%d ", arr_1[i][j] + arr_2[i][j]);
                    else
                        printf("%d ", arr_1[i][j] - arr_2[i][j]);
                }
                printf("\n");
            }
        }
        x++;
    }
}
