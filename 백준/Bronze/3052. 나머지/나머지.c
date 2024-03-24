#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int arr1[10] = { 0, };
    int arr2[42] = { 0, };
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 42; j++) {
            if (arr1[i] % 42 == j)
                arr2[j] = 1;
        }
    }

    for (int i = 0; i < 42; i++) {
        if (arr2[i] == 1)
            count++;
    }

    printf("%d", count);


    return 0;
}