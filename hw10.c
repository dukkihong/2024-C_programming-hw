#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct city {
	char name[20];
	char country[50];
	int population;
} City;

void showcityinfo(City* ptr) {
	printf("%s in %s with a population of %d people \n", ptr->name, ptr->country, ptr->population);
}
int main() {
	struct city arr[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(arr[i].name,sizeof(arr[i].name),stdin);
		arr[i].name[strcspn(arr[i].name, "\n")] = 0;
		printf("Country> ");
		fgets(arr[i].country,sizeof(arr[i].country),stdin);
		arr[i].country[strcspn(arr[i].country, "\n")] = 0;
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
		getchar();
	}
	for (int i = 0; i < 3; i++) {
		printf("%d. ", i+1);
		showcityinfo(&arr[i]);
	}

	return 0;
}