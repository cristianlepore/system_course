#include <stdio.h>

int main(){
    int num1, num2, den1, den2, denom, num;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &den1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &den2);

    num = num1 * num2;
    denom = den1 * den2;
    printf("The multiplication is %d/%d\n", num, denom);   

    return 0;
}
