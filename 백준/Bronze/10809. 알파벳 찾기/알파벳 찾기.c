#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[101];
    int c1[26];
    int len = 0;
    
    scanf("%s", &s1);

    for (int i = 0; i < 26; i++) {
        c1[i] = -1;
    }

    len = strlen(s1);

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < len; j++) {
            if ((s1[j] - 97) == i && c1[i] == -1) {
                c1[i] = j;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", c1[i]);
    }

    return 0;
}