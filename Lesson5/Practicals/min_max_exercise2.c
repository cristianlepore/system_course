#include <stdio.h>

/* Function declaration */
int max( int[], int );
int min( int[], int );

int main(){
    int len, i;

    printf("Define the array length: ");
    scanf("%d", &len);

    int b[len];

    printf("Enter %d numbers: ", len);
    for(i=0; i<len; i++)
        scanf("%d", &b[i]);

    printf("Largest: %d\n", max(b, len) );
    printf("Smallest: %d\n", min(b, len) );

    return 0;
}

int max(int a[], int size){
    int big = a[0];

    for(int i=0; i<size; i++)
        if(big < a[i])
            big = a[i];    

    return big;
}

int min(int a[], int size){
    int small = a[0];

    for(int i=0; i<size; i++)
        if(small > a[i])
            small = a[i];

    return small;
}
