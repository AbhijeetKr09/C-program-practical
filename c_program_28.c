#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data, *copy_file;
    char ch;

    data = fopen("file_operation/data.txt", "r");
    copy_file = fopen("file_operation/copy_file.txt", "w");

    while ((ch = fgetc(data)) != EOF)
        fputc(ch, copy_file);

    printf("File copied successfully.\n");

    fclose(data);
    fclose(copy_file);

    return 0;
}
