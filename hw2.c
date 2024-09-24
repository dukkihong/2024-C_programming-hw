#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float kilo;
	float mile;
	printf("Please enter kilometers: ");
	scanf("%f", &kilo);
	mile = kilo / 1.609;
	printf("%g km is equal to %.1f miles", kilo, mile);
	return 0;
}