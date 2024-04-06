#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N = 0, sosu = 0;
    int n[100] = { 0, };

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d ", &n[i]);
        int count = 0;
        if (n[i] != 1) {
            for (int j = 1; j <= n[i]; j++) {
                if (n[i] % j == 0) 
                    count++;
            }
            if (count == 2)
                sosu++;
        }
    }
    printf("%d", sosu);

    return 0;
}