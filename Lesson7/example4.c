#include <stdio.h>
#define N 10

int main(){
    int a[N], sum, *p;
    
    /* I can use the array a as a pointer */
    *a = 6;
    *(a + 1) = 10; /* stores 10 in a[1] */

    /* So I can use it in a loop */
    for(p = a; p < a+N; p++)
        sum += *p;

    /* This is wrong */
    /* We cannot use a again, we need to redefine */   
    while(*a != 0)
        a++;
}