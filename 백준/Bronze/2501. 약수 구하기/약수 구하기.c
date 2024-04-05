#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N = 0, K = 0, m = 0;
    int count = 0;

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K)
                m = i;
        }
    }

    printf("%d", m);

    return 0;
}