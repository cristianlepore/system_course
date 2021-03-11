#include <stdio.h>

int main(){
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    /* a - What is the value of *(p+3)? */
    printf("What is the value of *(p+3)?: %d\n", *(p+3) );

    /* b - What is the value of *(q-3)? */
    printf("What is the value of *(q-3)?: %d\n", *(q-3) );

    return 0;
}