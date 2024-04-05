#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n = 0, T = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int remain[100] = { NULL, };
        int m = 0, count = 0;
        scanf("%d", &n);
        while (n != 0) {
            remain[m++] = n % 2;
            n = n / 2;
        }
        for (int j = 0; j < m; j++) {
            if (remain[j] == 1) {
                printf("%d ", count);
            }
            count++;
        }
    }


    return 0;
}