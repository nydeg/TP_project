#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	printf("¬ведите два целых числа:\n");
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("%d\n", c);

	return 0;
}