#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    long long int S, i = 1, count = 0, k = 0;

    scanf("%lld", &S);

    for (i = 0; i < 100000000; i++) {
        k = i * (i + 1) / 2;
        if (S - k <= i) {
            count = i;
            break;
        }
    }
    printf("%lld", count);


    return 0;
}