#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, min, max;
    int a[1000000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        else if (a[i] > max)
            max = a[i];
    }
    printf("%d %d", min, max);

    return 0;
}