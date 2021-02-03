#include <stdio.h>

int main(){
    int num1, num2, den1, den2;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &den1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &den2);

    int num = (num1 * den2) + (num2 * den1);
    int denom = den1 * den2;

    printf("The sum is %d/%d\n", num, denom);   

    return 0;
}
