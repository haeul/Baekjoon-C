#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    long long int n;

    scanf("%lld", &n);

    printf("%lld\n3", n*(n-1)*(n-2)/6);

    return 0;
}