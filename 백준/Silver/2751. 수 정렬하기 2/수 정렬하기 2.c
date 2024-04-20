#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int main() {
    int N;
    
    scanf("%d", &N);

    int* num = malloc(sizeof(int) * N);

    for (int a = 0; a < N; a++) {
        scanf("%d", &num[a]);
    }
    qsort(num, N, sizeof(int), compare);
    for (int i = 0; i < N; i++) {
        printf("%d\n", num[i]);
    }

    free(num);

    return 0;
}