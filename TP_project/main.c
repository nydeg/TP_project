#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	printf("¬ведите два целых числа:\n");
	scanf("%d%d", &a, &b);
	printf("%d%d\n", a, b);

	return 0;
}