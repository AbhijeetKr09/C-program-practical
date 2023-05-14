#include <stdio.h>

void main()
{
    int num, reverse_num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse_num = 0;
    n = num;
    while (num > 0)
    {
        reverse_num = reverse_num * 10 + num % 10;
        num /= 10;
    }
    printf("The reverse of %d is %d", n, reverse_num);
    if(n == reverse_num)
    {
        printf("\n The number is palindrome.");
    } else {
        printf("\n The number is not palindrome.");
    }
    
}
