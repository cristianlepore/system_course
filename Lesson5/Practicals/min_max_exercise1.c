#include <stdio.h>

#define N 10

/* Function declaration */
int max(int[], int);
int min(int[], int);

int main()
{
    int b[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    printf("Largest: %d\n", max(b, N));
    printf("Smallest: %d\n", min(b, N));

    return 0;
}

int max(int a[], int size)
{
    int big = a[0];

    for (int i = 0; i < size; i++)
        if (big < a[i])
            big = a[i];

    return big;
}

int min(int a[], int size)
{
    int small = a[0];

    for (int i = 0; i < size; i++)
        if (small > a[i])
            small = a[i];

    return small;
}
