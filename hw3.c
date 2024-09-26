#include <stdio.h>

int main() {
	int j;
	for (int i = 1; i < 6; i++) {
		for (j = 0; j < (5 - i); j++) {
			printf(" ");
		}
		for (j = 1; j < 2 * i; j++) {
			printf("*");
		}
		for (j = 0; j < (5 - i); j++) {
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}