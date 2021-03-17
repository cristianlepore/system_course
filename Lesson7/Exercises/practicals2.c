#include <stdio.h>
#define ROWS 3
#define COLS 7

int main()
{
    int *p, a[ROWS][COLS] = {{}}, j = 0, i = 1;

    for (p = a[i]; p < a[i] + COLS; p++)
        *p = 1;

    for (p = a[0]; j < ROWS; j++)
    {
        for (p = a[j]; p < a[j] + COLS; p++)
            printf(" %d ", *p);
        printf("\n");
    }

    return 0;
}