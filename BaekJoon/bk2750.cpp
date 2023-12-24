#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j, temp;
    scanf("%d", &N);
    int* numberss = (int*)malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        scanf("%d", &numberss[i]);
    }
    for (i = 0; i < N - 1; i++) {

        for (j = i + 1; j < N; j++) {

            if (numberss[i] >numberss[j]) {
                temp =numberss[i];
                numberss[i]= numberss[j];
                numberss[j] =temp;
            }
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d\n", numberss[i]);
    }

    free(numberss);

    return 0;
}

