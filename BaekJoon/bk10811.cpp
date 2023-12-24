#include <stdio.h>

int main() {
    int ball[100] = { 0 };
    int N, M;
    int num = 0, num2 = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        ball[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &num, &num2);
        for (int j = num - 1; j < num2; j++) {
            int temp = ball[j];
            ball[j] = ball[num2 - 1];
            ball[num2 - 1] = temp;
            num2--;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", ball[i]);
    }

    return 0;
}
