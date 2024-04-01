#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N = 0;
    int B = 0;
    int i = 0;
    int len = 0;
    char result[31] = { NULL, };
    char c = 0;

    scanf("%d %d", &N, &B);

    while (true) {
        if (N % B >= 0 && N % B <= 9) {
            c = N % B;
            result[i] = c + 48;
        }
        else {
            c = N % B;
            result[i] = c + 55;
        }
        if (N / B == 0) 
            break;

        N = N / B;
        i++;
    }

    len = strlen(result);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    return 0;
}