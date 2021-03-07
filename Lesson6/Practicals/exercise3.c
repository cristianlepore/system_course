#include <stdio.h>

#define N 5

int main()
{
    int b[N], I, sum, avg;

    printf("Enter %d numbers: ", N);
    for (I = 0; I < N; i++)
        scanf("%d", &b[i]);

    sum_average(b, N, &sum, &avg);

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);

    return 0;
}