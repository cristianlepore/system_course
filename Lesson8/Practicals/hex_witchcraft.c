#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int el, pos = 0, i = 0;
    char ch;
    FILE *f = fopen("test2.txt", "rb");
    FILE *fp = fopen("test2.txt", "r");

    if (f == NULL)
    {
        printf(" File does not exist or can not be opened.");
        exit(EXIT_FAILURE);
    }

    printf("Offset \t\t Bytes \t\t\t Characters");
    printf("\n------  -----------------------------    ----------");

    ch = fgetc(fp);
    while ((el = fgetc(f)) != EOF)
    {
        // Print Bytes
        if (i % 10 != 0)
        {
            printf("%.2x ", (unsigned)el);
            if (i % 10 == 9)
            {
                printf("\t ");
                // Print Characters
                for (int j = 0; j < 10; j++, ch = fgetc(fp))
                {
                    if (ch == '\n')
                        continue;
                    printf("%c", ch);
                }
            }
        }
        // Print offset
        else
        {
            printf("\n");
            printf("%d\t", pos);
            printf("%.2x ", (unsigned)el);
        }
        pos++, i++;
    }

    // Complete line feed
    while ((pos % 10) != 0)
    {
        printf("   ");
        pos++;
    }
    printf("\t");

    // Print the last line
    printf(" ");
    do
    {
        printf("%c", ch);
    } while ((ch = fgetc(fp)) != EOF);
    printf("\n\n");

    fclose(f);
    fclose(fp);

    return 0;
}