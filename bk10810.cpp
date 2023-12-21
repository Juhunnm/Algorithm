#include<stdio.h>
int main() {
    int ball[100] = { 0 };
    int N = 0, M = 0;
    int i = 0, j = 0, k = 0;
    scanf("%d %d", &N, &M);
    for (int a = 0; a < M; a++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int b = i; b <= j; b++) {
            ball[b] = k;
        }
    }
    for (int c = 1; c <= N; c++) {
        printf("%d ", ball[c]);
    }
    return 0;
}