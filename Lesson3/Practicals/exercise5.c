#include <stdio.h>

void add(){
    int num1, num2, den1, den2, denom, num;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &den1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &den2);

    if( (den1 != 0) && (den2 != 0) ){
        if(den1 != den2) {
            denom = den1 * den2;
            num = (num1 * den2) + (num2 * den1);
        } else {
            denom = den1;
            num = num1 + num2;
        }
        
        printf("The sum (fraction) is %d/%d\n", num, denom);  
        printf("The sum (numeric) is %.3f\n", (float) num/denom); 
    } else {
        printf("Error -- division by zero!\n");   
    }
}

void mult(){
    int num1, num2, den1, den2, denom, num;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &den1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &den2);

    num = num1 * num2;
    denom = den1 * den2;
    printf("The multiplication is %d/%d\n", num, denom);
    printf("The multiplication (numeric) is %.3f\n", (float) num/denom); 
}

int main(){
    char ch;

    printf("Enter a letter:");
    scanf("%c", &ch);

    if(ch == 'a')
        add();
    else if(ch == 'm')
        mult();

    return 0;
}
