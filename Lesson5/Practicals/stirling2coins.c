#include <stdio.h>

/* Global varible */
int reduced_amount;

const int amount_num = 6;
int amounts [] = {50,20,10,5,2,1};
int notes [amount_num] = {0};

int pound_to_coins(int);

// ---------------------------------------- MAIN
int main(){

    printf("Enter a pound amount: ");
    scanf("%d", &reduced_amount);
    printf("\n");

    pound_to_coins(reduced_amount);
    
    for (int i = 0; i<amount_num; i++)
        if (notes [i] != 0) printf("£%d notes: %d\n", amounts[i], notes[i]);
        
    return 0;
}

// -----------------------------------------

int pound_to_coins (int amount){

    for (int i = 0; i<amount_num; i++){
        notes[i] = amount / amounts[i];
        amount = amount % amounts[i];
    }
    return 0;
}
