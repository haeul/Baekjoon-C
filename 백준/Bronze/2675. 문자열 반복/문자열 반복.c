#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t, r, len;
    char s1[21];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %s", &r, &s1);
        len = strlen(s1);
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < r; k++) {
                printf("%c", s1[j]);
            }
        }
        printf("\n");

    }

    return 0;
}