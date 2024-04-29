#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct {
    int num;
    int idx; //들어온 순서
    int ans;
}Point;

int isChange = 0;
int compare(const void* a, const void* b) {
    Point m1 = *(Point*)a;
    Point m2 = *(Point*)b;
    if (isChange == 0) {
        if (m1.num < m2.num)
            return -1;
        else if (m1.num > m2.num)
            return 1;
        else if (m1.num == m2.num) {
            if (m1.idx > m2.idx)
                return 1;
            else
                return -1;
        }
    }
    else {
        if (m1.idx < m2.idx)
            return -1;
        else if (m1.idx > m2.idx)
            return 1;
    }
    return 0;
}

int main() {
    int N, j = 0;
    
    scanf("%d", &N);

    Point* arr = (Point*)malloc(sizeof(Point) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d ", &arr[i].num);
        arr[i].idx = i;
    }

    qsort(arr, N, sizeof(Point), compare);

    arr[0].ans = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i].num == arr[i - 1].num) 
            arr[i].ans = arr[i - 1].ans;
        else
            arr[i].ans = arr[i - 1].ans + 1;
    }
    isChange = 1;
    qsort(arr, N, sizeof(Point), compare);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i].ans);
    }
    
    free(arr);

    return 0;
}