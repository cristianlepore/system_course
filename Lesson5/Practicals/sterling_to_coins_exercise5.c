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
    int notes = 20, i = 0;

    do {
        a[i] = amount / notes;
        amount = amount - (notes * a[i]);
        notes /= 2;
        i++;
    }while(notes >=5);

    /* ones */
    a[i] = amount - (notes * a[i]);

    return a;
}
