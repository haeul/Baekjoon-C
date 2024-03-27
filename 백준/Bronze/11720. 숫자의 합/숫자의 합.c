#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[101];
    char c1;
    int n, sum = 0;

    scanf("%d", &n);
    scanf("%s", &s1);

    for (int i = 0; i < n; i++) {
        c1 = s1[i];
        sum = sum + (c1 - '0');
    }

    printf("%d", sum);

    return 0;
}