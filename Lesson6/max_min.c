#include <stdio.h>

#define N 10

void max_min(int[], int, int *, int *);

int main()
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int arr[], int size, int *big, int *small)
{
    *big = *small = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (*big < arr[i])
            *big = arr[i];
        if (*small > arr[i])
            *small = arr[i];
    }
}
