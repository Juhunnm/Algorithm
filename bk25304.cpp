#include <stdio.h>

int main() {
    int Xx, Nn, num = 0;
    scanf("%d %d", &Xx, &Nn);

    for (int i = 1; i <= Nn; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        num += a * b;
    }

    if (num == Xx) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
