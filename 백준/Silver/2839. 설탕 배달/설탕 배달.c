#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, min = 2000;

    scanf("%d", &N);

    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1666; j++) {
            if ((i * 5) + (j * 3) == N) {
                if (i + j < min) {
                    min = i + j;
                }
            }
        }
    }
    if (min == 2000)
        printf("-1");
    else
        printf("%d", min);

    return 0;
}