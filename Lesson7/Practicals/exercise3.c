#include <stdio.h>
#define N 10

/* function declaration */
void max_min(int[], int *, int *);

/* Declare functions here. */
int main(void)
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, &big, &small); /* Function to implement. */

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

/* Function definition */
void max_min(int arr[], int *p, int *q)
{
    int *i;
    *p = *q = arr[0];

    for (i = &arr[0]; i < &arr[N]; i++)
        if (*i > *p)
            *p = *i;
        else if (*i < *q)
            *q = *i;
}