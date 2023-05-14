#include <stdio.h>

void main()
{
    int size;
    printf("Enter no. of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}
