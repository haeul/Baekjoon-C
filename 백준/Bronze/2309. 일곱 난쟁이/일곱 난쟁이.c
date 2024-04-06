#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int height[9] = { 0, };
    int sum = 0, gap = 0, stop = 0, hei = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &height[i]);
        sum += height[i];
    }
    gap = sum - 100;


    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (height[i] + height[j] == gap && stop == 0) {
                height[i] = 0;
                height[j] = 0;
                stop = 1;
                break;
            }
        }
    }
  

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (height[i] < height[j]) {
                hei = height[i];
                height[i] = height[j];
                height[j] = hei;
            }
        }
    }

    for (int i = 2; i < 9; i++) {
        printf("%d\n", height[i]);
    }



    return 0;
}