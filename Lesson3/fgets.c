#include <stdio.h>

int main () {
   char str[50];
   fgets(str, sizeof(str), stdin);

   printf("You entered: %s", str);

   return(0);
}
