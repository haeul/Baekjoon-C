#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    
    if (h > 0 && m >= 45)
        printf("%d %d", h, m - 45);
    else if (h == 0 && m < 45)
        printf("23 %d", 15 + m);
    else if (h == 0 && m >= 45)
        printf("%d %d", h, m - 45);
    else
        printf("%d %d", h - 1, 15 + m);


    return 0;
}