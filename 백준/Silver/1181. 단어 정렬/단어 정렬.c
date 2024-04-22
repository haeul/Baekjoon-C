#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int compare(char* a, char* b) {
    int num1 = strlen(a);
    int num2 = strlen(b);
    if (num1 < num2)
        return -1;
    else if (num1 > num2)
        return 1;
    else
        return strcmp(a, b);
}

int main() {
    int N;
    char arr[20001][51] = { 0, };

    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%s", &arr[i]);

    qsort(arr, N, 51*sizeof(char), compare);
    printf("%s\n", arr[0]);
    for (int i = 1; i < N; i++) {
        if (strcmp(arr[i - 1], arr[i]))
            printf("%s\n", arr[i]);
    }

    return 0;
}