#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    char ch;
    do
    {
        ch = fgetc(fp);
        printf("%c", ch);

    } while (ch != EOF);

    fclose(fp);

    return 0;
}