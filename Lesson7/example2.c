#include <stdio.h>

int main(){
    /* operation with pointers */
    int a[] = {0, 1, 2, 3}, j = 2;
    int *p;
    p = &a[0];

    /* adding an integer to a pointer */
    /* the compiler understand that p is a pointer */
    p += j;     /* This will point two positions after p */
    /* it is the same as */
    a[2];

    /* putting together the things done so far */
    /* at this point I can also write */
    int sum = 0;
    for(p = &a[0]; p < &a[N]; p++)
        sum += *p;
}