#include <stdio.h>

int main() {
    int N, Kk;
    scanf("%d %d", &N, &Kk);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int swap = 0;
    for (int lastt = N - 1; lastt > 0; lastt--) {
        int maxIndex = 0;
        for (int i = 1; i <= lastt; i++) {
            if (A[i] > A[maxIndex]) {
                maxIndex = i;
            }
        }

        if (lastt != maxIndex) {
            // 교환
            int temp = A[lastt];
            A[lastt] = A[maxIndex];
            A[maxIndex] = temp;
            swap++;

            if (swap == Kk) {
                for (int j = 0; j < N; j++) {
                    printf("%d ", A[j]);
                }
                return 0;
            }
        }
    }

    // 교환 횟수가 Kk보다 작은 경우
    if (swap < Kk) {
        printf("-1\n");
    }

    return 0;
}
