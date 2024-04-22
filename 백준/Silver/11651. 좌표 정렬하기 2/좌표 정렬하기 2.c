#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct {
    int x;
    int y;
}Point;

int compare(const void* a, const void* b) {
    Point num1 = *(Point*)a;
    Point num2 = *(Point*)b;
    if (num1.y < num2.y)
        return -1;
    if (num1.y > num2.y)
        return 1;
    else if (num1.y == num2.y) {
        if (num1.x > num2.x)
            return 1;
        else
            return -1;
    }
}

int main() {
    int N = 0;

    scanf("%d", &N);
    Point* arr = (Point*)malloc(sizeof(Point) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, N, sizeof(Point), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    return 0;
}