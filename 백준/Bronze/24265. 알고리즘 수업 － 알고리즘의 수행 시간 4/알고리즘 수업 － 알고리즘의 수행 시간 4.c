#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    long long int n;

    scanf("%lld", &n);

    long long int x = 0;
    x = (n * (n - 1)) / 2;
    printf("%lld\n2", x);

    return 0;
}