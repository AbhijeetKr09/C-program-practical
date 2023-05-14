#include <stdio.h>

void main()
{   
    
    int i = 10;
    char c = 'a';
    float f = 3.14;
    double d = 3.14;
    printf("i is integer: %d and int is %2d bytes \n",i, sizeof(int));
    printf("\n");
    printf("f is float: %d and float is %2d bytes \n",f, sizeof(float));
    printf("\n");
    printf("d is double: %d and double is %2d bytes \n",d, sizeof(double));
    printf("\n");
    printf("c is char: %c and char is %2d bytes \n",c, sizeof(char));

}
