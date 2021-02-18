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
    
    int i=0;
    printf("Digit:\t\t");
    do{
        printf(" %d ", i);
    }while(++i<10);
    printf("\nOccurences:\t");
    
    for(i=0; i<(sizeof(digit_seen)/sizeof(digit_seen[0])); i++) {
        printf(" %d ", digit_seen[i]);
    }
    
    return 0;
}
