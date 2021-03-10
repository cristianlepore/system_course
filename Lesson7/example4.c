#include <stdio.h>
#define N 10

int main(){
    int a[N], sum, *p;
    
    *a = 6;
    *(a + 1) = 10; /* stores 10 in a[1] */

    for(p = a; p < a+N; p++)
        sum += *p;

    /* This is wrong */
    /* We cannot use a again, we need to redefine */   
    while(*a != 0)
        a++;
}