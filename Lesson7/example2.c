#include <stdio.h>
#define N 4

int main()
{
    /* operation with pointers */
    int a[] = {30, 10, 5, 7}, j = 2, *p;
    p = &a[0];

    /* adding an integer to a pointer */
    /* the compiler understand that p is a pointer */
    p += j; /* This will point two positions after p */
    /* it is the same as */
    a[2];

    /* putting together the things done so far */
    /* at this point I can also write */
    int sum = 0;
    for (p = &a[0]; p < &a[N]; p++)
        sum += *p;
}
