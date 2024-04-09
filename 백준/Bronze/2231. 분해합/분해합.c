#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, result = 0;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        char str[10];
        int len = 0, sum = 0;;
        sprintf(str, "%d", i);
        len = strlen(str);
        for (int j = 0; j < len; j++) 
            sum += str[j] - '0';
        if (sum + i == N) { 
            result = i;
            break;
        }
    }
    if (result == 0)
        printf("0");
    else
        printf("%d", result);

    return 0;
}