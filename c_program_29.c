#include <stdio.h>

void main()
{
    int i = 0, size = 0, n;
    char c, arr[30], arr2[30];

    FILE *rd, *rv;
    rd = fopen("file_operation/read_file.txt", "r");
    rv = fopen("file_operation/reverse_file.txt", "w");

    while ((c = getc(rd)) != EOF)
    {
        arr[size] = c;
        size += 1;
    }
    arr[size] = '\0';
    n = size;
    for(i = 0; i < size; i++)
    {
        arr2[i] = arr[n-1];
        n -= 1;
    }
    n = size - 1;
    for(i = 0; i < size; i++)
    {
        putc(arr2[i], rv);
    }
    printf("The string from read_file.txt has been reversed and saved in reverse_file.txt.");
    
    fclose(rd);
    fclose(rv);
} 
