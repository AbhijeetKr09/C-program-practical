#include <stdio.h>

void main()
{
    
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a < b && a > 0)
        printf("a is less than b and greater than zero.\n");
    else if(a > b && b > 0)
        printf("a is greater than b and b is greater than zero.\n");
    else if(a == 0 || b == 0)
        printf("either a or b is zero. \n");

}
