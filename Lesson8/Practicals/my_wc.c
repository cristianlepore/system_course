#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000
#define BUFFER_SIZE 10000

void write_file(char *);
int count_chars(char *);
int count_words(char *);
int count_lines(char *);
void count_words_line_by_line(char *);

int main(int argc, char *argv[])
{
    /* write on the file */
    write_file(argv[1]);

    /* Count the number of characters in a text file */
    printf("The file has %d characters.\n", count_chars(argv[1]));

    /* count the number of words in the file */
    printf("The file has %d words.\n", count_words(argv[1]));
    /* second possible solution */
    count_words_line_by_line(argv[1]);

    /* Count the number of lines in the file */
    printf("The file has %d lines.\n", count_lines(argv[1]));

    return 0;
}

/* Create a file and write into it */
void write_file(char *file_name)
{
    char str[N];
    FILE *fp;

    fp = fopen(file_name, "w");

    if (fp == NULL)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }

    printf("Enter your statement:\n");
    gets(str);

    /* fgetc gets the next char of the file */
    fprintf(fp, str);
    fclose(fp);
}

/* Count the number of chars in a text file */
int count_chars(char *file_name)
{
    char ch;
    int count = 0;
    FILE *fp;

    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf(" File does not exist or can not be opened.");
        exit(EXIT_FAILURE);
    }
    else
    {
        ch = fgetc(fp);
        while (ch != EOF)
        {
            count++;
            ch = fgetc(fp);
        }
    }

    fclose(fp);
    return count;
}

int count_words(char *file_name)
{
    char ch;
    int count = 0;
    FILE *fp;

    fp = fopen(file_name, "r");

    if (fp == NULL)
    {
        printf(" File does not exist or can not be opened.");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ')
            count++;
    }

    fclose(fp);
    return count += 1;
}

void count_words_line_by_line(char *file_name)
{
    char buffer[BUFFER_SIZE];
    int totalRead = 0;
    FILE *fp;

    fp = fopen("/home/clepore/Documents/CSCU9V4/system_course/Lesson8/Practicals/test2.txt", "r");

    if (fp == NULL)
    {
        printf(" File does not exist or can not be opened.");
        exit(EXIT_FAILURE);
    }

    /* Repeat this until read line is not NULL */
    while (fgets(buffer, BUFFER_SIZE, fp) != NULL)
    {
        totalRead = strlen(buffer);

        buffer[totalRead - 1] = buffer[totalRead - 1] == '\n'
                                    ? '\0'
                                    : buffer[totalRead - 1];

        printf("%s\n", buffer);
    }

    fclose(fp);
}

int count_lines(char *file_name)
{
    char ch;
    int count = 1;
    FILE *fp;

    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf(" File does not exist or can not be opened.");
        exit(EXIT_FAILURE);
    }

    ch = fgetc(fp);
    for (ch = getc(fp); ch != EOF; ch = getc(fp))
        if (ch == '\n')
            count += 1;

    return count;
}