#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    char N[31] = { NULL, };
    int B = 0;
    int len = 0;
    int num = 0;
    int result = 0;

    scanf("%s %d", N, &B);

    len = strlen(N);

    for (int i = 0; i < len; i++) {
        if (N[i] >= '0' && N[i] <= '9') 
            num = N[i] - '0';
        else
            num = N[i] - 'A' + 10;
        result = num * pow(B, len-i-1) + result;
    }

    printf("%d", result);

    return 0;
}