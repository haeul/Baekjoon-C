#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n = 0, Fn[20] = { 0, };

    scanf("%d", &n);

    Fn[1] = 1;

    for (int i = 2; i <= n; i++){
        Fn[i] = Fn[i-1] + Fn[i-2];
    }
    printf("%d", Fn[n]);

    return 0;
}