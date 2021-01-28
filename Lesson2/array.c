#include <stdio.h>

int max(int a[], int n){
    int result = 0;
    int i;
    for(i=0; i<n; i++){
        if(a[i] > result)
            result = a[i];
    }

    return result;
}

int main(){
    int a[] = {1, 6, 9, 3};
    int m = max(a, 4);w

    printf("The max value is: %d", m);

    return 0;
}