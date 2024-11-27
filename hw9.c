#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int Convert(int ch) {
	int sub = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + sub;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - sub;
	}
	else {
		return ch;
	}
}

int main() {
	int* arr;
	arr = (int*)malloc(MAX_SIZE * sizeof(int));
	int i = 0;
	printf("Input> ");
	while (1) {
		int ch = getchar();
		if (ch == '\n') {
			break;
		}
		arr[i] = Convert(ch);
		i++;
	}
	printf("Ouput> ");
	for (int j = 0; j < i; j++) {
		putchar(arr[j]);
	}
	putchar('\n');
	free(arr);
	return 0;
}