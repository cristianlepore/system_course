#include <stdio.h>

int main()
{
    int *p, i, *q;
    i = 5;
    p = &i;

    q = p;
    printf("%d %d %d\n", *p, *q, i); /* p and q point to i which is 5 */

    *p = 3;
    printf("%d %d %d\n", *p, *q, i);

    return 0;
}