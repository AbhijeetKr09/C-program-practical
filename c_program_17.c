#include <stdio.h>

void main()
{
    int arr[10], sum = 0, i;
    printf("Enter any 10 number: \n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of the 10 number is: %d", sum);
}
