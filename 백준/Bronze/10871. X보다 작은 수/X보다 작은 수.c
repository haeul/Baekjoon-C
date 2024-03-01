#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, x, count = 0;
    int a[10000];

    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
        if (x > a[i])
            printf("%d ", a[i]);
    }

    return 0;
}