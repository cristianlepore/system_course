#include <stdio.h>

int main(){
	for (int i = 1; i <= 10; i++) {
		int sqr = i * i;
		printf("The square of %d is: %d \n", i, sqr);
	}

	return 0;
}