#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, a = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        a += i;
    }
    printf("%d", a);

    return 0;
}