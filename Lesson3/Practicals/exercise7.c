/*
* Consider the input 10.3 5.6 100 (with one or more spaces in between numbers). What would be the value of x,y,i after the execution of scanf() in the code fragment below?
*/
#include <stdio.h>

int main(){
    float x,y;
    int i;
    
    scanf("%f%d%f", &x, &i, &y);

    printf("%.3f\n%d\n%.3f\n", x, i, y);    /* 10.300000 5 0.600000 */

    return 0;
}