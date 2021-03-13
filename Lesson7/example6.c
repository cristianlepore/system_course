#include <stdio.h>
#define ROWS 5
#define COLS 7

int main(){
    /* normally we will do something like this */
    int *p, a[ROWS][COLS], i;

    for(p = &a[0][0]; p < &a[ROWS][COLS]; p++)
        *p = 0;

    /* we could do */
    p = &a[i][0];
    /* same as */
    p = a[i];   /* points to the first element of row i */
    /* because it is: &a[i][0] ==> &(*(a[i] + 0)) ==> &*a[i] */

    /* we can rewrite this as */
    /* this clears row i of the multi dimentional array */
    for(p = a[i]; p < a[i] + COLS; p++)
        *p = 0;

    /* doing the same clearing the cols is not so easy */
    /* p is pointing to an integer array of length COLS and it is moving ahead of the number of cols */
    int (*p)[COLS];
    for(p = &a[0]; p < &a[ROWS]; p++)
        (*p)[i] = 0;
    /* rewritten as */
    for(p = a; p < a + ROWS; p++)
        (*p)[i] = 0;

    return 0;
}