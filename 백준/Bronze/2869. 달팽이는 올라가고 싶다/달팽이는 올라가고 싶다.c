#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int A, B, V, d;

    scanf("%d %d %d", &A, &B, &V);

    d = (V - B - 1) / (A - B) + 1;

    printf("%d", d);

    return 0;
}