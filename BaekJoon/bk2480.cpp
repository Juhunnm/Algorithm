#include <stdio.h>

int main() {
    int A, B, C, tmp = 0;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B && A == C) {
        tmp = 10000 + A * 1000;
    }
    else if ((A == B && A != C) || (A == C && A != B)) {
        tmp = 1000 + A * 100;
    }
    else if (B == C && B != A) {
        tmp = 1000 + B * 100;
    }
    else {
        int max = A;
        max = (max > C) ? max : C;
        max = (max > B) ? max : B;
        tmp = max * 100;
    }

    printf("%d", tmp);

    return 0;
}