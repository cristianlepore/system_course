#include <stdio.h>

int main(){
    int num1, num2, den1, den2, denom, num;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &den1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &den2);

    if( (den1 != 0) && (den2 != 0) ){
        if(den1 != den2) {
            denom = den1 * den2;
            num = (num1 * den2) + (num2 * den1);
        } else {
            denom = den1;
            num = num1 + num2;
        }
        
        printf("The sum is %d/%d\n", num, denom);   
    } else {
        printf("Error -- division by zero!\n");   
    }

    return 0;
}
