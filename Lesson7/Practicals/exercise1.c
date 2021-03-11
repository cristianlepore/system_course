#include <stdio.h>

int main(){
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    /* a - What is the value of *(p+3)? */
    printf("What is the value of *(p+3)?: %d\n", *(p+3) );

    /* b - What is the value of *(q-3)? */
    printf("What is the value of *(q-3)?: %d\n", *(q-3) );

    /* What is the value of q-p? */
    printf("What is the value of q-p?: %d\n", q-p );

    /* Is the condition p<qtrue or false? */
    printf("Is the condition p<q true or false: %d\n", q<p );

    /* Is the condition *p<*q true or false? */
    printf("Is the condition *p<*q true or false: %d\n", *p<*q );

    return 0;
}