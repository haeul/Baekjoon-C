#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long double a, b, c;

	scanf("%Lf %Lf", &a, &b);
	c = a / b;
	printf("%.12Lf", c);

	return 0;
}