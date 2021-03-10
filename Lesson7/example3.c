#include <stdio.h>
#define N 10

int main(){
    int a[N], *p, *q, i;
    /* I can also subtract two pointers */
    p = &a[0];
    q = &a[5];

    i = q - p; /* This is 5 */

    /* and I can compare operators */
    p <= q  /* the result is 1 or 0 */
}