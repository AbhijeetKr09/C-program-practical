#include<stdio.h>
void main()
{
    int a,b, i;
    char ch;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    for(i=0; i<=4; i++)
    {
    printf("\nenter operator(+, -, *, /, %c): ", 37);
    scanf(" %c", &ch);
    if(ch== '+')
        printf("sum of two numbers is %d", a+b); 
    else if(ch== '-')
        printf("substraction of two numbers is %d", a-b);
    else if(ch== '*')
        printf("multiplication of two numbers is %d", a*b);
    else if(ch== '/')
        printf("division of two numbers is %d", a/b);
    else if(ch=='%')
        printf("Mod of two numbers is %d", a%b);
    }
}
