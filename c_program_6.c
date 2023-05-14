#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b)
        printf("%d < %d \n", a, b);
    if(a == b)
        printf("%d == %d \n", a, b);
    if(a > c)
        printf("%d > %d\n", a, c);
    if(a != b)
        printf("%d != %d \n", a, b);
    if(a >= c)
        printf("%d >= %d\n", a, b);
    if(a <= b)
        printf("%d <= %d \n", a, b);
}
