#include <stdio.h>
#define N 10

int main()
{
    int a[N], *p, *q, i;
    /* I can also subtract two pointers */
    p = &a[0];
    q = &a[3];

    i = q - p; /* This is 5 */
    printf("%d\n", i);

    /* and I can compare operators */
    p <= q; /* the result is 1 or 0 for TRUE or FALSE */

    return 0;
}
