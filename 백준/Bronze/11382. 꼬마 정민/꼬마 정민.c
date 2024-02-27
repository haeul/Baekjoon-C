#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int a, b, c;

	scanf("%llu %llu %llu", &a, &b, &c);

	printf("%llu", a+b+c);

	return 0;
}