#include <stdio.h>
#define N 5

int main()
{
    double a[N], *high = &a[4], *middle, *low = &a[0];

    middle = (low + high) / 2;
    /* The expression low + high is not legal because WE CANNOT ADD TWO POINTERS together. To get the middle element we can use subtraction: ((high - low) / 2) + low */

    return 0;
}