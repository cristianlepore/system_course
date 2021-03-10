#include <stdio.h>

int main(){
    /* pointers can point to an element of varible length */
    int a[], *p;
    p = a;  /* point to an elment array */

    /* in case of multiple arrays */
    int a[m][n], (*p)[n]; /* p points to an object of length n */
    p = a;

    return 0;
}