#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int A[10];
    int N = 3, T = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d ", &A[j]);
        }
        int tmp = A[0];
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (A[j] > A[k]) {
                    tmp = A[j];
                    A[j] = A[k];
                    A[k] = tmp;
                }
            }
        }
        printf("%d\n", A[2]);
    }

    return 0;
}