#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        printf("%d\n", a + b);

    }

    return 0;
}