#include <stdio.h>

void main()
{
    int num, sum = 0, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("The sum of the digits of %d is %d.\n", num, sum);
}
