#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);               /* Not ‘1’, but lower-case L!*/
    
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])      /* This conditional can be */
            break;                  /* re-written without the  */ 
        digit_seen[digit] = true;   /* How might this be done? */
        n /= 10;
    }
    
    if (n > 0)
        printf("There are repeated digit\n");
    else
        printf("No repeated digit\n");
    
    return 0;
}
