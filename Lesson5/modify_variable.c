#include <stdio.h>

int myFunc(int);

int main(){
    int x = 2;

    myFunc(x);
    printf("The value of x is %d\n", x);

    return 0;
}

int myFunc(int x){
    x += 10;
    printf("The value of a is %d\n", x);
    return x;
}
