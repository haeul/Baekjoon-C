#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char S[1000] = { 0, };
    char A[10][2];
    int t = 0;
    int len = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", &S);
        len = strlen(S);
        if (len == 1) {
            A[i][0] = S[0];
            A[i][1] = S[0];
        }
        else {
            A[i][0] = S[0];
            A[i][1] = S[len - 1];
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%c%c\n", A[i][0], A[i][1]);
    }

    return 0;
}