#include <stdio.h>
#define ROWS 5
#define COLS 7

int main()
{
    /* normally we will do something like this */
    int *p, a[ROWS][COLS] = {{}}, i = 2;

    /* We can also initiate the array in this way */
    for (p = &a[0][0]; p < &a[ROWS - 1][COLS]; p++)
        *p = 0;

    /* we could do */
    p = &a[i][0];
    /* same as */
    p = a[i]; /* points to the first element of row i */
    /* because it is: &a[i][0] ==> &(*(a[i] + 0)) ==> &*a[i] */

    /* we can rewrite this as */
    /* this clears row i of the multi dimentional array */
    for (p = a[i]; p < a[i] + COLS; p++)
        *p = 3;

    /* doing the same clearing the cols is not so easy */
    /* p is pointing to an integer array of length COLS and it is moving ahead of the number of cols */
    int(*q)[COLS];
    /* rewritten as */
    for (q = a; q < a + ROWS; q++)
        (*q)[i] = 6;

    for (p = a[0]; p < a[ROWS - 1] + COLS; p++)
        printf(" %d ", *p);

    return 0;
}