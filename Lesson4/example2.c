#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
   srand(time(NULL));
   printf("%d\n", rand());
   srand(1);
   printf("%d", rand());
   
   return 0;
}