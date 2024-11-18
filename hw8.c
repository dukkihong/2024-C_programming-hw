#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_standard_deviation(double a[], double average) {
	double sum = 0;
	double temp;
	for (int i = 0; i < 5; i++) {
		temp = a[i] - average;
		temp = pow(temp, 2);
		sum += temp;
	}
	sum /= 5;
	return sqrt(sum);
}

int main() {
	double num[5];
	double avg = 0;
	double deviation;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &num[i]);
		avg += num[i];
	}
	avg /= 5;
	deviation = get_standard_deviation(num, avg);
	printf("Standard Deviation = %.3lf \n", deviation);
	return 0;
}