#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int arr[82][82] = { 0, }, x = 0, y = 0, max = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", x+1, y+1);

    return 0;
}