#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int M, N, sum = 0, min = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = M; i <= N; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2) {
            if (min == 0)
                min = i;
            sum += i;
        }
    }

    if (min == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);

    return 0;
}