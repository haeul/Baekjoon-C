#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int arr[1000];
    int A = 0, B = 0, n = 2, sum = 0;

    scanf("%d %d", &A, &B);

    arr[0] = 1;

    for (int i = 1; i < B; i++) {
        arr[i] = n;
        if (arr[i - n + 1] == n) {
            n++;
        }
    }
    
    for (int i = A - 1; i < B; i++) {
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}