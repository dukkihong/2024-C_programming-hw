#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int m;
	printf("Input two integers : ");
	scanf("%d %d",&n,&m);
	printf("%d & %d = %d\n", n, m, n & m);
	printf("%d | %d = %d\n", n, m, n | m);
	printf("%d ^ %d = %d\n", n, m, n ^ m);
	return 0;
}