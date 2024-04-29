#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct {
    int age;
    char name[101];
    int idx;
}Member;

int compare(const void* a, const void* b) {
    Member m1 = *(Member*)a;
    Member m2 = *(Member*)b;
    if (m1.age < m2.age)
        return -1;
    else if (m1.age > m2.age)
        return 1;
    else if (m1.age == m2.age) {
        if (m1.idx > m2.idx)
            return 1;
        else
            return -1;
    }
}

int main() {
    int N;
    
    scanf("%d", &N);

    Member* arr = (Member*)malloc(sizeof(Member) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d %s\n", &arr[i].age, &arr[i].name);
        arr[i].idx = i;
    }

    qsort(arr, N, sizeof(Member), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    
    return 0;
}