#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int T = 0;
    int C = 0;
    
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int Q = 0;
        int D = 0;
        int N = 0;
        int P = 0;
        scanf("%d", &C);
        while (C / 25 != 0) {
            Q = C / 25;
            C = C % 25;
        }
        while (C / 10 != 0) {
            D = C / 10;
            C = C % 10;

        }
        while (C / 5 != 0) {
            N = C / 5;
            C = C % 5;

        }
        while (C / 1 != 0) {
            P = C / 1;
            C = C % 1;

        }
        printf("%d %d %d %d\n", Q, D, N, P);
    }

    return 0;
}