#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n1 = 0, n2 = 0;
    int gcd = 0, lcm = 0; //최대공약수 최소공배수

    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0)
            lcm = i;
    }

    gcd = n1 * n2 / lcm;

    printf("%d\n%d", lcm, gcd);

    return 0;
}