#include <stdio.h>

int main() {
    int T, i, j;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}
