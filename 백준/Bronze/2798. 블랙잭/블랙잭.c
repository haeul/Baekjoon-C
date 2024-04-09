#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, M, sum = 0, max = 0;
    int card[100];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < N; j++) {
            for (int k = 2; k < N; k++) {
                sum = card[i] + card[j] + card[k];
                if (i != j && j != k && i != k) {
                    if(sum <=M && sum>max)
                        max = sum;
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}