#include <stdio.h>

int main(){
    int amount, twenties, tens, fives, ones, reduced_amount;

    printf("Enter a pound amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    reduced_amount = amount - (20 * twenties);

    tens = reduced_amount / 10;
    reduced_amount = reduced_amount - (10 * tens);

    fives = reduced_amount / 5;
    ones = reduced_amount - (5 * fives);

    printf("\n"); 

    printf("£20 notes: %d\n", twenties);
    printf("£10 notes: %d\n", tens);
    printf("£5 notes: %d\n", fives);
    printf("£1 notes: %d\n", ones);

    return 0;
}
