#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int n = 1;
    int a, b;
    int end_of_interval = 0;

    while (!end_of_interval) {
        // X가 해당 구간에 속할 때
        if (X <= (n * (n + 1)) / 2) {
            int idx = X - (n * (n - 1)) / 2;
            if (n % 2 == 0) { // 짝수 번째 줄일 때
                a = idx;
                b = n - idx + 1;
            } else { // 홀수 번째 줄일 때
                a = n - idx + 1;
                b = idx;
            }
            end_of_interval = 1; // 구간에 속했으므로 반복문 종료
        }
        n++;
    }

    printf("%d/%d\n", a, b);

    return 0;
}