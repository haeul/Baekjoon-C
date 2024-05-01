#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int compare(const void* a, const void* b) {
    int m1 = *(int*)a;
    int m2 = *(int*)b;
    if (m1 < m2)
        return -1;
    else if (m1 > m2)
        return 1;

    return 0;
}

int binary_search(int arr[], int start, int end, int answer) {
    while (start <= end) {
        int mid = (start + end) / 2;  // 현재 배열의 중간

        if (arr[mid] == answer) {     // 탐색이 성공하면, 그 수의 위치(인덱스)를 리턴
            return 1;
        }
        else if (arr[mid] > answer) { // 중간 값이 찾으려는 값보다 크면
            end = mid - 1;    // 중간 값 바로 이전까지 탐색
        }
        else {  // 중간 값이 찾으려는 값보다 작으면 
            start = mid + 1;  // 중간 값 바로 다음부터 탐색
        }
    }
    return 0;  // 찾지 못하면 -1을 리턴
}

int main() {
    int N, M;

    scanf("%d", &N);
    int* nArr = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &nArr[i]);
    }
    qsort(nArr, N, sizeof(int), compare);

    scanf("%d", &M);
    int* mArr = malloc(sizeof(int) * M);

    for (int i = 0; i < M; i++) 
        scanf("%d", &mArr[i]);
       
    for (int i = 0; i < M; i++)
        printf("%d ", binary_search(nArr, 0, N-1, mArr[i]));
    
    free(nArr);
    free(mArr);

    return 0;
}