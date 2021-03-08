#include <stdio.h>

/* definition of swap func */
void swap(int *, int *);

int main()
{
    /* declare two numbers */
    int num1, num2, *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    /* read from keyboard */
    printf("Enter two values: ");
    scanf("%d %d", ptr1, ptr2);

    /* call the swap function */
    swap(ptr1, ptr2);

    /* print the result on screen */
    printf("ptr1 is: %d\n", *ptr1);
    printf("ptr2 is: %d\n", *ptr2);

    return 0;
}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}