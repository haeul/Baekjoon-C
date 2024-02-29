#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int x, n, a, b, c = 0;

    scanf("%d\n%d", &x, &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        c += (a * b);
    }

    if (x == c)
        printf("Yes");
    else
        printf("No");

    return 0;
}