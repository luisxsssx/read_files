#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *ptr;
    char ch;

    ptr = fopen(argv[1], "r");

    if (NULL == ptr)
    {
        printf("File %s can't be opened \n", argv[1]);
        return 1;
    }

    printf("Content of the file %s:\n", argv[1]);

    int lineNumber = 1;
    char line[1024];
    while (fgets(line, 1024, ptr) != NULL)
    {
        printf("%4d | %s", lineNumber, line);
        lineNumber++;
    }

    fclose(ptr);
    return 0;
}
