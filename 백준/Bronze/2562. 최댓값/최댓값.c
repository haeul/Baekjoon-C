#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n = 0, max;
    int a[9];

    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (int i = 0; i < 9; i++) {
        if (a[i] > max) {
            max = a[i];
            n = i;
        }
    }

    printf("%d\n%d", max, n+1);

    return 0;
}