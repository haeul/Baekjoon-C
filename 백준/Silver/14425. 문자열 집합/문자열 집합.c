#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int start, end, cnt;
char str1[10000][501];
char str2[10000][501];
char sorted[10000][501];

void merge(char arr[][501], int start, int middle, int end) { 
    int i = start;
    int j = middle + 1;
    int k = start;
    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= end) {
        if (strcmp(arr[i], arr[j]) < 0) {
            strcpy(sorted[k], arr[i]);
            i++;
        }
        else {
            strcpy(sorted[k], arr[j]);
            j++;
        }
        k++;
    }
    // 남은 데이터도 삽입
    if (i > middle) {
        for (int t = j; t <= end; t++) {
            strcpy(sorted[k], arr[t]);
            k++;
        }
    }
    else {
        for (int t = i; t <= middle; t++) {
            strcpy(sorted[k], arr[t]);
            k++;
        }
    }
    // 정렬된 배열을 삽입
    for (int t = start; t <= end; t++) {
        strcpy(arr[t], sorted[t]);
    }
    return;
}

void mergeSort(char arr[][501], int start, int end) {
    // 크기가 1보다 큰 경우
    if (start < end) {
        int middle = (start + end) / 2;
        mergeSort(arr, start, middle);
        mergeSort(arr, middle + 1, end);
        merge(arr, start, middle, end);
    }
    return;
}

int binary_search(char arr[][501], int start, int end, char answer[]) {
    while (start <= end) {
        int mid = (start + end) / 2;  // 현재 배열의 중간

        if (strcmp(arr[mid], answer) == 0) {     // 탐색이 성공하면, 그 수의 위치(인덱스)를 리턴
            return 1;
        }
        else if (strcmp(arr[mid], answer) > 0) { // 중간 값이 찾으려는 값보다 크면
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

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) 
        scanf("%s", &str1[i]);

    for (int i = 0; i < M; i++)
        scanf("%s", &str2[i]);

    mergeSort(str1, 0, N - 1);

    for (int i = 0; i < M; i++) {
        cnt += binary_search(str1, 0, N - 1, str2[i]);
    }
    printf("%d", cnt);

    return 0;
}