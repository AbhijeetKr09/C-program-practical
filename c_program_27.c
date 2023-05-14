#include <stdio.h>

void main()
{
    int factorial(int x);
    int gcd(int a, int b);
    void non_rec_fact(int x);
    void non_rec_gcd(int a, int b);
    int n1, n2, n, f;;
    printf("Enter the number 1 to find gcd: ");
    scanf("%d", &n1);
    printf("Enter the number 2 to find gcd: ");
    scanf("%d", &n2);
    // printf("The Greatest Common divisor of the number %d and %d is: %d\n",n1, n2, gcd(n1, n2));
    non_rec_gcd(n1, n2);
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    // This is for recursive function
    // f = factorial(n);
    // printf("The factorial of %d is %d.\n", n, f);
    //this is for non recursive
    non_rec_fact(n);
}
int factorial(int x)
{
    if (x == 0)
    return 1;
    else
    return x * factorial(x - 1);
}
int gcd(int a, int b)
{
    if (b == 0)
    return a;
    else
    return gcd(b, a % b);
}
void non_rec_fact(int x)
{
    int i, f = 1;
    for (i = 1; i <= x;i++)
    {
        f = f * i;
    }
    printf("The factorial of %d is %d.\n", x, f);
}
void non_rec_gcd(int a, int b)
{
    int c, d, x;
    if (a > b)
    {
        c = a;
        d = b;
    }
    else
    {
        c = b;
        d = a;
    }
    while (d != 0)
    {
        x = d;
        d = c % d;
        c = x;
    }
    printf("The gcd of %d and %d is %d.\n", a, b, c);
}
