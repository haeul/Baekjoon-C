#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    char arr[5][16] = { NULL, };
    int max = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
        if (strlen(arr[i]) > max)
            max = strlen(arr[i]);
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i] == NULL)
                continue;
            else
                printf("%c", arr[j][i]);
        }
    }

    return 0;
}