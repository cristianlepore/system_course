#include <stdio.h>
#include <string.h>

#define TRUE 1
#define SIZE (int)(sizeof(digit_seen)/sizeof(digit_seen[0])

int main(void){
    int digit_seen[10] = {0};
    int digit;
    int myNum;
    long n;
    
    do{
        printf("Enter a number: ");
        scanf("%ld", &n);
        myNum = n;
        if(myNum<=0)
            break;
        
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
        
        for(i=0; i<SIZE); i++) {
            printf(" %d ", digit_seen[i]);
        }
        printf("\n");
        
        memset(digit_seen, 0, sizeof(digit_seen));
        
    }while(TRUE);
    
    return 0;
}
