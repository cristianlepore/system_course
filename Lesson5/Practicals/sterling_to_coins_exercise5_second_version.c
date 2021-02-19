#include <stdio.h>

/* Global varible */
int reduced_amount;

int pound_to_coins(int, int);

int main(){

    printf("Enter a pound amount: ");
    scanf("%d", &reduced_amount);

    printf("\n");

    printf("£20 notes: %d\n", pound_to_coins(20, reduced_amount) );
    printf("£10 notes: %d\n", pound_to_coins(10, reduced_amount) );
    printf("£5 notes: %d\n", pound_to_coins(5, reduced_amount) );
    printf("£1 notes: %d\n", pound_to_coins(1, reduced_amount) );

    return 0;
}

int pound_to_coins(int notes, int amount){

    int result = amount / notes;
    reduced_amount = amount - (notes * result);

    return result;
}
