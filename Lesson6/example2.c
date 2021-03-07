#include <stdio.h>

int main()
{
    int i, *p;

    p = &i;
    scanf("%d", p);

    scanf("%d", &p); /* This is an error */

    return 0;
}