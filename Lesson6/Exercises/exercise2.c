#include <stdio.h>

int main()
{
    int num = 10, *ptr;
    ptr = &num;

    printf("value of num: %d\n", num);
    printf("address of num: %p\n", &num);

    printf("value pointed by ptr: %d\n", *ptr);
    printf("address of ptr: %p\n", &ptr);
    printf("value stored in ptr: %p\n", ptr);

    return 0;
}