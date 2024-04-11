#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a1, a0, c, n0, x;

    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);

    for (int i = n0; i <= 100; i++) {
        if (a1 * i + a0 <= c * i)
            x = 1;
        else {
            x = 0;
            break;
        }
    }
    printf("%d", x);
    return 0;
}