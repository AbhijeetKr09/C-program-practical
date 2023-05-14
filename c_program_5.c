#include <stdio.h>

void main()
{
    
    int p, r, t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the number of years: ");
    scanf("%d", &t);
    double n = p * r * t / 100;
    printf("The simple interest is: %.2f", n);

}
