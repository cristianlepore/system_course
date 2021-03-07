#include <stdio.h>

#define N 5

void sum_average(int[], int, int *, int *);

int main()
{
    int b[N] = {0}, i, sum, avg;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    sum_average(b, N, &sum, &avg);

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);

    return 0;
}

void sum_average(int arr[], int size, int *p_sum, int *p_avg)
{
    for (int i = 0; i < size; i++)
    {
        *p_sum += arr[i];
    }

    *p_avg = *p_sum / 5;
}
