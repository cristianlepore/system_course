#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    /*
    printf("Address of num = %p\n", &num);
    printf("Address of num = %d\n", num);
    printf("Address of ptr = %p\n", &ptr);
    printf("Value of ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    */
    return 0;
}