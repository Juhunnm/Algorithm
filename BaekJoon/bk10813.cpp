#include<stdio.h>
//도현이는 N개의 바구는를 가지고 있으며 각각 번호가 매겨져있음
//바구니에는 공 1개씩 있고 처음에는 바구니 번호 === 공 번호
//M번 공을 바꿀것이며 공을 바꿀 바구니 2개를 선택하고 스왑 이후 출력

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int N, M;
    int i, j;
    int ball[100] = { 0 };

    scanf("%d %d", &N, &M);
    for (int num = 1; num <= N; num++) {
        ball[num] = num;
    }

    for (int k = 0; k < M; k++) {
        scanf("%d %d", &i, &j);
        swap(&ball[i], &ball[j]);
    }
    for (int k = 1; k < N + 1; k++) {
        printf("%d ", ball[k]);

    }
    return 0;
}