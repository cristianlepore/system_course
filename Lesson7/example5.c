#include <stdio.h>
#define N 10
#define ROWS 5
#define COLS 10

int main()
{
    /* pointers can point to an element of varible length */
    int a[N], *p;
    p = a; /* point to an elment array */

    /* in case of multiple arrays */
    int a[ROWS][COLS], (*p)[COLS]; /* p points to an object of length COLS */
    p = a[2];

    return 0;
}