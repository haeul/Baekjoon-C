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

    for (int k = 0; k < n; k++) {
        arr[k] = k + 1;
    }

    for (int k = 0; k < m; k++) {
        int i, j, cpb;
        scanf("%d %d", &i, &j);
        cpb = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = cpb;
    }

    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}