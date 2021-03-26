#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "myFile.txt"

int main()
{
    FILE *fp;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        /* exit(1) (usually) indicates unsuccessful termination. However, its usage is non-portable. For example, on OpenVMS, exit(1) actually indicates success. */
        /* Only EXIT_FAILURE is the standard value for returning unsuccessful termination */
        exit(EXIT_FAILURE);
    }

    fclose(fp);

    return 0;
}