#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, count = 0, num = 665, len = 0;
    scanf("%d", &N);

    while (count<=N) {
        char str[10] = { NULL, };
        int x = 0;
        sprintf(str, "%d", num);
        len = strlen(str);
        for (int i = 0; i < len - 2; i++) {
            if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6') {
                x = 1;
            }
        }
        if (x == 1)
            count++;
        if (count == N)
            break;
        else
            num++;
    }
    printf("%d", num);

    return 0;
}