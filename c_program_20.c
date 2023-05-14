#include <stdio.h>

void main()
{
    int i, num, num_index, arr[10] = {1, 4, 5, 3, 7, 14, 34, 21, 2, 9};
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    num_index = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            num_index = i;
            break;
        }
    }
    if (num_index == 0)
        printf("The number is not in the array.");
    else
        printf("The number is in the array at index %d.", num_index);
}
