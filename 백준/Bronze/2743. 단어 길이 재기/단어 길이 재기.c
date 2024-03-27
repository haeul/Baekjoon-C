#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char S[100] = { 0, };
    int i = 0;

    scanf("%s", S);

    i = strlen(S);

    printf("%d", i);

    return 0;
}