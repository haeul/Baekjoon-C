#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    char arr1[1000001] = {0, };
    int count = 0;

    scanf("%[^\n]s", arr1);

    char* ptr = strtok(arr1, " ");
    
    while (ptr != NULL) {
        count += 1;
        ptr = strtok(NULL, " ");
    }

    printf("%d", count);

    return 0;
}