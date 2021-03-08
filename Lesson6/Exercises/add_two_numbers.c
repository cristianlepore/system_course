#include <stdio.h>

int main()
{
    /* declare two numbers */
    int num1, num2, sum, *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    /* read from keyboard */
    printf("Enter two values: ");
    scanf("%d %d", ptr1, ptr2);

    /* sum the two values */
    sum = *ptr1 + *ptr2;

    /* print result */
    printf("Sum is %d\n", sum);

    return 0;
}