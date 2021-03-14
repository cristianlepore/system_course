#include <stdio.h>
#define N 5

int main()
{
    int a[N] = {0}, *p, num = 5;
    /* Last week we had */
    p = &num;

    printf("num: %d\n", *p);

    /* now we have */
    p = &a[0];
    printf("a[0]: %d\n", *p);

    /* I want you to note that the next is the same */
    /* same as because the array is treated as a pointer */
    p = a;

    return 0;
}