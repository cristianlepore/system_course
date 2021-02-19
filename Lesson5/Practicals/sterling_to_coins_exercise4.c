#include <stdio.h>

#define N 4

/* Functions' declaration */
int twenty(int);
int ten(int amount);
int five();

int main(){
    int amount, twenties, tens, fives, ones;

    printf("Enter a pound amount: ");
    scanf("%d", &amount);

    printf("\n");
    
    twenties = twenty(amount);
    printf("£20 notes: %d\n", twenties );

    amount = amount - (20 * twenties);  /* Repeted pattern */
    tens = ten(amount);
    printf("£10 notes: %d\n", tens );

    amount = amount - (10 * tens);      /* Repeted pattern */
    fives = five(amount);
    printf("£5 notes: %d\n", fives );
    
    ones = amount - (5 * fives);        /* Repeted pattern */
    printf("£1 notes: %d\n", ones );

    return 0;
}

int twenty(int amount){
    return amount / 20;
}

int ten(int amount){
    return amount / 10;
}

int five(int amount){
    return amount / 5;
}
