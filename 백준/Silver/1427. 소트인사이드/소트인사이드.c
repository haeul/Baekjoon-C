#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int compare(const void* a, const void* b) {
    char num1 = *(char*)a;
    char num2 = *(char*)b;
    if (num1 > num2)
        return -1;
    if (num1 < num2)
        return 1;
    return 0;
}

int main() {
    int N;
    char arr[11] = { 0, };
    
    scanf("%d", &N);
    sprintf(arr, "%d", N);
    int len = strlen(arr);
    qsort(arr, len, sizeof(char), compare);

    for (int i = 0; i < len; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}