#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, e, f;

	scanf("%d\n%d", &a, &b);

	c = a * (b % 10);
	d = a * (b % 100 - (b % 10)) / 10;
	e = a * (b / 100);
	f = a * b;

	printf("%d\n%d\n%d\n%d", c, d, e, f);

	return 0;
}