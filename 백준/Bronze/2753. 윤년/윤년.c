#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int year;

    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0)
        printf("1");
    else if (year % 100 == 0 && year % 400 == 0)
        printf("1");
    else
        printf("0");
 
    return 0;
}