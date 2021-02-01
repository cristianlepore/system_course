#include <stdio.h>	
#include <math.h>

int	main(){
    int num, num_copy, count = 0;
    
    printf("Enter an integer number: ");
    scanf("%d", &num);
    
    // Count how many digits in the number, e.g. 3 for 123,	
    // i.e.	divide (integer	division!) by 10 until you get 0
    num_copy =	num;
    while(num_copy){    
        num_copy = num_copy	/ 10;
        count++;
    }	
    
    num_copy = num;	    // save the original number again
    printf("Reverse: ");
    
    // Divide (integer division!) by 10^(count-­‐1) to get the	
    // count-­‐th left digit, i.e 123/100 = 1
    //
    // Get the reminder after the division, i.e. 123 % 100 = 23
    // Cycle
    int i=1;
    while(i<=count){
        printf("%d", num_copy % 10);
        num_copy = num_copy / 10;
        i++;
    }

    printf("\n");
}
