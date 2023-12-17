#include <stdio.h>

int main() {
    int A, B, C, temp = 0;
    scanf("%d %d %d", &A, &B, &C);

    if (B + C < 60) {
        B += C;
    }
    else {
        temp = (B + C) / 60;
        A += temp;
        if (A >= 24) {
            A = A - 24;
        }
        B = (B + C) % 60;
    }

    printf("%d %d", A, B);

    return 0;
}