#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;

    if (argc != 3)
    {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }

    if (source_fp = fopen(argv[1], "rb") == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if (source_fp = fopen(argv[2], "wb") == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    /* fgetc gets the next char of the file */
    while ((ch = fgetc(source_fp)) != EOF)
        fputc(ch, dest_fp);

    fclose(source_fp);
    fclose(dest_fp);

    return 0;
}