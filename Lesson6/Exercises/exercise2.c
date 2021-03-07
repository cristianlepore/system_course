#include <stdio.h>

int main()
{
    int num, *ptr;
    num = 10;
    ptr = &num;

    printf("value: \t %d\n", num);
    printf("address: %p\n", &num);

    printf("value pointed by ptr: %d\n", *ptr);
    printf("address of ptr: %p\n", &ptr);
    printf("value stored in ptr: %p\n", ptr);

    return 0;
}