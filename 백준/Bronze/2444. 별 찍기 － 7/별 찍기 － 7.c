#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int j = n - i - 1; j > 0; j--)
                printf(" ");
            for (int s = 0; s < 2*i+1; s++)
                printf("*");
            printf("\n");
        }
        else if (i >= n) {
            for (int j = 0; j < i - n + 1; j++)
                printf(" ");
            for (int s = 4 * n - 2 * i - 3; s > 0; s--)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}