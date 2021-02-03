#include <stdio.h>
#include <string.h>

int size(char *number){
    int count = 0;
    for(int i=0; number[i]!='\0'; i++)
        count++;
    return count;
}

int main(){
    char number[11];
    int value, sum, modulo, result, even = 0, odd = 0;

    printf("Input an 11 digit number: ");
    scanf("%11s", number);

    if(size(number) == 11) {
        for(int i=0; i<strlen(number); i++){
            value = number[i] - '0';
            printf("%d ", value);
            if(i % 2 == 0)
                even += value;
            else
                odd += value;
        }

        even *= 3;
        sum = even + odd;
        modulo = sum % 10;
        result = 10 - modulo;
    }

    printf("\nThe check digit value: %d \n", result);

    return 0;
}
