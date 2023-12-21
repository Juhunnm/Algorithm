#include <stdio.h>
#include <stdlib.h>

int compared(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

        if (num1 < num2) {
            return -1;
     }
        if (num1 > num2) {
            return 1;
        }
        return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    int* numss = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &numss[i]);
    }

    qsort(numss, N, sizeof(int), compared);

    for (int i = 0; i < N; i++) {
        printf("%d\n", numss[i]);
    }

    free(numss);

    return 0;
}
