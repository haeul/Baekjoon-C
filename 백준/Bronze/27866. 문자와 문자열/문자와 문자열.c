#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char S[1000] = { 0, };
    int i = 0;

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c", S[i-1]);

    return 0;
}