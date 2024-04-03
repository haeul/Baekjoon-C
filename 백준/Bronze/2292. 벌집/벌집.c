#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N = 0;

    scanf("%d", &N);

    if (N == 1)
        printf("1");
    else if (N >= 2 && N <= 7)
        printf("2");
    else {
        int a = 1, b = 3;
        int i = 2;
        int count = 3;
        while (true) {
            if (N >= 2 + (6 * a) && N <= 1 + (6 * b)) {
                break;
            }
            else {
                a = a + i;
                i++;
                b = b + i;
                count++;
            }
                
        }
        printf("%d", count);
    }

    return 0;
}