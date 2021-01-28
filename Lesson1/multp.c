#include <stdio.h>

int main() {
	printf("This is my multiplication table: \n\n");

	for (int i = 1; i <= 10; i++) {
		for (int h = 1; h <= 10;h++) {
			printf("\t %d ", i*h);
		}
		puts("\n");
	}

	return 0;
}