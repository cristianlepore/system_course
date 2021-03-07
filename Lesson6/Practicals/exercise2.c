#include <stdio.h>

int main()
{
    int i = 5, *p, *q;
    p = &i;

    *q = 3;
    printf("%d %d\n", *p, *q);

    return 0;
}