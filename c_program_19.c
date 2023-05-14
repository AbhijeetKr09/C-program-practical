#include <stdio.h>

void main()
{
    int size, negative = 0, positive = 0, zero = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative += 1;
        }
        else if (arr[i] > 0)
        {
            positive += 1;
        }
        else {
            zero += 1;
        }
    }
    printf("Positive numbers: %d \n", positive);
    printf("Negative numbers: %d \n", negative);
    printf("Zero numbers: %d \n", zero);
}
