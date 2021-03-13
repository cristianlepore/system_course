#include <stdio.h>
#define N 5

int main(){
    int a[N], *p, num;
    /* Last week we had */
    p = &num;

    /* now we have */
    p = &a[0];
    /* I want you to note that the next is the same */
    /* same as */
    p = &a;
}
