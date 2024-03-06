#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int arr[100] = { 0, };
    int n, m;

    scanf("%d %d", &n, &m);

    for (int t = 0; t < m; t++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int x = i - 1; x <= j - 1; x++) {
            arr[x] = k;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}