#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int h, m, time;
    int a, b;
    
    scanf("%d %d\n%d", &h, &m, &time);
    
    int endTime = h * 60 + m + time;
    a = endTime / 60;
    b = endTime % 60;

    if (endTime >= 24 * 60) {
        if ((endTime - 24 * 60) < 60)
            printf("0 %d", endTime - 24 * 60);
        else
            printf("%d %d", (endTime - 24 * 60) / 60, (endTime - 24 * 60) % 60);
    }
    else if (endTime < 60)
        printf("0 %d", endTime);
    else
        printf("%d %d", endTime / 60, endTime % 60);

    return 0;
}