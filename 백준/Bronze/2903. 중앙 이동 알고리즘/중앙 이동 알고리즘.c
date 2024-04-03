#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N = 0;
    int result = 1;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        result = result * 2;
    }
    result++;

    result = pow(result, 2);

    printf("%d", result);

    return 0;
}