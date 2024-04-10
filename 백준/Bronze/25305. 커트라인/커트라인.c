#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, k, x[1000] = { 0, }, temp;

    scanf("%d %d", &N, &k);

    for (int i = 0; i < N; i++) {
        scanf("%d ", &x[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("%d", x[k - 1]);

    return 0;
}