#include <stdio.h>

int main(){
    int i;
    int *p;

    i = 42;
    p = &i;

    printf("%d \n", i);
    *p = 0;
    printf("%d \n", i);

    i = 5;
    printf("%d \n", *p);

    return 0;
}