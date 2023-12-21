#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int swap = 0;
    for (int last = N; last > 1; last--) {
        for (int i = 0; i < last - 1; i++) {
            if (A[i] > A[i + 1]) {
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
                swap++;
                if (swap == K) {
                    printf("%d %d\n", A[i], A[i + 1]);
                    return 0;
                }
            }
        }
    }

    if (swap < K) {
        printf("-1\n");
    }

    return 0;
}
