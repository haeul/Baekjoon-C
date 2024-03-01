#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, v, count = 0;
    int arr[101];

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    scanf("%d", &v);

    for (int j = 0; j < n; j++) {
        if (v == arr[j])
            count++;
    }

    printf("%d", count);

    return 0;
}