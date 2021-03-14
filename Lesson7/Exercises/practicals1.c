#include <stdio.h>
#define N 6

int search(int *arr, int size, int toSearch);

int main()
{
    int arr[] = {12, 23, 4, 56, 78, 0}, toSearch, searchIndex;

    printf("Enter element to search: ");
    scanf("%d", &toSearch);

    searchIndex = search(arr, N, toSearch);

    if (searchIndex == 0)
        printf("%d does not exist in array.\n", toSearch);
    else
        printf("%d exists in array.\n", toSearch);

    return 0;
}

int search(int *arr, int size, int toSearch)
{
    int *lastElem = arr + size - 1;

    for (; arr <= lastElem; arr++)
    {
        if (*arr == toSearch)
            return 1;
    }

    return 0;
}

/*
while (arr <= lastElem && *arr != toSearch)
{
    arr++;
}

if (arr == lastElem)
    return 0;
else
    return 1;
*/