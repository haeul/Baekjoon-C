#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, num;
    int count[10001] = { 0, };
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d\n", &num);
        count[num] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < count[i]; j++) {
            printf("%d\n", i);
        }
    }
    

    return 0;
}