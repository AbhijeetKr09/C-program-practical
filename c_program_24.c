#include <stdio.h>
#include <string.h>

void main()
{
    char a[30], b[30];

    printf("Enter any string 1: \n");
    gets(a);
    printf("Enter any string 2: \n");
    gets(b);
    if (strcmp(a, b) == 0)
    {
        printf("Strings are equal. \n");
        printf("a = %s; b = %s", a, b);
    }
    else
    {
        printf("Strings are not equal. \n");
        printf("a = %s; b = %s \n", a, b);
        printf("copying string in a into b.\n");
        strcpy(b, a);
        printf("b = %s \n", b);
    }
        
    strcat(a, b);
    printf("Concatenated string: \n");
    puts(a);
    printf("Length of string: %d", strlen(a));


}
