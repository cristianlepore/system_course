#include <stdio.h>

int main()
{
    int i = 2, *p;
    p = &i;

    printf("%d\n", *p);

    return 0;
}