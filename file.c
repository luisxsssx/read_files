#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Check if filename argument is provided
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *ptr;
    char ch;

    // Opening file provided as command line argument in reading mode
    ptr = fopen(argv[1], "r");

    if (NULL == ptr)
    {
        printf("File %s can't be opened \n", argv[1]);
        return 1;
    }

    printf("Content of the file %s:\n", argv[1]);

    // Printing what is written in file character by character using loop
    do
    {
        ch = fgetc(ptr);
        if (ch != EOF)
        {
            printf("%c", ch);
        }
    } while (ch != EOF);

    // Closing the file
    fclose(ptr);
    return 0;
}