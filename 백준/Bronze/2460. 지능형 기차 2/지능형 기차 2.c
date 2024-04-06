#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int in = 0, out = 0, n = 0, max = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &out, &in);
        n = n - out;
        n = n + in;
        if (n > max)
            max = n;
    }

    printf("%d", max);

    return 0;
}