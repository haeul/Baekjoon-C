#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, a, b;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}