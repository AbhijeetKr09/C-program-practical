#include <stdio.h>

void main()
{
    int a, b;
    char operator;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    switch (operator)
    {
        case '+':
        printf("Sum of %d and %d is %d", a, b, a + b);
        break;
        case '-':
        printf("Difference of %d and %d is %d", a, b, a - b);
        break;
        case '*':
        printf("Product of %d and %d is %d", a, b, a * b);
        break;
        case '/':
        printf("Quotient of %d and %d is %d", a, b, a / b);
        break;
        default:
        printf("Invalid operator");
        break;
    }
}
