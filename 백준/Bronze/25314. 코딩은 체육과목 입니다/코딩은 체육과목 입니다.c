#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n / 4; i++) {
        printf("long ");
    }

    printf("int");

    return 0;
}