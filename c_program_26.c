#include <stdio.h>

void main()
{
    int a, b;
    void swap(int x, int y);
    void swap_by_ref(int *m, int *n);
    printf("Enter any two number: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    swap_by_ref(&a, &b);
    printf("After swapping by ref: a = %d, b = %d\n", a, b);
}
void swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("After swapping: a = %d, b = %d\n", x, y);
}
void swap_by_ref(int *m, int *n)
{
    int t;
    t = *m;
    *m = *n;
    *n = t;
}

