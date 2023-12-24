#include <stdio.h>

int main() {
    int N, Start;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &Start);

    for (int i = 0; i < N && Start > 0; i++) {
        int MaxN = i;
        for (int j = i + 1; j < N && j <= i + Start; j++) {
            if (A[j] > A[MaxN]) {
                MaxN = j;
            }
        }
        while (MaxN > i) {
            int temp = A[MaxN];
            A[MaxN] = A[MaxN - 1];
            A[MaxN - 1] = temp;
            MaxN--;
            Start--;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
