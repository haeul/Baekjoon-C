#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int arr1[28] = { 0, };
    int arr2[30] = { 0, };
    int n;
    
    for (int i = 0; i < 28; i++) {
        scanf("%d\n", &arr1[i]);
    }

    for (int i = 1; i <= 30; i++) {
        for (int j = 0; j < 28; j++) {
            if (arr1[j] == i)
                arr2[i-1] = 1;
        }
    }

    for (int i = 0; i < 30; i++) {
        if (arr2[i] == 0)
            printf("%d\n", i + 1);
    }

    return 0;
}