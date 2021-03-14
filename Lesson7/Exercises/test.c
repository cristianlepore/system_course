#include <stdio.h>
#define ROWS 3
#define COLS 7

int main()
{
    int a[ROWS][COLS], i, *p;
    p = &a[i][0];
    p = a[i];

    int(*q)[COLS];

    return 0;
}