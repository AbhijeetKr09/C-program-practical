#include <stdio.h>

void main()
{
    
    float r, pi = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("The area of circle in floating value is: %.4f\n", pi * r * r);
    printf("The area of circle in exponential expression is: %e\n", pi * r * r);

}
