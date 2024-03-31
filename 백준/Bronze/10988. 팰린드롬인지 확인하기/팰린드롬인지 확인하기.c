#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    char arr[101] = { NULL, };
    int len = 0;
    int check = 0;

    scanf("%s", arr);

    len = strlen(arr);

    if (len == 1)
        printf("1");
    else {
        for (int i = 0; i < len / 2; i++) {
            if (arr[i] != arr[len - i - 1]) {
                check = 0;
                break;
            }
            else if (arr[i] == arr[len - i - 1]) {
                check = 1;
            }
        }
        printf("%d", check);
    }
    

    return 0;
}