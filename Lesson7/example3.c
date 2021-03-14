#include <stdio.h>
#define N 10

int main()
{
    int a[N] = {0}, *p;

    /* I can use the array a as a pointer */
    *a = 6;
    *(a + 2) = 10; /* stores 10 in a[2] */

    return 0;
}