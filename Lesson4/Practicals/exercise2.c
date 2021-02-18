#include <stdio.h>

int main(void){
    int digit_seen[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }
    
    for(int i=0; i<(sizeof(digit_seen)/sizeof(digit_seen[0])); i++) {
        if(digit_seen[i] > 1)
            printf("The digit %d is repeated %d times\n", i, digit_seen[i]);
    }
    
    return 0;
}