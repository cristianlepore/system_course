#include <stdio.h>

#define N 4

int * pound_to_coins(int, int [], int);

int main(){
    int a[N], amount, *p;

    printf("Enter a pound amount: ");
    scanf("%d", &amount);

    p = pound_to_coins(N, a, amount);

    printf("\n");

    printf("£20 notes: %d\n", *p++);
    printf("£10 notes: %d\n", *p++);
    printf("£5 notes: %d\n", *p++);
    printf("£1 notes: %d\n", *p);

    return 0;
}

int * pound_to_coins(int len, int a[], int amount){
    int reduced_amount = amount;
    int array[] = {20, 10, 5, 1};

    for(int i=0; i<len; i++){
        a[i] = reduced_amount / array[i];
        reduced_amount = reduced_amount - (array[i] * a[i]);
    }

    return a;
}
