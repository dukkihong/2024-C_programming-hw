#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5];
	int odd[5];
	int even[5];
	int i;
	int odd_idx=0;
	int even_idx=0;

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[even_idx] = arr[i];
			even_idx++;
		}
		else {
			odd[odd_idx] = arr[i];
			odd_idx++;
		}
	}
	printf("\nOdd numbers: ");
	for (i = 0; i < odd_idx; i++) {
		printf("%d ", odd[i]);
	}
	printf("\nEven numbers: ");
	for (i = 0; i < even_idx; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}