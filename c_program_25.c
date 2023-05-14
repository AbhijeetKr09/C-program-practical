#include <stdio.h>

void main()
{
    int a, b;
    void sum(int x, int y);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
}
void sum(int x, int y)
{
    int z;
    z = x + y;
    printf("The sum of %d and %d is %d.\n", x, y, z);
}
