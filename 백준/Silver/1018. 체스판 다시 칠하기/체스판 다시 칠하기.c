#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int N, M, count = 0, min = 64, row, col;
    char board[51][51], color;

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", &board[i]);
    }

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int count = 0;
            row = 0;
            col = 0;
            color = 'W';
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (row % 2 == 0 && col % 2 == 0)
                        color = 'W';
                    else if (row % 2 == 0 && col % 2 == 1)
                        color = 'B';
                    else if (row % 2 == 1 && col % 2 == 0)
                        color = 'B';
                    else if (row % 2 == 1 && col % 2 == 1)
                        color = 'W';

                    if (board[k][l] != color) {
                        count++;
                    }
                    col++;
                }
                row++;
            }
            if (count < min)
                min = count;
            count = 0;
            row = 0;
            col = 0;
            color = 'B';
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (row % 2 == 0 && col % 2 == 0)
                        color = 'B';
                    else if (row % 2 == 0 && col % 2 == 1)
                        color = 'W';
                    else if (row % 2 == 1 && col % 2 == 0)
                        color = 'W';
                    else if (row % 2 == 1 && col % 2 == 1)
                        color = 'B';

                    if (board[k][l] != color) {
                        count++;
                    }
                    col++;
                }
                row++;
            }
            if (count < min)
                min = count;

        }
    }
    printf("%d", min);
    return 0;
}