#include <stdio.h>

int main(){
    int a[] = {0, 1, 2, 3};
    int *p;
    p = &a[0];

    p += 2;
    printf("%d\n", *p);
}