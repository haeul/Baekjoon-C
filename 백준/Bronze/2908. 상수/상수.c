#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    char A[4];
    char B[4];
    char C;
    int numA = 0;
    int numB = 0;

    scanf("%s %s", A, B);

    C = A[0];
    A[0] = A[2];
    A[2] = C;

    C = B[0];
    B[0] = B[2];
    B[2] = C;

    numA = atoi(A);
    numB = atoi(B);

    if (numA > numB)
        printf("%d", numA);
    else if (numA < numB)
        printf("%d", numB);

    return 0;
}