#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n, x, y, max_x = 0, max_y = 0, xy[101][101] = {0, }, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x + 10 > max_x)
            max_x = x + 10;
        if (y + 10 > max_y)
            max_y = y + 10;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                xy[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < max_x; i++) {
        for (int j = 0; j < max_y; j++){
            if (xy[i][j] == 1)
                sum++;
        }
    }
    printf("%d", sum);

    return 0;
}