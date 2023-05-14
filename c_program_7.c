#include <stdio.h>

void main()
{
    int d, b, a, c;
    printf("Quadratic eq of the form: ax^2 + bx + c \n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Quadratic equation is: %dx^2 + (%d)x + (%d) \n", a,b,c);
    d = b * b - 4 * a * c;
    if(d < 0)
    {
        printf("No real roots");
    }
    else if(d == 0)
    {   
        printf("Two equal roots: \n");
        printf("roots are: %d \n", (-b / (2 * a)));
    }
    else
    {
        printf("Two real roots: \n");
        printf("x1: %d \n", ((-b + d)/ (2 * a)));
        printf("x2: %d \n", ((-b - d)/ (2 * a)));
    }
}
